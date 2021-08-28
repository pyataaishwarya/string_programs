#include<stdio.h>
int mystrstr(char str[],char substr[]);
int strcmpfromi(char str[] ,char substr[] ,int );
int main()
{
	char str[20],substr[20];
	int a;
	printf("enter string1\n");
	scanf("%s",str);
	printf("enter string2\n");
	scanf("%s",substr);
	a=mystrstr(str,substr);
	if(a==-1)
		printf("substring not found\n");
	else
		printf("substring %s is found in string %s\n",substr,str);
}
int mystrstr(char str[],char substr[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(strcmpfromi(str,substr,i)==1)
			return i;
	}
	return -1;
}
int strcmpfromi(char str[],char substr[],int i)
{
	int j;
	for(j=0;substr[j]!='\0';j++)
	{
		if(str[i+j]!=substr[j])
			return 0;
	}
	return 1;
}


