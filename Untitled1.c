#include <stdio.h>

/*

for(initialization ; test-condition ; increment)
{
	body of a loop;
}

EXAMPLE : printing 0 to 100 or 0 to N numbers

*/


int main()
{
    for(int i = 10; i <0; i--)
    {
     if(i!=0)
     {
       printf("%d \n", i);
       i++;
     }
    }
       return 0;
}

