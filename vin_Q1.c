#include<stdio.h>

void main()
{
    FILE *pr,*pw;

    char n;

    pr = fopen("f1.c","r");

    if(pr != NULL)
    {
        printf("File Opened..");
    }else
    {
        printf("File Can't Open...");
    }

    pr = fopen("f2.html","w");

    if(pw != NULL)
    {
        printf("File Created..");
    }else
    {
        printf("File Can't Create...");
    }
    n = fgetc(pr);

    while(n!=EOF)
    {
        fprintf(pw,"%c",n);
        n = fgetc(pr);
    }
   
}