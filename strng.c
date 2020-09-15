#include<stdio.h>
void sucks(char a[]);
int main()

   {

   char n[5]={'a','b','c','d','e'};

    sucks(n); //passing the address of the first element of that array..
    printf("in the main() : %c \n ", n[1]);
    return 0;

   }


void sucks(char arr[]){

    for(int i=0;i<5;i++)
    {

    printf("%c",arr[i]);

    }




}
