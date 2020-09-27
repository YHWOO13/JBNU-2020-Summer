/* Author: Yoonhyuck WOO / JBNU_Industrial Information system Engineering
 Date; Sep. 20 2020
 Title: Bubble sort*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int* f1, int* f2)
{
	int temp = *f1;
	*f1 = *f2;
	*f2 = temp;
}

void visualization(int size, int* arr)
{
	for (int k = 0; k < size; k++)
	{
		printf("%d ", arr[k]);
	}
}

void make_random(int size, int* arr)
{
	int k = 0;
	for (k = 0; k < size; k++)
	{
		printf("%d ", arr[k] = rand() % 10);
	}
	printf("\n");
}

void bubble_bubble_bubblesort(int size, int* arr)
{
	int i, j, k, c = 0;
	int count = 0;
	printf("Before: ");
	make_random(size, arr);

	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < (size - 1) - c; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
			count++;
		}
		c++;
	}
	printf("\nCount: %3d\n", count);
	printf("\n");
}

int main() 
{
	srand(time(NULL));
	int size = 10, count=0;
	int* arr;
	arr = (int*)malloc(sizeof(int) * size);

	bubble_bubble_bubblesort(size,arr);

	printf("After: ");
	visualization(size, arr);

	return 0;
}