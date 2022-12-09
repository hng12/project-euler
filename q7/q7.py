def esieve(n):
    primes = []
    multiples = []
    for i in range(2, n+1):
        if i not in multiples:
            primes.append(i)
            if len(primes) == 10001:
                break
            for j in range(i*i, n+1, i):
                multiples.append(j)
    return(primes)
#ok

print(esieve(1000000))