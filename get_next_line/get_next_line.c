/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:53:22 by joseoliv          #+#    #+#             */
/*   Updated: 2024/10/11 03:40:24 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_next_line(int fd)
{
	static char	*buffer[FD_MAX];
	char		*result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_line(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	result = filter_buffer(buffer[fd]);
	buffer[fd] = handle_next(buffer[fd]);
	return (result);
}

char	*filter_buffer(char *buffer)
{
	int		i;
	int		j;
	int		k;
	char	*result;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	k = i;
	if (buffer[i] == '\n')
		k++;
	result = ft_calloc(k + 1, sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		result[j] = buffer[j];
		j++;
	}
	return (result);
}

char	*read_line(int fd, char *buffer)
{
	char	*temp_buf;
	int		bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, sizeof(char));
	if (!buffer)
		return (NULL);
	temp_buf = ft_calloc(BUFFER_SIZE + 1, 1);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(buffer, '\n'))
	{
		bytes_read = read(fd, temp_buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(temp_buf);
			free(buffer);
			return (NULL);
		}
		temp_buf[bytes_read] = '\0';
		buffer = ft_strjoin_free_special(buffer, temp_buf);
	}
	free(temp_buf);
	return (buffer);
}

char	*handle_next(char *buffer)
{
	char	*result;
	char	*ptr;
	int		i;

	ptr = buffer;
	while (*buffer && *buffer != '\n')
		buffer++;
	if (!(*buffer))
	{
		free(ptr);
		return (NULL);
	}
	result = ft_calloc(ft_strlen(buffer + 1) + 1, sizeof(char));
	if (!result)
	{
		free (ptr);
		return (NULL);
	}
	buffer++;
	i = 0;
	while (*buffer)
		result[i++] = *buffer++;
	free (ptr);
	return (result);
}

/* int	main(void)
{
	int		fd;
	int		i;
	char	*line;

	i = 0;
	fd = open("./example2.txt", O_RDONLY);
	while (line = get_next_line(fd+1))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
} */