#include<stdio.h>
int mystrncmp(char a[],char b[],int );
int main()
{
        char s1[20],s2[20];
        int a,n;
        printf("enter string1\n");
        scanf("%s",s1);
        printf("enter string2\n");
        scanf("%s",s2);
	printf("enter number of characters to compare\n");
	scanf("%d",&n);
        a=mystrncmp(s1,s2,n);
        if(a>0)
                printf("string1 is bigger\n");
        else if(a<0)
                printf("string2 is bigger\n");
        else
                printf("strings are equal\n");
}
int mystrncmp(char s1[],char s2[],int n)
{
	int i;
	for(i=0;s1[i]==s2[i]&&s1[i]!=0&&s2[i]!=0&&i<n;i++);
	return s1[i]-s2[i];
}


