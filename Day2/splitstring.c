#include<stdio.h>
#include<stdlib.h>

typedef struct _string{
	char *str;
} string;

string * splitstring();
void printstring(string* s);

int main()
{
	string *a;
	int num = 0, i;

	printf("Input the sentence : ");

	a = splitstring();
	printstring(a);

	return 0;

} 
string * splitstring()
{
	string *a, *temp;
	char c;
	int i, count = 0, index = 1;
	while(1)
	{
		scanf("%c", &c);
		if(c == '\n')
			break;
		else
		{
			if(c == ' ')
			{
				index++;
				count = 0;
				continue;
			}
			else
			{
				count++;
				temp = (string *)malloc(sizeof(string) * index);
				temp[index - 1].str = (char *)malloc(sizeof(char) * count);
				for(i = 0; i < count - 1; i++)
				{
					temp[index - 1].str[i] = a[index - 1].str[i];
				}
				temp[index - 1].str[count - 1] = c;
				a = (string * )malloc(sizeof(string) * index);
				a[index - 1].str = (char *)malloc(sizeof(char) * count);
				a = temp;
			}
			/*
			else
			{
				count++;
				temp = (char *)malloc(sizeof(char) * count);
				for(i = 0; i < count - 1; i++)
				{
					temp[i] = a[i];
				}
				temp[count - 1] = c;
		
				a = (char *)malloc(sizeof(char) * count);
				a = temp;
		
			}*/
		}
	}
	a[index].str = '\0';
	return a;

}
void printstring(string *s)
{
	int i, count = 0;

	printf("The string is : ");
	while(1)
	{
		if(s[count].str == '\0')
		{
			printf("\n");
			break;
		}
		else
		{
			printf("%d. ", count + 1);
			printf("%s", s[count].str);
			printf("\n");
		}
		count++;
	}
}
