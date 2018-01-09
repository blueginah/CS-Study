#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int data;
	struct _node *link;
} Node;

int main()
{
	int i, n;
	Node *temp, *head = NULL, *nNew = NULL;

	for(i = 0; i < 3; i++)
	{
		scanf("%d", &n);
		nNew = (Node*)malloc(sizeof(Node));
		nNew->data = n;
		nNew->link = NULL;

		if(head == NULL)
		{
			head = nNew;
		}
		else
		{
			for(temp = head; temp->link != NULL; temp = temp->link);
			temp->link = nNew;
		}
	}
	for(temp = head; temp != NULL; temp = temp->link)
	{
		printf("%d ", temp->data);
	}
	printf("\n");

	return 0;

}
