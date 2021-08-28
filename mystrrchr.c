#include <stdio.h>
char *my_strrchr(const char *s, int c)
{
    char *isCharFind = NULL;
 
    if(s != NULL)
    {
        do
        {
            if( *s == (char)c )
            {
                isCharFind=s;
            }
        }
        while(*s++);
    }
    return isCharFind;
}
int main()
{
    char s[20];
   
    char want_search;
    printf("enter string\n");
    scanf("%s",s);
    printf("character want to search\n");
    scanf("\n%c",&want_search);
    
    char *ptr = my_strrchr(s,want_search);
    if (ptr != NULL)
    {
        printf ("Last occurence of %c found at %ld.\n",want_search, ptr-s+1);
       
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
}
