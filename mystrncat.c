#include<stdio.h>
int mystrncat(char a[],char b[],int );
int main()
{
        char s1[20],s2[20];
        int a,n;
        printf("enter string1\n");
        scanf("%s",s1);
        printf("enter string2\n");
        scanf("%s",s2);
        printf("enter number of characters to concatenate\n");
        scanf("%d",&n);
        mystrncat(s1,s2,n);
}
int mystrncat(char s1[],char s2[],int n)
{
	int i=0,j=0;
	while(s1[i]!='\0'&&i<n)
		i++;
	while(s2[j]!='\0'&&j<n)
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]='\0';	
	printf("concatenated string is %s",s1);
}

