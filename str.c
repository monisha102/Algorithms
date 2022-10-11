#include<stdio.h>

int main(){

    char s[100];
    int i,n,sum=0;
    printf("Enter a string: ");

    gets(s);
    n=strlen(s);

    printf("%s",s);

    for(i=0;i<=n;i++){
        if(s[i]>='0' && s[i]<='9'){
            sum=sum+(s[i]-0x30);
        }
    }
    printf("\nsum of numbers: %d",sum);

return 0;
}
