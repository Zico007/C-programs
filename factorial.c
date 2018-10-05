#include <stdio.h>

void main(){
    int i,n,factorial=1;

    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    printf("%d = %d\n",n,factorial);
}
