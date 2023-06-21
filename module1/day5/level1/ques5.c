//swapping the fields of two structures using pointers

#include <stdio.h>

typedef struct {
    int field1;
    float field2;
    char field3;
} Structure;

void swapFields(Structure *struct1, Structure *struct2);

int main() {
    Structure structure1 = { 10, 3.14, 'A' };
    Structure structure2 = { 20, 6.28, 'B' };

    printf("Before swapping:\n");
    printf("Structure 1: %d, %.2f, %c\n", structure1.field1, structure1.field2, structure1.field3);
    printf("Structure 2: %d, %.2f, %c\n", structure2.field1, structure2.field2, structure2.field3);

    swapFields(&structure1, &structure2);

    printf("\nAfter swapping:\n");
    printf("Structure 1: %d, %.2f, %c\n", structure1.field1, structure1.field2, structure1.field3);
    printf("Structure 2: %d, %.2f, %c\n", structure2.field1, structure2.field2, structure2.field3);

    return 0;
}

void swapFields(Structure *struct1, Structure *struct2) {
    Structure temp;


    temp.field1 = struct1->field1;
    struct1->field1 = struct2->field1;
    struct2->field1 = temp.field1;


    temp.field2 = struct1->field2;
    struct1->field2 = struct2->field2;
    struct2->field2 = temp.field2;


    temp.field3 = struct1->field3;
    struct1->field3 = struct2->field3;
    struct2->field3 = temp.field3;
}
