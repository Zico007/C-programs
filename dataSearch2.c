#include <stdio.h>

void main(){
    int i;
    int key;
    int search;
    int booleanSearch=0;
    int examscore[] = {10, 13, 50, 5, 22, 8, 2, 30, 80, 90};
    printf("Search for any number\n");
    scanf("%d",&key);

    for(i=0; i<10; i++){
        if(key==examscore[i]){
            printf("we found our search");
            search=0;
            break;
        }
        search=1;
    }
        if(search==1){
            printf("we did not find the search");
        }
}
