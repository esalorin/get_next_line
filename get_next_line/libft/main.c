#include "libft.h"
#include <stdio.h>
int     main(void)
{
    char    *haystack = "Hello World";
    char    c = 'd';
    char    *needle = "d";
    ft_putstr(ft_strchr(haystack, (int)c));
    ft_putstr(ft_strstr(haystack, needle));
    printf("%s\n", ft_strnstr(haystack, needle, 11));
    return (0);
}
