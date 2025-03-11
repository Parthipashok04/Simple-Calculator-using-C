#include <stdio.h>
void add(float a, float b) {
    printf("Result: %.2f\n", a + b);
}
void subtract(float a, float b) {
    printf("Result: %.2f\n", a - b);
}
void multiply(float a, float b) {
    printf("Result: %.2f\n", a * b);
}
void divide(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error! Division by zero.\n");
    }
}
int main() {
    char operator;
    float num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch (operator) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}
