#include <stdio.h>

int main() {
    int stream, interest, medicine;

    printf("Select stream(1=Science, 2=Commerce, 3=Arts):");
    scanf("%d", &stream);

    if(stream != 1 || stream != 2 || stream != 3) {
        printf("Invalid choice.");
        return 0;
    }

    switch (stream) {

        case 1:
            printf("Enter interest(1 = Biology, 2 = Physics, 3 = Chemistry): ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Are you interested in medicine? (1 = Yes, 0 = No): ");
                    scanf("%d", &medicine);

                    if (medicine == 1) {
                        printf("Recommended course: MBBS\n");
                    }
                    else if (medicine == 0) {
                        printf("Recommended course: Biotechnology\n");
                    }
                    else {
                        printf("Invalid choice.\n");
                    }
                    break;

                case 2:
                    printf("Recommended course: Bachelors in Physics.\n");
                    break;

                case 3:
                    printf("Recommended course: Bachelors in Chemistry.\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("Enter interest(1 = Accounting, 2 = Marketing): ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Recommended course: Accounting and finance.\n");
                    break;

                case 2:
                    printf("Recommended course: Bachelors in Marketing\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 3:
            printf("Enter interest( 1 = Literature, 2 = History, 3 = Psychology): ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Recommended course:Bachelors in Literature\n");
                    break;

                case 2:
                    printf("Recommended course:Bachelors in History\n");
                    break;

                case 3:
                    printf("Recommended course:Bachelors in Psychology\n");
                    break;

                default:
                    printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}