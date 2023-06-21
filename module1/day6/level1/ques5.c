//perform a search operation on the array of structures based on name of the student

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

int searchByName(const Student* students, int size, const char* targetName);

int main() {
    int numStudents = 5;
    Student* students = (Student*)malloc(numStudents * sizeof(Student));



    const char* targetName = "John";
    int index = searchByName(students, numStudents, targetName);

    if (index != -1) {
        printf("Student found at index %d:\n", index);
        printf("Roll No: %d\n", students[index].rollno);
        printf("Name: %s\n", students[index].name);
        printf("Marks: %.2f\n", students[index].marks);
    } else {
        printf("Student '%s' not found.\n", targetName);
    }

    free(students);

    return 0;
}

int searchByName(const Student* students, int size, const char* targetName) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, targetName) == 0) {
            return i; 
        }
    }
    return -1; 
}
