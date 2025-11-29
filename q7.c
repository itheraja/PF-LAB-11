#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][5][20] = {
        {"Math", "Physics", "Chemistry"},         // Alice
        {"Biology", "Math"},                       // Bob
        {"Physics", "Chemistry", "Math", "CS"},   // Charlie
        {"English", "History"}                     // Diana
    };
    int numCourses[4] = {3, 2, 4, 2};  // Number of courses per student
    int i, j;
    char searchCourse[20];

   
    printf("--- Student Course Registrations ---\n");
    for (i = 0; i < 4; i++) {
        printf("%s: ", students[i]);
        for (j = 0; j < numCourses[i]; j++) {
            printf("%s ", courses[i][j]);
        }
        printf("\n");
    }

  
    printf("\nEnter course to search: ");
    scanf("%s", searchCourse);

    printf("Students taking %s: ", searchCourse);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < numCourses[i]; j++) {
            if (strcmp(courses[i][j], searchCourse) == 0) {
                printf("%s ", students[i]);
                break;
            }
        }
    }
    printf("\n");

    
    printf("\nOverloaded Students (more than 3 courses):\n");
    for (i = 0; i < 4; i++) {
        if (numCourses[i] > 3) {
            printf("%s (%d courses)\n", students[i], numCourses[i]);
        }
    }

    return 0;
}
