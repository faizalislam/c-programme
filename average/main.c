#include <stdio.h>
#include <stdlib.h>

int main()
{   system("color 4f");
    int score;
    int total;
    float average;
    int counter;
    total = 0;
    counter = 1;
    while(counter <= 18)
    {
        printf("Enter Marks Obtained /100\n");
        scanf("%d", &score);
        total = total + score;
        counter = counter + 1;
    }
    average = total / 18;
    printf("Class Average is %.2f\n", average);
    return 0;
}
