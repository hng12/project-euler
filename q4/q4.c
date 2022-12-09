#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int * initialise_array(int *a, int size, int num) {
    for (int i = 0; i < size; ++i, num /= 10)
        a[(size - 1) - i] = num % 10;
}

int main(){
    for (int i = 900; i < 1000; i++){
        for (int j = 900; j < 1000; j++){
            int n = i * j;
            int m[6];
            initialise_array(m, 6, n);
            if (m[0] == m[5] && m[1] == m[4] && m[2] == m[3]){
                printf("%d\n", n);
            }
        }
    }
}