#include <stdio.h>
#include <math.h>

double f(double x){
    return exp(-fabs(x)) * sin(x);
}

int main()
{
    float x = 0;
    printf("Enter x: ");
    scanf("%f", &x);
    
    printf("F = %f \n", f(x));

    return 0;
}
