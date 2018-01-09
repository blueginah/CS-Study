#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int data;
	struct _node *link;
} Node;

void addNode(int n);
void printlinkedlist(Node *head);

Node *head = NULL;

int main()
{
	int i, n;
	Node *temp, *nNew = NULL;

	while(1)
	{
		scanf("%d", &n);
		if(n == 0) break;
		addNode(n);
	}
	printlinkedlist(head);
	return 0;

}
void addNode(int n)
{
	Node *temp = NULL;
	Node *nNew = (Node*)malloc(sizeof(Node));
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
void printlinkedlist(Node *head)
{
	Node *temp;
	for(temp = head; temp != NULL; temp = temp->link)
	{
		printf("%d\n", temp->data);
	}
}
