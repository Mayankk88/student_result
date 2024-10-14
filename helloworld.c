#include <stdio.h>

int main()
{
    float subject1, subject2, subject3;

    printf("enter your marks of subject1:\n");
    scanf("%f", &subject1);
    printf("enter your marks of subject2:\n");
    scanf("%f", &subject2);
    printf("enter your marks of subject3:\n");
    scanf("%f", &subject3);

    printf("the marks are %.2f,%.2f,%.2f.\n", subject1, subject2, subject3);

    float total = subject1 + subject2 + subject3;
    float result = total / 3;
    
    if (subject1 < 33 || subject2 < 33 || subject3 < 33)
    {
        printf("you are failed due to less marks in individual subject(s).\n");
    }
    else if (result < 40)
    {
        printf("you are failed due to less percentage\n");
    }
    else
    {
        printf("you are passed! with %.2f pecentage", result);
    }
    return 0;
}
