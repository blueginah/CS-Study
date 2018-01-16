#include<stdio.h>
#include<stdlib.h>

char * inputstring();

int main()
{
	char *a;
	char ch;
	int num = 0, i;

	printf("Input the sentence : ");

	a = inputstring();

	printf("result : ");
	printf("%s\n", a);

	return 0;

} 
char * inputstring()
{
	char *a, *temp;
	char c;
	int i, count = 0;
	while(1)
	{
		scanf("%c", &c);
		if(c == '\n')
			break;
		count++;
		temp = (char *)malloc(sizeof(char) * count);
		for(i = 0; i < count - 1; i++)
		{
			temp[i] = a[i];
		}
		temp[count - 1] = c;

		a = (char *)malloc(sizeof(char) * count);
		a = temp;
	}
	a[count] = '\0';
	return a;

}
