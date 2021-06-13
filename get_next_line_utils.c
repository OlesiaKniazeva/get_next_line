#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = c - '0';
	while (s && *s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

int	ft_strlen(const char *t)
{
	int	a;

	a = 0;
	while (t && *t)
	{
		a++;
		t++;
	}
	return (a);
}

char	*ft_strdup(const char *s1)
{
	char	*temp;
	char	*pointer;
	int		a;

	a = 0;
	pointer = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (pointer == NULL)
		return (NULL);
	temp = pointer;
	while (*s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	*temp = '\0';
	return (pointer);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*newstr;
	char		*new;

	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (NULL);
	new = newstr;
	while (s1 && *s1)
	{
		*newstr = *s1;
		newstr++;
		s1++;
	}
	while (*s2)
	{
		*newstr = *s2;
		newstr++;
		s2++;
	}
	*newstr = '\0';
	return (new);
}
