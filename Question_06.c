#include <stdio.h>

int main() {
    int category, subType;
    int delayed;

    printf("Select category(1= Greeting, 2=Query, 3=Complaint, 4=Feedback):");
    scanf("%d", &category);

    switch (category) {

        case 1:
            printf("Enter time of the day( 1=Morning, 2=Evening): ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Good morning! How can I help you?\n");
                    break;

                case 2:
                    printf("Good evening! How can I help you?\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 2:
            printf("Query Regarding(1=Product, 2=Billing, 3=Technical): ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Please tell me which product you are interested in.\n");
                    break;

                case 2:
                    printf("I can help you with your billing query.\n");
                    break;

                case 3:
                    printf("I can help you with your technical issue.\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 3:
            printf("Complaint regarding(1=Delivery, 2=Quality): ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Is your order delayed? (1 = Yes, 0 = No): ");
                    scanf("%d", &delayed);

                    if (delayed == 1) {
                        printf("We apologize for the delay in your order.\n");
                    }
                    else if (delayed == 0) {
                        printf("We apologize for any inconvenience with your delivery.\n");
                    }
                    else {
                        printf("Invalid selection.\n");
                    }
                    break;

                case 2:
                    printf("We apologize for the quality issue.\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 4:
            printf("Feedback is(1=Positive, 2=Negative): ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Thank you for your positive feedback!\n");
                    break;

                case 2:
                    printf("Thank you for your feedback. We will work to improve.\n");
                    break;

                default:
                    printf("Invalid selection.\n");
            }
            break;

        default:
            printf("Invalid selection.\n");
    }

    return 0;
}