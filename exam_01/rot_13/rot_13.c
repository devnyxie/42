#include <unistd.h>

void rot_13(char *str) {
    char result;
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            result = ((*str - 'a' + 13) % 26) + 'a';
        } else if (*str >= 'A' && *str <= 'Z') {
            result = ((*str - 'A' + 13) % 26) + 'A';
        } else {
            result = *str;  // Non-alphabet characters remain unchanged
        }
        write(1, &result, 1);
        str++;
    }
}

int main(int argc, char **argv) {
    if (argc == 2) {
        rot_13(argv[1]);
    }
    write(1, "\n", 1);
    return 0;
}
