#include <stdio.h>
#include <string.h>
 
 main()
{
    char s[100],re[100];
    int i,j;
 
    printf("Enter a string: ");
	scanf("%[^\n]s",s);

 
    j=0;
    for(i=(strlen(s)-1); i>=0;i--)
        re[j++]=s[i];
     
    re[j]='\0';
 
    printf("\nOriginal String is: %s",s);
    printf("\nReversed String is: %s",re);
 

}