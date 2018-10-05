//Created by Isaac Ogunfolaju
//CSC/2016/0033
//Linear Search
#include <stdio.h>

void main(){
    int i;
    int key;
    int examscore[] = {10, 13, 50, 5, 22, 8, 2, 30, 80, 90};
    printf("Search for any number\n");
    scanf("%d",&key);

    for(i=0; i<10; i++){
        if(key==examscore[i]){
            printf("we found our search");
			search = 0;
			
        }
        else{
                printf("Not there");
				search=1;

            }
		        if(search==0){
           break;
        } 
    }
        if(search==1){
           printf("we did not find the score");
        }
}
