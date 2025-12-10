# Dump 

1. Max subarray sum contain ai 

Using 2 prefix, suffix max sum: `L[i], R[i]`.

`L[i]`: max subarray sum end with index i
`R[i]`: max subarray sum start with index i

The answer is `max(L[i] + R[i] - a[i])`
