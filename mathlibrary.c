#include <stdio.h>
#include <math.h>

int main() {
    double num, result;
    
    printf("Enter a number: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("Square root of %.2f is %.2f\n", num, result);
    
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    result = pow(base, exponent);
    printf("%.2f raised to the power %.2f is %.2f\n", base, exponent, result);
    
    return 0;
}
