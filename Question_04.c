#include <stdio.h>

int main() {
    int cardStatus, pinCorrect, balance, withdrawal , remaining , notes2000, notes500, notes100;

    printf("Enter card status (1 = valid, 0 = blocked): ");
    scanf("%d", &cardStatus);

    printf("Enter PIN correctness (1 = correct, 0 = wrong): ");
    scanf("%d", &pinCorrect);

    printf("Enter account balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (cardStatus == 0) {
        printf("Card blocked. Contact bank.\n");
    }
    else if (pinCorrect == 0) {
        printf("Incorrect PIN.\n");
    }
    else if (withdrawal <= 0) {
        printf("Invalid amount.\n");
    }
    else if (withdrawal > balance) {
        printf("Insufficient balance.\n");
    }
    else if (withdrawal > 25000) {
        printf("Daily limit exceeded.\n");
    }
    else if ((balance - withdrawal) < 1000) {
        printf("Minimum balance must be maintained.\n");
    }
    else {
        remaining = withdrawal;

        notes2000 = remaining / 2000;
        remaining = remaining % 2000;

        notes500 = remaining / 500;
        remaining = remaining % 500;

        notes100 = remaining / 100;

        printf("\nNew balance = %d\n", balance - withdrawal);

        printf("2000 notes = %d\n", notes2000);
        printf("500 notes = %d\n", notes500);
        printf("100 notes = %d\n", notes100);

        printf("Please collect your cash.\n");
    }

    return 0;
}