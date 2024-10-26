#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

void    test_case(char *test)
{
    unsigned int len_ex = strlen(test);
    unsigned int len_got = ft_strlen(test);

    printf("String: %s\nExpected ---> %u\nGot ---> %u\n---------------------------\n", test, len_ex, len_got);
}

int	main(void)
{
    char *test_1 = "Test for sttr";
    int num = 1337;
    char test_2[90] = {'\0'};
    char test_3 = 'Z';
    test_case(test_1);
    test_case(test_2);
    test_case(&test_3);
    test_case((char *)(&num));
    test_case(NULL);
    return (0);
}