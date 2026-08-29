# 26. Remove Duplicates from Sorted Array

[View problem on LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Same-direction two pointers |
| Language | C++ |
| First solved | 2026-08-29 |
| Time | 20 minutes |
| Solution support | H0 for the `erase` baseline |
| Optimization support | H3 for the linear write-pointer approach |
| Initial rating | C |

## Summary

Compact a sorted array in place so that each distinct value occupies one position in its valid prefix, then return the length of that prefix.

## Baseline

The independent baseline removed repeated values with `vector::erase`. It was logically correct, but each erasure can shift every later element, so repeated erasures make the worst-case running time `O(n^2)`.

## Final approach

Keep `insert_pos` at the location for the next distinct value. Scan from left to right; whenever the current value differs from its predecessor, copy it to `nums[insert_pos]` and advance the write pointer.

## Why it works

The sorted order places equal values next to one another. A value is therefore new exactly when it differs from the previous value. After every iteration, `nums[0..insert_pos)` contains every distinct value seen so far, once each and in sorted order. The returned pointer is consequently the required unique count.

## Complexity

- Time: `O(n)`
- Auxiliary space: `O(1)`

## Edge cases

- An empty vector returns `0` in this reviewed implementation
- An array with no duplicates is copied safely onto the same positions
- An array containing one repeated value returns `1`

## Learning note

An in-place operation is not automatically efficient. For `vector`, erasing from the middle is linear because the suffix must be shifted. A write pointer avoids structural modification and performs one pass.
