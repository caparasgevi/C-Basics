#include <stdio.h>
#include <conio.h>

int main() {
    double grade[9];
    char* code[9] = {"RPH 101", "AAP 101", "STS 101", "COE 104", "COE 105", "COE 105L", "CPE 104L", "PATHFit 2", "NSTP 11"};
    char* subjs[9] = {"Readings in Philippine History", "Art Appreciation", "Science, Technology, and Society", "Calculus 2", "Physics for Engineers - Lecture", "Physics for Engineers - Laboratory", "Programming Logic and Design", "Physical Education 2", "National Service Training Program 2"};
    int credits[9] = {3, 3, 3, 3, 3, 1, 2, 2, 3};
        printf("Code          Descriptive Title                     Credit Units      Grade\n");
    // Prompt user to input grades
    for (int i = 0; i < 9; ++i) {
        printf("%s       %s             %d             ", code[i], subjs[i], credits[i]);
        scanf("%lf", &grade[i]);
    }
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
