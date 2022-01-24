#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654

double degToRad (int degrees)
{
    return (double)degrees/180*PI;
}


int main()
{

    int input;
    printf("This is cosine calculator\nEnter an angle in degrees: ");
    scanf("%d", &input);
    printf("The cosine of %d is:  %lf", input, 1-pow(degToRad(input),2)/2+pow(degToRad(input),4)/24-pow(degToRad(input),6)/720);
    return 0;
}