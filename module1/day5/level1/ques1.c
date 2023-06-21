//structures to find the volume and the total surface area of the box

#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

int main() {
    struct Box myBox = { 5.0, 3.0, 4.0 };
    struct Box *ptrBox = &myBox;  

    float volume = (*ptrBox).length * (*ptrBox).width * (*ptrBox).height;
    float surfaceArea = 2 * ((*ptrBox).length * (*ptrBox).width +
                             (*ptrBox).length * (*ptrBox).height +
                             (*ptrBox).width * (*ptrBox).height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    volume = ptrBox->length * ptrBox->width * ptrBox->height;
    surfaceArea = 2 * (ptrBox->length * ptrBox->width +
                       ptrBox->length * ptrBox->height +
                       ptrBox->width * ptrBox->height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
