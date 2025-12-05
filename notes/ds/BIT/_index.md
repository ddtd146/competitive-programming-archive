# Binary Indexed Tree

## Theory 

### Problem 
Given array A. Q queries: 
1 u v: A[u] += v;
2 p: $\sum_{i=1}^p A[i]$

### Approach
1. Naive 1
2. Naive 2 
    Use prefixSum to calculate query 2 in O(1) 
    But update query costs O(n)
2. BIT 
    ***Observation***. 
    We need to reallocate each elements in array into  the prefixSum to minimize number of updated prefixSum elements.

    $ n = 2^{i_1}  + 2^{i_2} + ... + 2^{i_k} $
    So we just need to update maximum $\log n$ sum
    
    ***Implementation***
    We can use basic data structure like array to store.
    ```
    int BIT[n+1];
    ```
    Get sum query
    ```
        int getSum(int p){
            int idx = p;
            int res = 0;
            while(idx > 0){
                res += BIT[idx];
                idx -= idx & -idx;
            }
            return res;
        }
    ```
    Update query

    ```
    void update(int u, int v){
        int idx = u;
        while(idx <= n>){
            bid[idx] += v;
            idx += idx & -idx;
        }
    }
    ```

## Practice 