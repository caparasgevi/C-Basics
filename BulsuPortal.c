#include<stdio.h>
#include<conio.h>

int main() {
    double grade[9];
    printf("Code          Descriptive Title                     Credit Units      Grade\n");
    printf("RPH 101       Readings in Philippine History            3              ");
    scanf("%lf", &grade[0]);
    printf("AAP 101       Art Appreciation                          3              ");
    scanf("%lf", &grade[1]);
    printf("STS 101       Science, Technology, and Society          3              ");
    scanf("%lf", &grade[2]);
    printf("COE 104       Calculus 2                                3              ");
    scanf("%lf", &grade[3]);
    printf("COE 105       Physics for Engineers - Lecture           3              ");
    scanf("%lf", &grade[4]);
    printf("COE 105L      Physics for Engineers - Laboratory        1              ");
    scanf("%lf", &grade[5]);
    printf("CPE 104L      Programming Logic and Design              2              ");
    scanf("%lf", &grade[6]);
    printf("PATHFit 2     Physical Education 2                      2              ");
    scanf("%lf", &grade[7]);
    printf("NSTP 11       National Service Training Program 2       3              ");
    scanf("%lf", &grade[8]);

    if (grade[0] == 5.0 || grade[1] == 5.0 || grade [2] == 5.0 || grade [3] == 5.0 || grade [4] == 5.0 || grade [5] == 5.0 || grade [6] == 5.0 || grade [7] == 5.0 || grade[8] == 5.0) {
        printf ("Your GWA is: N/A");
    } else {
    double totalCreds = 20.0;
    double gwa = ((grade[0] * 3) + (grade[1] * 3) + (grade[2] * 3) + (grade[3] * 3) + (grade[4] * 3) + (grade[5]) + (grade[6] * 2) + (grade[7] * 2)) / totalCreds;
    printf("Your GWA is: %.2lf", gwa);
    }

getch();
return 0;
}
