#include <unistd.h>

int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        char to_print;
        if (letter % 2 == 0)
        {
            to_print = letter - 32;
        }
        else
        {
            to_print = letter;
        }
        write(1, &to_print, 1);
        letter++;
    }
    write(1, "\n", 1);
    return (0);
}

