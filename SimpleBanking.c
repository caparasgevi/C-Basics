#include <stdio.h>

struct BankAccount {
    char name[50];
    int account_number;
    float balance;
};

void createAccount(struct BankAccount *account) {
    printf("Enter your name: ");
    scanf("%s", account->name);
    printf("Enter account number: ");
    scanf("%d", &account->account_number);
    printf("Enter initial balance: ");
    scanf("%f", &account->balance);
}

void deposit(struct BankAccount *account, float amount) {
    account->balance += amount;
    printf("Deposit successful. New balance: %.2f\n", account->balance);
}

void withdraw(struct BankAccount *account, float amount) {
    if (amount > account->balance) {
        printf("Insufficient funds\n");
    } else {
        account->balance -= amount;
        printf("Withdrawal successful. New balance: %.2f\n", account->balance);
    }
}

void displayBalance(struct BankAccount *account) {
    printf("Account holder: %s\n", account->name);
    printf("Account number: %d\n", account->account_number);
    printf("Current balance: %.2f\n", account->balance);
}

int main() {
    struct BankAccount account;
    int choice;
    float amount;

    printf("Welcome to Simple Banking System\n");

    while (1) {
        printf("\n1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Display Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&account);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(&account, amount);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(&account, amount);
                break;
            case 4:
                displayBalance(&account);
                break;
            case 5:
                printf("Thank you for using our banking system.\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
