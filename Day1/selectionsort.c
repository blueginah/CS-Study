#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10];
	int min, j,  i, temp, index;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &(arr[i]));
	}
	printf("Before sort : ");
	for(i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for(i = 0; i < 10; i++)
	{
		min = arr[i];
		for(j = i; j < 10; j++)
		{
			if(arr[j] <= min)
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}
	printf("After sort : ");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
