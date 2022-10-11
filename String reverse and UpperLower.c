#include<stdio.h>
#include<string.h>


int main(){

   char s[100],i,n;

   printf("Enter a string: ");
   gets(s);

   n=strlen(s);

    for(i=n-1;i>=0;i--){
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
         else if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;

         printf("%c",s[i]);
    }


return 0;
}


