#include<stdio.h>
char *mystrcat(char *,char *);
int main()
{
	char s1[20],s2[20];
	printf("enter string1\n");
	scanf("%s",s1);
	printf("enter string2\n");
	scanf("%s",s2);
	printf("concatenated string is %s\n",mystrcat(s1,s2));
}
char *mystrcat(char *s1,char *s2)
{
	char *s3;
	s3=s1;
	for(;*s1!=0;s1++);
	for(;*s2!=0;s2++,s1++)
	{
		*s1=*s2;
	}
	*s1='\0';
	return s3;
}



