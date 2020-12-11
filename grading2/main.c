#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 9");
   int marks;
   printf("Enter Marks Obtained\n");
   scanf("%d", &marks);
   if(marks >= 95)
   {
       printf("You Scored A+\n");
   }

   else if(marks >=90 &&marks <= 94)
   {
       printf("You Scored A\n");
   }

  else if(marks >= 85 &&marks <= 89)
   {
       printf("You Scored B+\n");
   }
   else if(marks >= 80 &&marks <= 84)
   {
       printf("Your Scored B");
   }
   else if(marks >=75 &&marks <=79)
   {
       printf("You Scored C+\n");
   }
   else if(marks >= 70 &&marks <=74)
   {
       printf("You Scored C\n");
   }
   else if(marks >= 65 &&marks <= 69)
   {
        printf("You Scored D\n");
   }
   else if(marks >= 55 &&marks <=64)
   {
       printf("You Scored E\n");
   }
   else if(marks >= 50 &&marks <= 54)
   {
       printf("You Scored O\n");
   }
   else
   {
       printf("Your Scored F\n");
   }
   printf("THIS PROGRAMME IS BROUGHT TO YOU BY FYZO\n");

    return 0;
}
