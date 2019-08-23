# Extended-Euclidean-algorithm
An implementation of Extended Euclidean algorithm in C. The program takes 2 parameter (a,b) and output the:
1. gcd(a, b)
2. Integer x and Integer y, such that ax + by = gcd(a, b)
3. The modular multiplicative inverse if exist

# Installation
Simply execute ***make*** inside the source folder will build the binary. The binary is named ***extEuclidean*** by default.

# Usage
```
./extEuclidean 43 17
gcd(43, 17) = 1
x = 2, y = -5
The modular multiplicative inverse of 17 mod 43 = 38
```
