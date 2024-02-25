#include <unistd.h>
#include <string.h>
#include <stdio.h>
char    *ifoverlap(void *dest, const void *src, size_t n, int *ptr, char *temporary);

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	size_t	counter;
	char	*temporary;
	int	bolean;
	int	*ptr;

	bolean = 0;
	ptr = &bolean;
	counter = n;
	i = 0;

	write(1, "v", 1);
	temporary = ifoverlap(dest, src, n, ptr, temporary);
	write(1, "a", 1);
	if (*ptr == 1)
	{
		while (n)
		{
			((char *)dest)[i] = temporary[i];
			 i++;
			 n--;
		}
	}
	else
	{
		while (n)
                {
                        ((char *)dest)[i] = temporary[i];
                         i++;
                         n--;
                }
	}
}

char	*ifoverlap(void *dest, const void *src, size_t n, int *ptr, char *temporary)
{
	int	i;
	size_t	counter;

	i = 0;
	counter = n;
	while (((char *)dest)[i] == '\0')
        {
		i++;
		counter--;
                if (((char *)dest)[i] != '\0' && counter > 0)
                {
			write(1, "a", 1);
                        i = 0;
                        counter = n;
                        while (counter)
                        {
                                temporary[i] = ((char *)src)[i];
                                i++;
                                counter--;
                        }
                        *ptr = 1;
                        return (temporary);
                }
        }
	return (((char *)src));
}

int	main(void)
{
	char    *src;
        char    dest[60];

        src = "eraumavez";
        ft_memmove(dest, src, 3);
	//memmove(dest, src, 3);
        printf("%s\n", dest);
}
