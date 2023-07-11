#include <unistd.h>

int ft_writeNb(int i)
{
    char number;

    number = (i % 10) + '0';
    i = i /10;
    if ( i != 0)
        ft_writeNb(i);
    write(1,&number, 1);
}


int main (void)
{
    int i;

    i = 0;
    while(i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if(i % 3 == 0)
            write(1,"fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_writeNb(i);
        write(1,"\n", 1);
        i++;
    }
}