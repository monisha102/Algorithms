#include<stdio.h>

int main(){

    int i;
    char s[]="Bamgladesh Industrial and Technical Assistant Center";
    char *s1;
    s1=s;

    for(i=0;i<10;i++){
        printf("%c",s[i]);
        ++s1;
    }

    printf("\n");

    for(i=0;i<10;i++){
        printf("%c",s1[i]);
        ++s1;
    }

return 0;

}
