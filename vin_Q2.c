#include<stdio.h>

void main()
{
	FILE *pw;
	
	char n;
	int i;
	
	pw = fopen("division.txt","w");
	
	if(pw != NULL)
	{
		printf("File Created ");
	}
	else
	{
		printf("File does not created");
	}
	
    for(i = 1; i <= 50; i++)
    {
    	if(i % 3 == 0 && i % 5 == 0)
    	{
    		fprintf(pw,"%d\n",i);
		}
	}
}