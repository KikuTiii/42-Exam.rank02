#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int temp;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                temp = argv[1][i] + 1 - 'a';
                while (temp > 0)
                {
                    write(1, &argv[1][i], 1);
                    temp--;
                }
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                temp = argv[1][i] + 1 - 'A';
                while (temp > 0)
                {
                    write(1, &argv[1][i], 1);
                    temp--;
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}