#include <stdio.h> //header

int main()
{
	//declare variables
	int n, count=1;
	float score,average ,sum=0;

	//user input
	printf("How many Courses are you offering?");
	scanf("%d",&n);
	printf("Input your scores\n");
	printf("Click enter after every entry\n");

	//decision
	while(count <= n)
	{
		printf("Score=");
		scanf("%f",&score);
		sum += score;
		++count;
	}
	
	//formular
	average=sum/n;
	
	//output
	printf("\n The sum of your scores is:%.0f\n",sum);
	printf("\n The average of your scores is:%.2f\n",average);
}
