#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00; 
    float amount;

    printf("--- Welcome to My Mini ATM ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("------------------------------\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your current balance is: $%.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New balance: $%.2f\n", balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount > balance) {
                printf("Insufficient funds!\n");
            } else {
                balance -= amount;
                printf("Remaining balance: $%.2f\n", balance);
            }
            break;
        case 4:
            printf("Thank you for using our ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
