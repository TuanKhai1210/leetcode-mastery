# 35. Search Insert Position

[View problem on LeetCode](https://leetcode.com/problems/search-insert-position/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Binary search for insertion boundary |
| Language | C++ |
| First solved | 2026-08-29 |
| Time | 10 minutes |
| Algorithm support | H0 |
| Implementation support | H1 for the missing division in `mid` |
| Initial rating | A |

## Summary

Find a target in a sorted array, or return the index where it should be inserted to preserve sorted order.

## Baseline

A left-to-right scan can stop at the first value greater than or equal to the target, but its worst-case running time is `O(n)` and therefore misses the required logarithmic bound.

## Final approach

Use closed-interval binary search. Return `mid` when the target is found. Otherwise discard the half that cannot contain the target. If the search interval becomes empty, return `left`.

## Why it works

Throughout the search, every index before `left` contains a value smaller than the target, and every index after `right` contains a value larger than the target. Each comparison preserves these boundary facts while shrinking the candidate interval. When `left > right`, `left` is therefore the first index at which the target can be inserted without violating sorted order.

## Complexity

- Time: `O(log n)`
- Auxiliary space: `O(1)`

## Edge cases

- The target is smaller than every value, so the answer is `0`
- The target is larger than every value, so the answer is `nums.size()`
- The target already exists
- An empty vector returns `0` in this reviewed implementation

## Learning note

The algorithm and interval structure were identified independently. The H1 correction was implementation-only: `mid` must divide the interval width by two. Without `/ 2`, the probe no longer halves the search space and may leave the valid range.
