#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char input[50],key[10];
	printf("\n\nenter plain text:");
	scanf("%s",&input);
	printf("\nenter key value:");
	scanf("%s",&key);
	printf("\nresultant cipher text:");
	for(i=0,j=0;i<strlen(input);i++,j++)
	{
		if(j>=strlen(key))
		{
			j=0;
		}
		printf("%c",65+((input[i])-65)+((key[j])-65)%26);
	}
}
