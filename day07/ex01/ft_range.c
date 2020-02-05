#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int *ft_range(int min, int max)
{
    int i;

    if (max - min <= 0)
        return (NULL);
    int *arr;
    arr = (int*)malloc(sizeof(int)*(max - min));
    i = 0;
    while (min < max)
        arr[i++] = min++;
    return (arr);
}

int main()
{
    //char str[7] = "calcul\0";
    printf("%0" PRIXPTR "\n", (intptr_t)ft_range(0, 6));

    return (0);
}