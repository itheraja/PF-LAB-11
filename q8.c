#include <stdio.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    char items[3][3][30] = {
        {"Spring Rolls", "Garlic Bread", "Bruschetta"},
        {"Grilled Chicken", "Pasta Alfredo", "Veg Burger"},
        {"Chocolate Cake", "Ice Cream", "Fruit Salad"}
    };
    float prices[3][3] = {
        {5.5, 4.0, 6.0},     // Appetizers
        {12.0, 11.5, 9.5},   // Main Course
        {7.0, 5.0, 6.5}      // Desserts
    };

    int i, j;

    
    printf("--- Restaurant Menu ---\n\n");
    for (i = 0; i < 3; i++) {
        printf("%s:\n", categories[i]);
        for (j = 0; j < 3; j++) {
            printf("  %-20s $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }

    
    printf("--- Budget-Friendly Options (Under $10) ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (prices[i][j] < 10.0) {
                printf("%-20s (%s) - $%.2f\n", items[i][j], categories[i], prices[i][j]);
            }
        }
    }

    return 0;
}
