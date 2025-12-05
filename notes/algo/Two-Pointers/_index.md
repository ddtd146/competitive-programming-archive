# Topic

## Theory 

The core idea is to use two integer indices (the "pointers") to traverse the data. Instead of one pointer iterating through every possible pair for the other pointer, the two pointers move intelligently based on the problem's logic, processing the entire array in a single pass.

Common patterns: 
1. Slow and Fast: Setup  a `slow` pointer and a `fast` pointer.
2. Left and Right: Setup a `left` pointer starts at index 0 and a `right` pointer starts at index n-1
3. Sliding window: Set up two pointers starting at the same position and moving at the same speed.

## Practice