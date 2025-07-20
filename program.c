#include <stdio.h>

int main() {
    int age;
    float height;

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Enter your height : ");
    scanf("%f", &height);

    printf("Your age is %d, and your height is %.3f.", age, height);
    return 0;
}