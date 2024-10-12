#include <stdio.h>

int main()
{
    int subject1;
    int subject2;
    int subject3;
    printf("enter your marks of subject1\n");
    scanf("%d", &subject1);
    printf("enter your marks of subject2\n");
    scanf("%d", &subject2);
    printf("enter your marks of subject3\n");
    scanf("%d", &subject3);
    printf("the marks are %d,%d,%d.\n", subject1, subject2, subject3);
    float total = subject1 + subject2 + subject3;
    float result = total / 3;
    if (subject1 < 33 || subject2 < 33 || subject3 < 33)
    {
        printf("you are failed due to less marks in individual subject(s)\n");
    }
    if (result < 40)
    {
        printf("you are failed due to less percentage\n");
    }
    else if (result > 40)
    {
        printf("you are passed! %d pecentage",result);
    }
    return 0;
}