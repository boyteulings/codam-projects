char	*ft_strcpy(char *dest, char *src)
{
	char	*str;

	str = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
