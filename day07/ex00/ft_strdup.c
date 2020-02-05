#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    int len;
    char* dest;

    i = 0;
    while (src[i] != '\0')
        ++i;
    len = i;
    dest = (char*)malloc(len + 1);
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }
    dest[i] = src[i];
    return (dest);
}

int main()
{
    char str[7] = "calcul\0";
    printf("%s\n", ft_strdup(str));

    return (0);
}