#include <stdio.h>

int main() {
    int time, motion, lightLevel , room , cooking;

    printf("Enter time (0-23): ");
    scanf("%d", &time);

    printf("Enter motion detected (1 = Yes, 0 = No): ");
    scanf("%d", &motion);

    printf("Enter light level (0-100): ");
    scanf("%d", &lightLevel);

    printf("Enter your room (1=Living Room,2=Bedroom,3=Kitchen):");
    scanf("%d", &room);

    if (room < 1 || room > 3) {
        printf("Invalid room selection.\n");
        return 0;
    }

    if (motion == 0) {
        printf("Away mode: all OFF\n");
    }
    else {
        if (time >= 6 && time < 18) {
            printf("Day mode: lights ON\n");
        }
        else if (time >= 18 && time < 23) {
            printf("Evening mode: dim lights\n");
        }
        else {
            printf("Night mode: lights OFF\n");
        }
    }

    if (room == 3) {
        printf("Are you cooking? (1 = Yes, 0 = No): ");
        scanf("%d", &cooking);

        if (cooking == 1) {
            printf("Kitchen exhaust fan: ON\n");
        }
    }

    return 0;
}