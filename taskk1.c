#include<stdio.h>

void main ()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			{
			printf("%d",i);
				if(j%2==4)
			{
			printf("4");
		}
		if(j%30==9)
			{
			printf("9");
		}
		
			}
				printf("\n");
	
	
	}
}