#include <stdio.h>

void main(){
    int low = 0;
    int high = 9;
    int search = 0;
    int key;
    int mid;
    int scores[]={2, 5, 8, 10, 13, 22, 30, 50, 80, 90};


    printf("Insert the value\n");
    scanf("%d",&key);



   while(high >= low){
       mid = ( low + high) / 2;
          if( key < scores[mid] ){
            high = mid - 1;
        }

        else if( key == scores[mid] ){
            search=1;
            break;
        }

        else if( key > scores[mid] ){
            low = mid + 1;
        }

        else{
            printf("Error");
        }
        search = 0;
    }

    if (search ==1){
    printf("It has been found");
    }
        else {
        printf("Not found");
        }
}
