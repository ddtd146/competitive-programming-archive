# Kadane 's Algorithm

## Theory 

### Problem 
Give an array A, find maximum possible sum of a subarray.

### Approach 
**1. Naive approach:** Iterate over all subarrays - $O(n^2)$
**2. Kadane approach:** $O(n)$

Calculate the maximum sum of a subarray ending at index `i` using dynamic programming. 
***Observation.*** If the sum of the current subarray ending at the previous element is $\le 0$, then we should start a new subarray from next elements.

### Solution 

Define `curMax` as current max of subarray  and `maxSum` is overall max sum.
At step `i`, if `curMax <= 0` then set it to 0, otherwise `curMax += a[i]` and then update `maxSum`

[Implementation](./kadane.cpp)

***Alternative Implementation.*** Keep track a min pref `minPref = min(minPref, sum)` and calculate `maxSum` using `maxSum = max(maxSum, sum - minPref)`