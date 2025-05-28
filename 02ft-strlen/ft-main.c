#include <stdio.h>
#include "ft-strlen.h"

int	main(void)
{
	const char *str = "Hello, 42!";
	int len = ft_strlen(str);
	printf("Length: %d\n", len);
	return (0);
}
