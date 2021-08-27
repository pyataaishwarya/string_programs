#include<stdio.h>
int mystrlen(char *);
int main()
{
	char s1[20];
	printf("enter string1\n");
	scanf("%s",s1);
	printf("length of string is %d",mystrlen(s1));
}
int mystrlen(char *s1)
{
	int i=0;
	for(;*s1!='\0';s1++)
		i=i+1;
	return i;
}
