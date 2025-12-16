#include <stdio.h>
#include <math.h>
const float g = 9.81;
const float pi = 3.14159265;
int main(){
    float coeff,Pmin,Pmax,deg,mass;
    float rad,W_parallel,fric;
    printf("This is a minimum and maximum force calculator\n"
    "So the question is like this:\n\n"
    "A block of mass 'm' is resting on an inclined plane with inclination angle 'x'\n"
    "with the horizontal and coefficient of static friction between the surface\n"
    "of plane and block is 'k'. An external force 'P' is applied to the block\n"
    "parallel to the incline.\n"
    "Calculate:\n1. Minimum force Pmin required to prevent the block from sliding down\n"
    "2. Maximum force Pmax that can be applied to the block before the block starts \n"
    "sliding up the incline.\n\n");
    printf("Enter the inclination angle 'x' (degrees): ");
    scanf("%f",&deg);
    printf("Enter the mass of block 'm' (Kg): ");
    scanf("%f",&mass);
    printf("Enter the coefficient of friction 'k': ");
    scanf("%f",&coeff);
    
    rad = deg*(pi/180);
    W_parallel = mass*g*sin(rad);
    fric = coeff*mass*g*cos(rad);

    Pmin = W_parallel - fric;
    Pmax = W_parallel + fric;

    if(fric>W_parallel){
        Pmin = 0;
        printf("*****************************************************************************\n");
        printf("\nBlock won't slide down on its own as the maximum friction is greater than\n"
        "the weight component parallel to the incline.\n\n");
        printf("*****************************************************************************\n");
    }
    printf("\nThe weight component along the incline is: %.2f\n",W_parallel);
    printf("Value of maximum friction is: %.2f\n\n",fric);
    printf("-----------------------------------------------------------------------------\n\n");
    printf("Pmin (minimum force to hold the block) is: %.2f \n",Pmin);
    printf("Pmax (maximum force before block begins to slide up) is: %.2f \n\n",Pmax);
    printf("-----------------------------------------------------------------------------");

    return 0;
}
