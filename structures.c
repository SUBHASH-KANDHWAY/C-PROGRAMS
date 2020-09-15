#include <stdio.h>
/*
Ways to access structure members :
1. with "." operator
2. with pointer to structure variable using "->" operator (special operator, revisited)
3. with pointer to structure variable using "." operator

*/

typedef struct personInfo
    {
        char name[10];
        int age;
        float percentage;

    } st_in;

int main()
{
    st_in person1 = { "Hanoak", 24, 90.5 }; // full initialization
    st_in *p; // structure pointer...
    p = &person1;

    // using "." operator
    printf("name of person 1 = %s \n", person1.name);
    printf("age of person 1 = %d \n", person1.age);
    printf("percentage of person 1 = %f \n", person1.percentage);

    // using "->" operator with pointer..
    printf("name of person 1 = %s \n", p->name);
    printf("age of person 1 = %d \n", p->age);
    printf("percentage of person 1 = %f \n", p->percentage);

    // using "." operator with pointer..
    printf("name of person 1 = %s \n", (*p).name);
    printf("age of person 1 = %d \n", (*p).age);
    printf("percentage of person 1 = %f \n", (*p).percentage);


    return 0;
}
