def esieve(n):
    primes = []
    multiples = []
    for i in range(2, n+1):
        if i not in multiples:
            print(i)
            primes.append(i)
            for j in range(i*i, n+1, i):
                multiples.append(j)
    return(primes)

print(sum(esieve(10)))