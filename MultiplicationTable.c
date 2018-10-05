#include <stdio.h>

int main(){
    int i=1;
    int j,k;

    printf("Input your value:");
    scanf("%d",&j);

    for(i; i<=12; i++){
        k=i*j;
        printf("%d x %d = %d\n",j,i,k);
    }
    return 0;
}
