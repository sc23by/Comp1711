#include <stdio.h>

int main() {

    float length1;

    printf("What is the length of the rectangle? ");
    scanf("%f", &length1);

    float length2;

    printf("What is the width of the rectangle? ");
    scanf("%f", &length2);

    float area;

    area = length1 * length2;

    printf("The area is: %.2f\n", area);

    return 0;
}