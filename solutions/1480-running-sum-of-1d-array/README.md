# 1480. Running Sum of 1d Array

[View problem on LeetCode](https://leetcode.com/problems/running-sum-of-1d-array/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Prefix accumulation |
| Language | C++ |
| First solved | 2026-08-02 |
| Time | 5 minutes |
| Initial support | H1 for the linear optimization |
| Initial rating | B |

## Summary

Return an array whose value at index `i` is the sum of the input values from index `0` through `i`.

## Approach

Scan from left to right while maintaining one running total. Add each value to the total, then append the total to the result.

## Why it works

Before processing index `i`, the running total equals the sum through index `i - 1`. Adding `nums[i]` therefore produces exactly the prefix sum through `i`, which is written to the result.

## Complexity

- Time: `O(n)`
- Auxiliary space: `O(1)` excluding the returned array
- Output space: `O(n)`

## Edge cases

- A single element
- Negative values
- Integer range validated against the problem constraints

## Learning note

Maintaining a reusable prefix state removes the repeated work of recomputing every prefix with nested loops.

