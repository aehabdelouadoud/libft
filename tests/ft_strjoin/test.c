int	main(void)
{
	char	*s1;
	char	*s2;
	char	*res;

	s1 = "Hello ";
	s2 = "World";

	res = ft_strjoin(s1, s2);
#include <stdio.h>
	printf("%s", res);
	free(res);
}
