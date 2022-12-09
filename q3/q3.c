//doesn't work??

#include <stdbool.h>
#include <stdio.h>
#include <math.h>
  
bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 600851475143;
    int hpf = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            if (n%i == 0) {
                hpf = i;
            }
        }
    }
    printf("%d\n", hpf);
}