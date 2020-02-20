#include <stdio.h>

int *sorted(int arr[], int length)
{
	int i;
	int j;
	int tmp;

	i = 1;
	while (i < length)
	{
		j = i;
		while ((j) && (arr[j - 1] > arr[j]))
		{
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			--j;
		}
		++i;
	}
	return (arr);
}

int main() {
	int len = 4;
	int arr[4] = {2, 0, 1, 3};
	int* tmp_arr;
	tmp_arr = sorted(arr, len);
	int i = 0;
	while(len--)
		{
		arr[i] = tmp_arr[i];
		printf("%d\t", arr[i]);
		++i;
		}
	return 0;
}
