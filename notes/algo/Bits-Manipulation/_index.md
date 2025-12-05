# Bits  Manipulation 



## Fundamentals
The core operators (`AND`, `OR`, `XOR`, `NOT`) are the direct implementation of concepts from Boolean algebra, which deals with `true` (1) and `false` (0) values.

* **`AND` (&):** This is logical **conjunction**. The result is `1` only if *both* input bits are `1`. It's primarily used for **masking**—checking if a specific bit is turned on.
* **`OR` (|):** This is logical **disjunction**. The result is `1` if *either* input bit is `1`. It's used for **setting** a bit—turning a specific bit on without affecting others.
* **`XOR` (^):** This is **exclusive disjunction**. The result is `1` only if the inputs are *different*. It is used to **toggle** a bit (flip it) and has the unique property that `(A ^ B) ^ B = A`.
* **`NOT` (~):** This is logical **negation**. It simply inverts all the bits in a number.

The shift operators (`<<`, `>>`) are based on the mathematical properties of base-2 numbers.

* **Left Shift (`<<`):** Shifting all bits to the left by `n` positions is a fast way to **multiply by $2^n$**. Each left shift doubles the number's value.
* **Right Shift (`>>`):** Shifting all bits to the right by `n` positions is a fast way to perform **integer division by $2^n$**, discarding any remainder.
## Tips and tricks 

##### XOR (`^`) properties

* **`x ^ x = 0`**: XORing a number with itself results in zero.
* **`x ^ 0 = x`**: XORing a number with zero results in the number itself.
* **`x ^ y ^ y = x`**: A number XORed twice with another number cancels out, returning the original number. This is useful for finding a unique element in an array.
* **`2n ^ (2n + 1) = 1`**: The XOR of an even number and the next consecutive odd number is always 1.
* **XOR Sum from 1 to n**: The result of `1 ^ 2 ^ ... ^ n` follows a repeating 4-step pattern based on `n mod 4`:
    * If `n % 4 == 0`, the result is `n`.
    * If `n % 4 == 1`, the result is `1`.
    * If `n % 4 == 2`, the result is `n + 1`.
    * If `n % 4 == 3`, the result is `0`.


##### Shift (`<<`, `>>`) properties

* **`x >> 1`**: This is a fast way to perform integer division by 2 (`x / 2`).
* **`x << 1`**: This is a fast way to multiply by 2 (`x * 2`).
* **`1 << n`**: This is a fast way to calculate $2^n$.

##### Others
+ if `s = a[l] & a[l+1] & ... & a[r]` then `(r - l + 1) ~ 1/s`
## Practice

476B, 1097B, 1312C, 1421A, 1514B, 1527A, 1559A, 1603A, 1669H, 1698A, 1843C, 1872E, 1878E

[2162C](../../solutions/2162C.md)