#include <unistd.h>

char    *ft_strcpy(char *dest, char *str)
{
    int count;

    count = 0;
    while(str != '\0')
    {
        dest[count] = str[count];
        count++;
    }
    dest[count] = '\0';
    
    return(dest);
}