#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char str[20];
    int n=strlen(str);
    printf("Enter the string\n");
    scanf("%[^\n]s",&str);
    
    printf("string is\n");
    printf("%s",&str);

    while(str[i]){
        if(str[i]!=' '){
            str[j++]=str[i];
        }
        i++;
    }   
    str[j]='\0';
    printf("\nAfter removal of space the string is\n");
    printf("%s",str);
    return 0;
}