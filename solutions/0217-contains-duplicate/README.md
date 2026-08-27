# 217. Contains Duplicate

[View problem on LeetCode](https://leetcode.com/problems/contains-duplicate/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Hash-set membership |
| Language | C++ |
| First solved | 2026-08-03 |
| Time | 5-minute baseline + 5-minute optimization |
| Initial support | H1 for the hash-set optimization |
| Initial rating | B |

## Summary

Determine whether any value occurs at least twice in the input array.

## Approach

Maintain an `unordered_set` of previously seen values. Return `true` when the current value is already present; otherwise insert it and continue.

## Why it works

The set contains exactly the values from the processed prefix. Finding the current value in that set proves an earlier equal value exists. If the scan finishes without a hit, every value was unique.

## Complexity

- Average time: `O(n)`
- Pathological hash-table worst case: `O(n²)`
- Auxiliary space: `O(n)`

## Alternatives

- Compare every pair: `O(n²)` time, `O(1)` space
- Sort then compare adjacent values: `O(n log n)` time; may modify the input

## Learning note

Use a set when only membership matters. Use a map when the matching value must retain associated data such as an index.

