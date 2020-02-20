#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int bool;

int N = 3;            
int EMPTY = 0;        
int STOP_INPUT = -1; 

bool fill_sud(int **sud, int row, int col);
void print_sud(int **sud);
bool is_legal(int **sud, int row, int col, int val);
bool is_row_ok(int *row, int col, int val);
bool is_col_ok(int **sud, int row, int col, int val);
bool is_sqr_ok(int **sud, int row, int col, int val);
bool is_sudoku_ok(int **sud);

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

bool fill_sud(int **sud, int row, int col)
{
    int next_row = (col == N*N - 1) ? row + 1 : row;

    int next_col = (col + 1) % (N*N);

    if(row == N*N)  
        return true;

    if(sud[row][col] != EMPTY)
        return fill_sud(sud, next_row, next_col);

    for(int value = 1; value <= N*N; value++)
    {
        sud[row][col] = value;

        if(is_legal(sud, row, col, value) && fill_sud(sud, next_row, next_col))
            return true;

        sud[row][col] = EMPTY;
    }

    return false;
}

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

bool is_legal(int **sud, int row, int col, int val)
{
    return (is_row_ok(sud[row], col, val) &&
            is_col_ok(sud, row, col, val) &&
            is_sqr_ok(sud, row, col, val));
}

bool is_row_ok(int *row, int col, int val)
{
    for(int i = 0; i < N*N; i++)
        if(i != col && row[i] == val)
            return false;

    return true;
}

bool is_col_ok(int **sud, int row, int col, int val)
{
    for(int i = 0; i < N*N; i++)
        if(i != row && sud[i][col] == val)
            return false;

    return true;
}

bool is_sqr_ok(int **sud, int row, int col, int val)
{
    int row_corner = (row / N) * N;

    int col_corner = (col / N) * N;

    for(int i = row_corner; i < (row_corner + N); i++)
        for(int j = col_corner; j < (col_corner + N); j++)
            if((i != row || j != col) && sud[i][j] == val)
                return false;     

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
			value = sud[i][j];  
			*(sud_line + N*N*i + j) = value;
			if (!value)
				count++;
		}
	if ((81 - count) < 17)
		return false;
	
	if (num_of_distinct_values(sud_line, digits) < 8)
		return false;

	return true; 
}
