#include <stdio.h>
#include <stdlib.h>

int main()
{
   int marks;
   printf("Enter Grade\n");
   scanf("%d", &marks);
   switch(marks)
   {
   case '>=95':
    printf("You A+\n");
    break;
   case '>=90 && <=94':
    printf("You Scored A\n");
    break;
   default:
    printf("UN KNOWN GRADE\n");
   }


    return 0;
}
