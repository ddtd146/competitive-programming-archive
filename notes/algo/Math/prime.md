# Prime 

## Sieve of Eratosthenes
+ Implement using boolean vector

```
void sieve(vector <int> &isPrime) {
    isPrime(N + 1, true);
    for (int p = 2; p * p <= N; p++) {
        if (isPrime[p] == true) { 
            for (int i = p * p; i <= N; i += p)
                isPrime[i] = false;
        }
    }
}
```
+ Implement using spf (smallest prime factor) vector
```
void sieve(&vector<int> &spf>){
    spf[0] = 0;
    for (int i = 2; i <= N; i++) {
        if (spf[i] == 1)  // if the number is prime 
            for (int j = i; j <= N; j += i) {
                if (spf[j] == 1) 
                    spf[j] = i;
            }
    }
}
```




