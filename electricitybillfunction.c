
#include <stdio.h>
void getInput(int *customerID, char *customerName, int *unitsConsumed);
float calculateBill(int unitsConsumed);
void displayBill(int customerID, char customerName[], int unitsConsumed, float totalAmount);

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalBill;

    // inputs
    getInput(&customerID, customerName, &unitsConsumed);

    // Calculate the total bill
    totalBill = calculateBill(unitsConsumed);

    // Display the bill
    displayBill(customerID, customerName, unitsConsumed, totalBill);

    return 0;
}

// Function to get customer input
void getInput(int *customerID, char *customerName, int *unitsConsumed) {
    printf("Enter Customer ID: ");
    scanf("%d", customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", unitsConsumed);
}

// Function to calculate the bill based on units consumed
float calculateBill(int unitsConsumed) {
    float rate, totalBill;

    if (unitsConsumed <= 199) {
        rate = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        rate = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    totalBill = unitsConsumed * rate;

    // Apply surcharge if totalBill exceeds 400
    if (totalBill > 400) {
        totalBill += totalBill * 0.15;  // 15% surcharge
    }

    // Ensure the minimum bill is 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    return totalBill;
}

// Function to display the final bill
void displayBill(int customerID, char customerName[], int unitsConsumed, float totalAmount) {
    printf("\nElectricity Bill:\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount to Pay: Ksh %.2f\n", totalAmount);
}