#include <stdio.h>

int main() {
    int accuracy, confidence;
    int datasetSize, role, statusFlags;
    float modelScore;
    float average;

    printf("Enter accuracy (0-100): ");
    scanf("%d", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%d", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1=Intern, 2=Engineer, 3=Admin): ");
    scanf("%d", &role);

    printf("Enter status flags (1=TRAINED, 2=VALIDATED, 4=APPROVED, 8=DEPRECATED): ");
    scanf("%d", &statusFlags);

    if (accuracy > 100 || accuracy < 0 || confidence > 100 || confidence < 0 
    || (role != 1 && role != 2 && role != 3) ||
    statusFlags < 0 || statusFlags > 15) {
    printf("Invalid input");
    return 0;
}

    float limitedDataset = datasetSize / 1000;

    if (limitedDataset > 10)
    limitedDataset = 10;

    modelScore = (accuracy * 0.5) + (confidence * 0.3) + (limitedDataset * 2);
 
    average = (accuracy + confidence) / 2;

    printf("\n----- MODEL REPORT -----\n");
    printf("Model Score: %.2f\n", modelScore);

    if (statusFlags & 8) 
        printf("Rejected: model deprecated\n");
    
    else if (!(statusFlags & 1)) 
        printf("Rejected: not trained\n");
    
    else if (!(statusFlags & 2)) 
        printf("Rejected: not validated\n");
    
    else if (!(statusFlags & 4)) 
        printf("Pending: awaiting approval\n");
    
    else if (accuracy < 70 || confidence < 60) 
        printf("Rejected: performance too low\n");
    
    else if (datasetSize < 5000) 
        printf("Rejected: dataset too small\n");
    
    else if (role == 1) 
        printf("Denied: interns cannot deploy\n");
    
    else if (role == 2 && modelScore < 80) 
        printf("Denied: engineer needs higher score\n");
    
    else 
        printf("Approved for deployment\n");
    

    if (modelScore > average) 
        printf("Model score is above the average of accuracy and confidence.\n");
    
    else 
        printf("Model score is not above the average of accuracy and confidence.\n");
    

    printf("\n----- SIZEOF VARIABLES -----\n");
    printf("Size of accuracy: %zu bytes\n", sizeof(accuracy));
    printf("Size of confidence: %zu bytes\n", sizeof(confidence));
    printf("Size of datasetSize: %zu bytes\n", sizeof(datasetSize));
    printf("Size of role: %zu bytes\n", sizeof(role));
    printf("Size of statusFlags: %zu bytes\n", sizeof(statusFlags));
    printf("Size of modelScore: %zu bytes\n", sizeof(modelScore));
    printf("Size of average: %zu bytes\n", sizeof(average));

    return 0;
}