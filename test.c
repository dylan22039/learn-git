#include<stdio.h>
int main(){
    
    for(int x = 0, y = 0; x < 10; x++, y+=2) {
        
        for (int j = 1; j < (10-x); j++) {
            printf("_");
        } 
        for (int j = 0; j <= y; j++) {
            printf("*");
        }
        for(int j = 1; j < (10-x); j++){
            printf("_");
        }
        printf("\n");
    }

    return 0;
}