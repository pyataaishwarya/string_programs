#include<stdio.h>
char *mystrncpy(char *,const char *,unsigned int );
int main()
{
	char dest[20],src[20];
	unsigned int n;
	printf("enter source string\n");
	scanf("%s",src);
	printf("enter destination string\n");
	scanf("%s",dest);
	printf("enter number of characters to copy\n");
	scanf("%d",&n);
	printf("copied string is %s\n",mystrncpy(dest,src,n));
}
char *mystrncpy(char *dest,const char *src,unsigned int n)
{
	char *s3=dest;
	
	if(dest==NULL)
		return NULL;
	while(*src&&n--)
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
	return s3;
}

