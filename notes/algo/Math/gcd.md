# GCD

## Euclid Algorithm
```
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
```
## Basic properties
+ $GCD(x, y) = GCD(x-y, y)$
## Bézout's Identity: 
The $\gcd(a, b)$ is the smallest positive integer that can be written in the form $ax + by$.
## Others
+ $GCD(x, y, z) \le GCD(x + y, z)$
+ If the prime factorizations of $a$ and $b$ are $a = p_1^{e_1} p_2^{e_2} \dots p_k^{e_k}$ and $b = p_1^{f_1} p_2^{f_2} \dots p_k^{f_k}$ (where exponents can be zero), then:
$\gcd(a, b) = p_1^{\min(e_1, f_1)} p_2^{\min(e_2, f_2)} \dots p_k^{\min(e_k, f_k)}$