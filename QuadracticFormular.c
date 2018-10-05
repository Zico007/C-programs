#include <stdio.h> //headers
#include <math.h>

int main()
{
	//declare variables
	float a,b,c,d,x1,x2;
	d=(b*b-(4*a*c))/(2*a);
	
	/*user input*/
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);

	/*decision*/
	if(d<0)
	{
		x1=(-b+(sqrt(-d)));
		x2=(-b-(sqrt(-d)));
		printf("It is a complex number");
		printf("The roots are:x1=%.2f, x2=%.2f",x1,x2);
	}
	else if(d==0)
	{
		x1= -b/2*a;
		printf("Equal roots:x=%.2f",x1);
	}
	else
	{
		x1=-b+(sqrt(d));
		x2=-b-(sqrt(d));
		printf("The roots are:x1=%.2f, x2=%.2f",x1,x2);
	}
}

