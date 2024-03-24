#include<stdio.h>
int main(){
    
    for(int x = 10; x > 0; x--) {
        
        for (int y = 0; y < x; y++) {
            printf("  ");
        } 
        for (int y = 0; y < x-2; y++) {
            printf("*  ");
        }
        puts("");
    }

    return 0;
}