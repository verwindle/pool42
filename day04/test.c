#include <stdio.h> 
#include <time.h>
#include "ex03/ft_recursive_power.c"

int main()
{
	clock_t t;
	t = clock();
	int res = ft_recursive_power(1, 2000);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("result:\t%i\n", res);
	printf("function took %f seconds to execute \n", time_taken); 
	return (0);
}
