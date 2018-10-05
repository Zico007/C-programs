#include<stdio.h>

void main(){
    int i;

    printf("Enter Your Value:\n");
    scanf("%d",&i);


    if(i%2<=0){
        printf("This Value is an even number");
    }

    else{
        printf("This Value is an Odd number");
    }
}
