#include <stdio.h>

void main(){
    int num, k,rem;

    printf("The prime numbers between 1 and 10 are:\n");

    for(num=2; num<=10; num++)
    {
        rem=0;
        for(k=2; k<=num/2; k++)
        {
            if((num%k)==0){
                rem++;
                break;
            }
        }
    if(rem==0){
    printf("%d\n",num);
    }
    }
}
