#include <stdio.h>
#include "strlen.h"

int main(void)
{
	const char *str = "hello";
	int len = ft_strlen(str);
	printf("length:%d",len);
	return(0);
}

