#include<stdio.h>
#include<string.h>

int main() {
    char username[20], password[20];
    char usernameInput[20], passwordInput[20];
    int passChecker = 0, attempts = 0;

    printf("Create your profile\n");
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
    printf("-----------------------------------\n");
    printf("Log In Profile\n");

    while (!passChecker && attempts < 3) {
    printf("Enter your username: ");
    scanf("%s", usernameInput);
    printf("Enter your password: ");
    scanf("%s", passwordInput);

    if (strcmp(usernameInput, username) == 0 && strcmp(passwordInput, password) == 0) {
        passChecker = 1;
        printf("Login Successful! Thank you for using our application.");
    } else {
        attempts++;
        if (attempts < 3) {
        printf("Incorrect username or password. Please try again.\n");
        printf("You have %d of attempts left.\n", 3 - attempts);
        } else {
        printf("You have reached the maximum attempts allowed. Please try again in a few minutes.");
        }
    }
    }

return 0;
}
