#include<stdio.h>
void swapping(int*,int*);
int main()
{
  int a=10,b=20;
  printf("before swapping :: %d,%d\n",a,b);
  swapping(&a,&b);
  printf("after swapping ::  %d,%d",a,b);

   return 0;
    }


void swapping(int *a,int *b)
{
   int *p=*a;
    *a=*b;
    *b=p;

}
