#include<stdio.h>
#include<stdlib.h>

#define MAX 200

int main()
{
	char *s;
	char ch;
	int num = 0, i;

	s = (char *)malloc(sizeof(char) * (MAX + 1));
	
	printf("Input the sentence : ");
	while(1)
	{
		scanf("%c", &ch);
		if(ch == '\n')
			break;
		s[num] = ch;
		num++;
	}
	
	printf("result : ");
	for(i = 0; i < num; i++)
	{
		printf("%c",  s[i]);
	}
	printf("\n");



	
	return 0;

} 
