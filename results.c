/*
NAME: MUTUNGA ALEX
REG NO:CT100/G/26278/25
Description:examination result
*/


#include <stdio.h>
#include <stdlib.h>

// i. Define the structure
typedef struct {
    char name[50];
    int reg_no;
    float total_marks;
} Student;

int main() {
    FILE *fyp;
    Student s;

    // ii. Open the binary file for reading
 
    fyp = fopen("results.dat", "rb");
    if (fyp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // iii. Read and display each student record
    printf("Student Results:\n");
    printf("----------------\n");
    while (fread(&s, sizeof(Student), 1, fyp)) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n\n", s.total_marks);
    }

    fclose(fyp);
    return 0;
}

