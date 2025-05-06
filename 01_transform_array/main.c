#include <stdio.h>
#include "transform.h"
#include <stdlib.h>

int main(void)
{
	int i;
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);

	int *newarr = transform_array(arr,size);
	for(i = 0;i < size;i++)
		printf("%d",arr[i]);
		printf("%d",newarr[i]);

	free(newarr);

	return 0;

}
