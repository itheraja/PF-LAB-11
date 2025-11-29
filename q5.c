#include <stdio.h>

int main() {
    char names[10][50];
    int marks[10];
    int n, i, maxIndex = 0;

    printf("Enter number of students (max 10): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }

    // Find highest scorer
    for (i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("\nHighest Scorer:\n");
    printf("Name: %s\n", names[maxIndex]);
    printf("Marks: %d\n", marks[maxIndex]);

    return 0;
}
