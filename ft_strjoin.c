char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*string;
	size_t			len;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(string = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		string[i++] = s1[j++];
	j = 0;
	while (s2[j])
		string[i++] = s2[j++];
	string[i] = '\0';
	return (string);
}
