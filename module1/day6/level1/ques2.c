//initialize all members in the above array of structures

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void initializeStudents(Student* students, int size);

int main() {
    int numStudents = 5;
    Student* students = (Student*)malloc(numStudents * sizeof(Student));

    initializeStudents(students, numStudents);

    printf("Initialized students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}

void initializeStudents(Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = i + 1;
        sprintf(students[i].name, "Student%d", i + 1);
        students[i].marks = 0.0;
    }
}
