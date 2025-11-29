#include <stdio.h>

int main() {
    char students[5][50] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int marks[5] = {85, 92, 78, 88, 90};
    int i, topIndex = 0;
    float sum = 0, average;

  
    printf("| %-10s | %-5s |\n", "Student", "Marks");


    for (i = 0; i < 5; i++) {
        printf("| %-10s | %-5d |\n", students[i], marks[i]);

        if (marks[i] > marks[topIndex])
            topIndex = i;

        sum += marks[i];
    }

   

    average = sum / 5;

    printf("\nTop Student: %s with %d marks\n", students[topIndex], marks[topIndex]);
    printf("Class Average: %.2f\n", average);

    return 0;
}
