#include<stdio.h>
#include<string.h>

int main()
{
    char str[5]={'u','p','p','e','r'};
    for(int i=0;i<5;i++){
        str[i]=str[i]-32;
    }    
    for(int i=0;i<5;i++){
        printf("%c",str[i]);
    }
    return 0;
}