#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        return 0;
    }

    discriminant = b * b - 4.0f * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrtf(discriminant)) / (2.0f * a);
        root2 = (-b - sqrtf(discriminant)) / (2.0f * a);
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2.0f * a);
        printf("Root1 = Root2 = %.2f\n", root1);
    } else {
        realPart = -b / (2.0f * a);
        imagPart = sqrtf(-discriminant) / (2.0f * a);
        printf("Root1 = %.2f + i%.2f\n", realPart, imagPart);
        printf("Root2 = %.2f - i%.2f\n", realPart, imagPart);
    }

    return 0;
}
