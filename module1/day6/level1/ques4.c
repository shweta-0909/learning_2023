//sort the array of structures in descending order based on marks

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

int compareByMarksDesc(const void* a, const void* b);
void displayStudents(const Student* students, int size);

int main() {
    int numStudents = 5;
    Student* students = (Student*)malloc(numStudents * sizeof(Student));

    // Assume the students array is initialized with data

    printf("Before sorting:\n");
    displayStudents(students, numStudents);

    // Sort the array in descending order based on marks
    qsort(students, numStudents, sizeof(Student), compareByMarksDesc);

    printf("After sorting:\n");
    displayStudents(students, numStudents);

    free(students);

    return 0;
}

int compareByMarksDesc(const void* a, const void* b) {
    const Student* studentA = (const Student*)a;
    const Student* studentB = (const Student*)b;

    if (studentA->marks < studentB->marks)
        return 1;
    else if (studentA->marks > studentB->marks)
        return -1;
    else
        return 0;
}

void displayStudents(const Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}
