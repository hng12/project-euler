#include <stdio.h>
int main(){
    int i = 1;
    int j = 1;
    int total = 0;
    do
    {
        i += j;
        if (i % 2 == 0){
            total += i;
        }
        j += i;
        if (j % 2 == 0){
            total += j;
        }
    } while (i < 4000000 && j < 4000000);
    printf("%d", total);
}