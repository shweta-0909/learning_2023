#include<stdio.h>
int main()
{
   // variables
   int score;
   char grade;

   // take score
   printf("Enter score(0-100): ");
   scanf("%d",&score);

   
   if(score<0 || score>100) {
     printf("Invalid Score");
     
     return 0;
   }

   
   if(score>=90 && score<=100)
     grade = 'A';

   
   else if(score<=89 && score>=75)
     grade = 'B';
   

   else if(score>=60 && score<=74)
     grade = 'C';

   
   else if(score>=50 && score<=59)
     grade = 'D';

   else if(score>=0 && score<=49)
     grade = 'E';

   else
     grade = 'F';

   // display grade
   printf("Grade: %c\n", grade);

   return 0;
}