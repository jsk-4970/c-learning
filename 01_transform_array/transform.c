#include <stdio.h>
#include "transform.h"
#include <stdlib.h>

int *transform_array(int *arr, int size){
	int i;
	int *newarr;
	newarr = malloc(sizeof(arr[0]) *size);
	if(newarr == NULL)
		return NULL;

	for(i = 0;i < size;i++)
		newarr[i] = arr[i]*2;
	return newarr;
}
