#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n)
{
        int     i;
        int     *ptr;

        ptr = s;
        i = 0;
        while (n)
        {
                ptr[i] = '\0';
                i++;
                n--;
        }
}

int	main(void)
{
	char	s[3] = "era";
	ft_bzero(s, 2);
	//bzero(s, 1);
	printf("%s\n", s);
}
