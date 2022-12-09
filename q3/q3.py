def isPrime(n):
    if n == 1 or n == 0:
        return False
    else:
        for i in range(1, n):
            if n % i == 0:
                return False
            else:
                return True

n = 600851475143
hpf = 0
for i in range(1, n):
    if isPrime(i):
        if n % i == 0:
            hpf = i
print(hpf)