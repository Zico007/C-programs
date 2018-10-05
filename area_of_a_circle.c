#include <stdio.h>
#define PI 3.14159

int main()
{
	float radius;
	float area;
	
	printf("Radius=?");
	scanf("%f",&radius);

	area=PI*radius*radius;
	
	printf("Area=%.4f \n",area);
}
