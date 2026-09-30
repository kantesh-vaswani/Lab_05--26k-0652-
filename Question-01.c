#include <stdio.h>
int main() {
    int vehicle_type , hoursparked , membership ;
    int fee, discount = 0;
    printf("Enter vehicle type (1 = bike, 2 = car, 3 = truck): ");
    scanf("%d", &vehicle_type);
    printf("\nEnter hours parked: ");
    scanf("%d", &hoursparked);
    printf("\nEnter your membership status(1 = member, 0 = non-member): ");
    scanf("%d", &membership);
    if(vehicle_type > 3 || vehicle_type < 1){
        printf("Invalid vehicle.");
        return 0;
    }
    if(hoursparked <= 0){
        printf("Invalid duration.");
        return 0;
    }
    if(vehicle_type == 1)
        fee = 20 * hoursparked;
    else if(vehicle_type == 2){
        if(hoursparked <= 2)
            fee = 50;
        else 
            fee = 50 + 30 * (hoursparked - 2);
    }
    else if(vehicle_type == 3){
        if(hoursparked <= 3)
            fee = 100;
        else 
           fee = 100 + 50 * (hoursparked - 3);
    }

    if(membership == 1 && fee > 200) 
        discount = fee * 0.15;
    else 
        discount = 0;        
    
    fee = fee - discount;

    printf("Your final fee is Rs.%d" , fee);
    return 0;
}