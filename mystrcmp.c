#include<stdio.h>
char *mystrcmp(char *,char *);
int main()
{
	char s1[20],s2[20];
	int a;
	printf("enter string1\n");
	scanf("%s",s1);
	printf("enter string2\n");
	scanf("%s",s2);
	a=mystrcmp(s1,s2);
	if(a>0)
		printf("string1 is bigger\n");
	else if(a<0)
		printf("string2 is bigger\n");
	else
		printf("strings are equal\n");
}
char *mystrcmp(char *s1,char *s2)
{
	for(;*s1==*s2&*s1!=0&*s2!=0;s1++,s2++);
	return *s1-*s2;
}
