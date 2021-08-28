#include<stdio.h>
char *mystrrev(char *);
int main()
{
	char s[20];
	printf("enter string\n");
	scanf("%s",s);
	printf("reverse of string is %s\n",mystrrev(s));
}
char *mystrrev(char *s)
{
	char *s1,*s2,temp;
	s1=s;
	s2=s;
	for(;*s!='\0';s++);
		s--;
	for(;s1<s;s1++,s--)
	{
		temp=*s1;
		*s1=*s;
		*s=temp;
	}
	return s2;
}
