#include <unistd.h>

int main(void)
{
    char letter = 'z';
    int is_uppercase = 0;

    while (letter >= 'a')
    {
        if (is_uppercase)
            write(1, &letter, 1);
        else
        {
            char uppercase = letter - 32;
            write(1, &uppercase, 1);
        }
        letter--;
        is_uppercase = !is_uppercase;
    }
    write(1, "\n", 1);
    return (0);
}
