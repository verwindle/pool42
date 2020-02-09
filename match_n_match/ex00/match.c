#include <stdio.h>

int is_star(char *s)
{
    int i;

    i = 0;
    while ((s[i] != '\0') && (++i))
    if (s[i] == '*')
        return (i);
    return (-1);
 
}

char *find_substr_left(char *s);
char* copy_substr_left(char *s1, char s2);


int match(char *s1, char *s2)
{
    //s2 contains *
    // main.c <- *.c
    char *subs;
    int pos;

    if (is_star(s2) == -1) // null turn in
        return (0);
    /* while ( *s2 != '\0') */ // FIXME!
        pos = is_star(s2);
        subs = find_substr_left(s1[pos]);
        copy_substr_left(s1, s2);
        s2 = &s2[pos];

}