 #include<stdio.h>

 typedef struct PersonalInfo

    {
      char name[10];
      int age;
      int roll_no;
      float percentage;
      int subject;

    }student_bio;

int main()
  {
    student_bio student[3]={ ("subhash",11,1,82.4,{1,2,3}),
    ("subh",11,2,80.4,{11,22,33}),
    ("subhasri",11,3,72.4,{111,222,333})};

    for(int i=0;i<3;i++)
       {

         printf("NAME OF %D TH STUDENT = %s",i,student[i].name);
         printf("AGE OF %D TH STUDENT = %d",i,student[i].age);
         printf("NAME OF %D TH STUDENT = %f",i,student[i].percentage);


        for(int j=0;j<3;j++)

          {
             printf("%d\t",student[i].subject[j]);

          }

         printf("\n");

       }
   return 0;
  }


  }
