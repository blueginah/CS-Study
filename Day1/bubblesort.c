#include<stdio.h>
#include<stdlib.h>

#define SWAP(a, b) { int tmp; tmp = a; a = b; b = tmp;}

void bubble_sort(int *A, int n);

int main()
{
	int arr[10];
	int min, j,  i, temp, n, index;

	printf("Enter the number : ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d", &(arr[i]));
	}
	printf("Before sort : ");
	for(i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	bubble_sort(arr, n);

	printf("After sort : ");
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

void bubble_sort(int *A, int n)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = n - 1; j > i; j--)
		{
			if(A[j - 1] > A[j])
			{
				SWAP(A[j - 1], A[j]);
			}
		}
	}
}
