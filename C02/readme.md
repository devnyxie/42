strcpy: (String Copy)
strcpy copies a null-terminated string from src to dest. It copies until it reaches the null terminator (\0) in the src string.


Key Concern:

    If dest is too small to hold the source string, it can cause a buffer overflow, which may lead to security vulnerabilities or program crashes.

Example (safe):
char src[] = "Hello";
char dest[10];
strcpy(dest, src);  // Safe: dest has enough space


Example (dangerous):
char src[] = "Hello";
char dest[3];
strcpy(dest, src);  // Dangerous: dest is too small, leading to a buffer overflow


======================================

strncpy: (String Copy with Size Limit)
strncpy copies up to n characters from src to dest. If src is shorter than n, it pads the remaining space with null characters ('\0') until it reaches n characters.

Key Concern:

    strncpy doesn’t automatically null-terminate the string if the number of characters copied is equal to n. You may need to manually add the null terminator if truncation happens and the source string is longer than n

Example:

char src[] = "Hello";
char dest[10];
strncpy(dest, src, 5);  // Safe: Copies "Hello" and adds null terminator
dest[5] = '\0';         // Optional, but not necessary in this case because src is shorter than 10.

Example (With Potential Truncation):

char src[] = "Hello, World!";
char dest[6];
strncpy(dest, src, 5);  // Only copies the first 5 characters: "Hello"
dest[5] = '\0';         // Manually add the null terminator since it may not be there.
