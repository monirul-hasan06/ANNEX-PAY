int main() {
    int choice;
    do {
        printf("\n===== Welcome to ANNEX PAY =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Reset PIN (Forgot PIN)\n");
        printf("6. View Transaction History\n");
        printf("7. List All Accounts\n");
        printf("8. Transfer Money Between Accounts\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: checkBalance(); break;
            case 5: resetPIN(); break;
            case 6: viewTransactions(); break;
            case 7: listAllAccounts(); break;
            case 8: transferMoney(); break;
            case 9: printf("\nThank you for using ANNEX PAY!\n"); break;
            default: printf("Invalid Choice!\n");
        }
    } while(choice != 9);

    return 0;
}