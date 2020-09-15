#include <stdio.h>

/*
RECURSION : A function calling itself is called as recursion.
EXAMPLE : incrementing a number 5 times...

*/

int fun(int);
int main()
{
    int n = fun(1);

    printf("the value of recursive function : %d", n);
    return 0;
}

int fun(int a)
{
    a++;

    if(a == 10)
    {
        return a;
    }
    return fun(a);

}
