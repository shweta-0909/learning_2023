//parse the string and initialize an array of structures

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void parseInputString(const char* inputString, Student* student);

int main() {
    const char* inputString = "1001 Aron 100.00";
    Student student;

    parseInputString(inputString, &student);

    printf("Parsed input:\n");
    printf("Roll No: %d\n", student.rollno);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}

void parseInputString(const char* inputString, Student* student) {
    sscanf(inputString, "%d %s %f", &student->rollno, student->name, &student->marks);
}
