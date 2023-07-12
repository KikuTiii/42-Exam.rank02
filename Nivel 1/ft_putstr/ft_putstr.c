#include <unistd.h>

void ft_putstr(char *str)
{
    int count;

    count = 0;
    if(str[count] == 0)
        return ;
    while(str[count] != '\0')
    {
        write(1, str++, 1);
    }
}