/* Author: Yoonhyuck WOO / JBNU_Industrial Information system Engineering
 Date; Sep. 19 2020
 Title: Two-Dimensional Arrays */

#include<stdio.h>

int main() 
{
	int x, y, z,temp = 0;
	int r = 0;
	int height = 5, width = 5;
	int** arr;
	arr = (int**)malloc(sizeof(int*) * height);
	for (int i = 0; i <height; i++) {
		arr[i] = (int*)malloc(sizeof(int) * width);
	}
	
	for (x = 0; x <5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			r++;
			printf("%3d ", arr[x][y]=r);
		}
		printf("\n");
	}

	for (z = 0; z < 5; z++)
	{
		temp = arr[z][z] + temp;
	}
	printf("%d\n", temp);
	
	for (x = 0; x<height; x++)
	{
		free(arr[x]);
	}
	free(arr);
	
	return 0;
}