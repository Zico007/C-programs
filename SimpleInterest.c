#include <stdio.h>

int main()
{
    int p,r,t;
    float si;


    printf("Enter the Principal amount\n");
    scanf("%d",&p);
    printf("Enter the Rate of Intrest\n");
    scanf("%d",&r);
    printf("Enter the amount of Time\n");
    scanf("%d",&t);

    si=(p*r*t)/100;

    printf("Simple Intrest=%.2f\n",si);

    return 0;

}
