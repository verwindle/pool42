#include "ft_putchar.c"

void rush(int x, int y) {
	char alpha = 'A';
	char gamma = 'C';
	char beta = 'B';
	char edge_suspect;
	char space = ' ';
	char newline = '\n';
	char curr;

	//overinsurance
	if (x < 0) x = 0;
	if (y < 0) y = 0;

	for (int j = 0; j < y; ++j) {
		for (int i = 0; i < x; ++i) {
			if (!j) {
			edge_suspect = (!(i)) ? alpha : gamma;
			curr = (!i || !(x - i - 1)) ? edge_suspect : beta;
			}
			else if (!(y - j - 1)) {
				edge_suspect = (!i) ? gamma : alpha;
				curr = (!i || !(x - i - 1)) ? edge_suspect : beta;
			}
			else {
				curr = (!i || !(x - i - 1)) ? beta : space;
			}
			ft_putchar(curr); 
		}
		ft_putchar(newline);
	}
	//ft_putchar(newline);
}