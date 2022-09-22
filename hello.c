#include <stdio.h>
#include <math.h>

double f(double x){
    return exp(-fabs(x)) * sin(x);
}

double g(double x){
    return exp(-fabs(x)) * cos(x);
}

int main()
{
    float x = 0;
    printf("Enter x: ");
    scanf("%f", &x);
    
    printf("F = %f \n", f(x));
    printf("G = %f \n", g(x));

    return 0;
}
