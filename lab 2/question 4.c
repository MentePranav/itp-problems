#include <stdio.h>
#include <math.h>

int main()
{
    double x = 25.0;

    printf("sqrt(25) = %.2lf\n", sqrt(x));
    printf("pow(2,5) = %.2lf\n", pow(2,5));
    printf("log(25) = %.4lf\n", log(x));
    printf("log10(100) = %.2lf\n", log10(100));
    printf("sin(0) = %.2lf\n", sin(0));
    printf("cos(0) = %.2lf\n", cos(0));
    printf("ceil(2.3) = %.2lf\n", ceil(2.3));
    printf("floor(2.9) = %.2lf\n", floor(2.9));

    return 0;
}
