#include<stdio.h>
#include<string.h>

int main(){

    char ch[20];
    int i;

    printf("Enter character in Uppercase: ");

    gets(ch);

    for(i=0;ch[i]!='\0';i++){
        if(ch[i]>='a' && ch[i]<='z'){

            ch[i]=ch[i]-32;
        }

    }

    printf("\nString in Lower Case: ");
    puts(ch);

    return 0;

}
