#include <stdio.h>

int main(){
    int sum = 0, sumsquare = 0, squaresum = 0;
    for (int i = 1; i <= 100; i++){
        sum += i;
        sumsquare += i*i;
    }
    squaresum = sum*sum;
    printf("%d", squaresum-sumsquare);
}