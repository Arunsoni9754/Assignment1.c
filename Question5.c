#include<stdio.h>
int main()
{
    char s[1000];
    int len=0;
    printf("Write any string");
    gets(s);
    len=strlen(s);
    printf("The length os the string:- %d",len);
       return 0;
}
