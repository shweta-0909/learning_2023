//Store Data for n students in Structures Dynamically

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int n, i;
    Student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (Student *)malloc(n * sizeof(Student));


    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    
    free(students);

    return 0;
}
