//WAP to compute Sin(x) using Taylor series approximation.
#include <stdio.h>
#include <math.h>

double calculate_sin(double x, int terms) {
    double result = 0;
    int i;

    for (i = 0; i < terms; i++) {
        int power = 2 * i + 1;
        double term = pow(-1, i) * pow(x, power) / tgamma(power + 1);
        result += term;
    }
    return result;
}

int main() {
    double x;
    int terms;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms in the Taylor series: ");
    scanf("%d", &terms);

    double sin_x = calculate_sin(x, terms);

    printf("sin(%lf) = %lf\n", x, sin_x);

    return 0;
}
