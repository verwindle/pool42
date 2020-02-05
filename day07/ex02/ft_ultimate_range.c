#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;

    if (max - min <= 0)
    {
        range = NULL;
        return (**range);
    }
    int *arr;
    size = (max - min);
    arr = (int*)malloc(sizeof(int)*size);
    i = 0;
    while (min < max)
        arr[i++] = min++;
    return (size);
}

int main()
{
    //char str[7] = "calcul\0";
    int* arr = {0, 1, 2};
    printf("%d\n", ft_ultimate_range(arr, 0, 3));

    return (0);
}