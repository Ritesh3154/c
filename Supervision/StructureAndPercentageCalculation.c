#include <stdio.h>

#define STUDENT_COUNT 5

// Define the student structure
struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};

int main() {
    struct Student students[STUDENT_COUNT];

    // Input: Get data for each student
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);

        printf("Name => ");
        getchar(); // Clear newline character
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove newline from name input
        for (int j = 0; students[i].name[j] != '\0'; j++) {
            if (students[i].name[j] == '\n') {
                students[i].name[j] = '\0';
                break;
            }
        }

        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);

        // Calculate percentage
        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        students[i].percentage = total / 3.0f;
    }

    // Output: Display results
    printf("\n--- Student Mark Sheets ---\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry: %d, Mathematics: %d, Physics: %d\n",
               students[i].chem_marks,
               students[i].maths_marks,
               students[i].phy_marks);
        printf("Percentage: %.2f%%\n\n", students[i].percentage);
    }

    return 0;
}
