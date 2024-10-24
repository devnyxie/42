#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }   
    return (i);
}

int count_words(char *str, char *charset){
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == *charset)
        {
            in_word = 0; // We're now outside a word
        }
        else
        {
            if (in_word == 0) // We found a new word
            {
                in_word = 1;
                count++;
            }
        }
        str++;
    }
    return (count);
}

char **ft_split(char *str, char *charset){
    int i = 0;
    int j;
    int word_count = count_words(str, charset);
    // allocate memory for an array of words (size of each word is unknown yet)
    char **result = malloc((word_count + 1) * sizeof(char *));
    char *start;

    while (*str)
    {
        j = 0;

        // Skip delimiters at the beginning of the str
        if (*str == *charset)
        {
            str++;
            continue;
        }

        // Mark the start of the word
        start = str;

        // Move to the end of the word
        while (*str && *str != *charset)
        {
            str++;
        }

        // Calculate the length of the word
        int word_length = str - start;

        // Allocate memory for the each word and copy it
        result[i] = malloc((word_length + 1) * sizeof(char)); // +1 for '\0'
        if (result[i] == NULL)
        {
            return NULL;
        }

        // Copy the word into result[i]
        while(j < word_length)
        {
            result[i][j] = start[j];
            j++;
        }
        result[i][word_length] = '\0'; // Null-terminate the string

        i++;
    }

    result[i] = NULL; // Null-terminate the array of strings
    return result;
}

