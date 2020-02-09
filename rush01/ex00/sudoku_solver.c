#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int bool;
//========= Using ==========//

//========= Constants =========//
int N = 3;            // The size of 1 square in the sudoku.
int EMPTY = 0;        // A dot sign for an empty cell.
int STOP_INPUT = -1;  // A sign for stop get input.

//====== Function Declaration ======//
bool fill_sud(int **sud, int row, int col);
void print_sud(int **sud);
bool is_legal(int **sud, int row, int col, int val);
bool is_row_ok(int *row, int col, int val);
bool is_col_ok(int **sud, int row, int col, int val);
bool is_sqr_ok(int **sud, int row, int col, int val);
bool is_sudoku_ok(int **sud);

//========== Main ===========//
int main(int argc, char **argv)
{
    int *sud[N*N];
	for (int i = 0; i < N*N; ++i)
		sud[i] = (int*)malloc(sizeof(int) * N*N);
    
	for (int i = 0; i < N*N; ++i)
        for (int j = 0; j < N*N; ++j)
            sud[i][j] = argv[i + 1][j] - 48;  // The sudoku board.
	
	if (!is_sudoku_ok(sud)) {
		printf("Error\n");
		return (0);
	}

    fill_sud(sud, 0, 0);
    print_sud(sud);

    return 0;
}

//======== Fill Sudoku =========//
// Tries to fill-in the given sudoku board
// according to the sudoku rules.
// Returns whether it was possible to solve it or not.
bool fill_sud(int **sud, int row, int col)
{
    // Points to the row number of the next cell.
    int next_row = (col == N*N - 1) ? row + 1 : row;

    // Points to the column number of the next cell.
    int next_col = (col + 1) % (N*N);

    // If we get here, it means we succeed to solve the sudoku.
    if(row == N*N)  
        return true;

    // Checks if we are allowed to change the value of the current cell.
    // If we're not, then we're moving to the next one.
    if(sud[row][col] != EMPTY)
        return fill_sud(sud, next_row, next_col);

    // We're about to try and find the legal and appropriate value
    // to put in the current cell.
    for(int value = 1; value <= N*N; value++)
    {
        sud[row][col] = value;

        // Checks if 'value' can stay in the current cell,
        // and returns true if it does.
        if(is_legal(sud, row, col, value) && fill_sud(sud, next_row, next_col))
            return true;

        // Trial failed!
        sud[row][col] = EMPTY;
    }

    // None of the values solved the sudoku.
    return false;
}

//======== Print Sudoku ========//
// Prints the sudoku Graphically.
void print_sud(int **sud)
{
    char endl = '\n';
    for(int i = 0; i < N*N; i++)
    {
        for(int j = 0; j < N*N; j++)
            printf("%d ", sud[i][j]);
        printf("%c", endl);
    }
}

//========== Is Legal ==========//
// Checks and returns whether it's legal
// to put 'val' in A specific cell.
bool is_legal(int **sud, int row, int col, int val)
{
    return (is_row_ok(sud[row], col, val) &&
            is_col_ok(sud, row, col, val) &&
            is_sqr_ok(sud, row, col, val));
}

//========= Is Row OK =========//
// Checks and returns whether it's legal
// to put 'val' in A specific row.
bool is_row_ok(int *row, int col, int val)
{
    for(int i = 0; i < N*N; i++)
        if(i != col && row[i] == val)
            return false;       // Found the same value again!

    return true;
}

//========= Is Column OK =========//
// Checks and returns whether it's legal
// to put 'val' in A specific column.
bool is_col_ok(int **sud, int row, int col, int val)
{
    for(int i = 0; i < N*N; i++)
        if(i != row && sud[i][col] == val)
            return false;       // Found the same value again!

    return true;
}

//========= Is Square OK =========//
// Checks and returns whether it's legal
// to put 'val' in A specific square.
bool is_sqr_ok(int **sud, int row, int col, int val)
{
    int row_corner = (row / N) * N;
    // Holds the row number of the current square corner cell.

    int col_corner = (col / N) * N;
    // Holds the column number of the current square corner cell.

    for(int i = row_corner; i < (row_corner + N); i++)
        for(int j = col_corner; j < (col_corner + N); j++)
            if((i != row || j != col) && sud[i][j] == val)
                return false;       // Found the same value again!

    return true;
}

int	num_of_distinct_values(int *sud, int arr[])
{
	int i;
	int j;
	int num;

	i = 0;
	j = 0;
	num = 0;
	while (i < 9)
	{
		j = 0;
		while (j < N*N*N*N)
		{
			if (arr[i] == sud[j])
			{
				num++;
				break;
			}
			++j;
		}
		++i;
	}
	return (num);
}


bool is_sudoku_ok(int **sud)
{
	int *sud_line = (int*)malloc((sizeof(int) * N*N) * N*N);
	int value; 
	int count = 0;
	int digits[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(int i = 0; i < N*N; i++)
    	for (int j = 0; j < N*N; j++) {
			value = sud[i][j];  // rewrite 2D to 1D
			*(sud_line + N*N*i + j) = value;
			if (!value)
				count++;
		}
	if ((81 - count) < 17)
		return false;  // min clues in sudoku has to be at least 17 > https://www.technologyreview.com/s/426554/mathematicians-solve-minimum-sudoku-problem/
	
	if (num_of_distinct_values(sud_line, digits) < 8)
		return false; // sudoku with the only solution has to have not less than "n**2 - 1" distinct digits > http://pi.math.cornell.edu/~mec/Summer2009/Mahmood/More.html

	return true; 
}
