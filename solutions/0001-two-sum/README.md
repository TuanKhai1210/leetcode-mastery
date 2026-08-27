# 1. Two Sum

[View problem on LeetCode](https://leetcode.com/problems/two-sum/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Complement lookup with a hash map |
| Language | C++ |
| First solved | 2026-08-03 |
| Time | 15 minutes |
| Initial support | H2 for the unfamiliar `unordered_map` pattern |
| Initial rating | B |

## Summary

Return the indices of two distinct elements whose values sum to the target.

## Approach

For each value, calculate `target - value`. Search for that complement among earlier values stored as `value → index`; if found, return the stored index and the current index.

## Why it works

Before processing index `i`, the map contains exactly the earlier values and their indices. A successful complement lookup therefore identifies a valid pair with distinct indices. Looking up before insertion prevents the current element from matching itself.

## Complexity

- Average time: `O(n)`
- Pathological hash-table worst case: `O(n²)`
- Auxiliary space: `O(n)`

## Edge cases

- Duplicate values such as `[3, 3]`
- Negative values
- A valid pair near the end of the array

## Learning note

The answer requires indices, so an `unordered_set` is insufficient: the algorithm needs an `unordered_map<int, int>`.

