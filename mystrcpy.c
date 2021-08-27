#include<stdio.h>
char *mystrcpy(char *,char *);
int main()
{
	char s1[20],s2[20];
	printf("enter string1\n");
	scanf("%s",s1);
	printf("enter string2\n");
	scanf("%s",s2);
	printf("copied string %s\n",mystrcpy(s1,s2));
}
char *mystrcpy(char *s1,char *s2)
{
	char *s3;
	s3=s1;
	for(;*s2!='\0';s2++,s1++)
		*s1=*s2;
	*s1='\0';
	return s3;
}
