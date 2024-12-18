// Description: Array of structs

#include <stdio.h>

// Create student structure
typedef struct {
    char name[50];
    float gpa;
} Student;

int main() {

    // Create instances of students
    Student student1 = {"Spongebob", 8.3};
    Student student2 = {"Steph curry", 9.2};
    Student student3 = {"Lebron James", 9.3};

    // Array of students
    Student students[] = {student1, student2, student3};

    // Loop through the array
    int size = sizeof(students) / sizeof(students[0]);
    
    for (int i = 0; i < size; i++) {
        printf("%s", students[i].name);
        printf("%d\n", students[i].gpa);
    }
    
    return 0;
}