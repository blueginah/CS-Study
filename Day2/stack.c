#include<stdio.h>
#include<stdlib.h>

#define MAX 10

typedef struct _stack{
	int top;
	int stk[MAX];
} stack;

stack s;

void push();
int pop();
void display();

int main()
{
	s.top = 0;
	int choice;
	while(1)
	{
		printf("\n------------------------------------------------\n");
		printf("push : 1\npop : 2\nexit : 3\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				display();
				continue;
			case 2:
				pop();
				display();
				continue;
			case 3:
				return;
		}
		printf("\n------------------------------------------------\n");
	}
	return 0;
}
void push()
{
	int num;
	if(s.top == (MAX - 1))
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("Insert the element : ");
		scanf("%d", &num);
		s.top++;
		s.stk[s.top - 1] = num;
	}
}

int pop()
{
	int num;
	if(s.top == 0)
	{
		printf("Stack is empty\n");
		return -1;
	}
	else
	{
		num = s.stk[s.top - 1];
		s.top--;
		printf("The popped element is = %d\n", num);
	}
	return num;
}

void display()
{
	int i, num;
	if(s.top == 0)
	{
		printf("The stack is empty.\n");
	}
	else
	{
		printf("Stack : ");
		for(i = s.top - 1; i >= 0; i--)
		{
			printf("%d ", s.stk[i]);
		}
		printf("\n");
	}
}
