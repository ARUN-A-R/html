#include<stdio.h>
void main()
{
    char word[20],string[20];
    int i=0,count=0,count1=0;
    printf("Enter the first string        :");
    gets(word);
    printf("Enter the second string       :");
    gets(string);
    while(word[i]!='\0')
    {
        count++;
        i++;
    }
    i=0;
    while(string[i]!='\0')
    {
        count1++;
        i++;
    }
    for(i=0;i<=count1;i++)
    {
        word[count+i]=string[i];
    }
    printf("The concatenate of two string :%s",word);
}