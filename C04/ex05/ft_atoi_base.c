#include <unistd.h>
#include <stdio.h>

//first, let's replicate ft_atoi

int	ft_atoi(char *str)
{
	// define vars
	int response;
	int neg_count;
	int sign;

	response = 0;
	neg_count = 0;
	sign = 1;
	//skip spaces, tabs etc
	while(*str == ' ' || *str == '\t' || *str == '\n' ||
           *str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}

	//minus/plus handling
	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
		{
			neg_count++;
		}
		str++;
	}

	//len zero handling?
	
	// negative count handling
	if(neg_count % 2 != 0)
	{
		sign = -1;
	}

	//output
	while(*str >= '0' && *str <= '9')
	{
		response = response * 10 + (*str - '0');
		str++;
	}
	return response * sign;
}

int main() {
    // Test Case 1: Simple positive number
    printf("Test 1: \"%s\" -> %d\n", "1234", ft_atoi("1234")); // Expected: 1234

    // Test Case 2: Simple negative number
    printf("Test 2: \"%s\" -> %d\n", "-1234", ft_atoi("-1234")); // Expected: -1234

    // Test Case 3: Number with leading whitespace
    printf("Test 3: \"%s\" -> %d\n", "   42", ft_atoi("   42")); // Expected: 42

    // Test Case 4: Multiple plus and minus signs
    printf("Test 4: \"%s\" -> %d\n", "++-+42", ft_atoi("++-+42")); // Expected: -42

    // Test Case 5: String with trailing characters
    printf("Test 5: \"%s\" -> %d\n", "1234ab567", ft_atoi("1234ab567")); // Expected: 1234

    // Test Case 6: String with mixed signs and numbers
    printf("Test 6: \"%s\" -> %d\n", "---+--+1234ab567", ft_atoi("---+--+1234ab567")); // Expected: -1234

    // Test Case 7: String with no numbers, only signs
    printf("Test 7: \"%s\" -> %d\n", "++--", ft_atoi("++--")); // Expected: 0

    // Test Case 8: Only whitespace
    printf("Test 8: \"%s\" -> %d\n", "     ", ft_atoi("     ")); // Expected: 0

    // Test Case 9: Empty string
    printf("Test 9: \"%s\" -> %d\n", "", ft_atoi("")); // Expected: 0

    // Test Case 10: String with no signs and letters
    printf("Test 10: \"%s\" -> %d\n", "hello123", ft_atoi("hello123")); // Expected: 0

    return 0;
}
