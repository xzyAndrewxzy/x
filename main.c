#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double mass, velocity, kinetic;
    printf("Kinetic Energy Equation \n");
    printf("Please enter a value for mass: \n");
    scanf("%lf" , &mass);
    printf("Please enter a value for velocity: \n");
    scanf("%lf" , &velocity);
    kinetic = mass * pow(velocity ,2) / 2;
    printf("kinetic energy = %lf", kinetic);


    double b, c, res;
    printf("\nTriangular Calculation \n");
    printf("Please enter a value for b: \n");
    scanf("%lf", &b );
    printf("Please enter a value for c: \n");
    scanf("%lf", &c );
    res = b + c / 2 * b * c;
    printf("Triangular Calculation = %lf", res);
    return 0;

}
