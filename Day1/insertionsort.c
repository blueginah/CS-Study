#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int *A, int n);

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

	insertion_sort(arr, n);

	printf("After sort : ");
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}

void insertion_sort(int *A, int n)
{
	int i, j, tmp;
	for(i = 1; i < n; i++)
	{
		tmp = A[i];
		j = i;
		while((j > 0) && (A[j - 1] > tmp))
		{
			A[j] = A[j - 1];
			j--;
		}
		A[j] = tmp;
	}
}
