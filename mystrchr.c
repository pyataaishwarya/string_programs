#include<stdio.h>
char *mystrchr(char *,char );
int main()
{
	char s1[20],c;
	printf("enter string\n");
	scanf("%s",s1);
	printf("enter character to search\n");
	scanf("\n%c",&c);
	printf("character %s",mystrchr(s1,c));
}
char *mystrchr(char *s1,char c)
{
	char *s2;
	s2=&c;
	for(;*s1!='\0';s1++)
		if(*s1==c)
			return "found";
	return "not found";
}




