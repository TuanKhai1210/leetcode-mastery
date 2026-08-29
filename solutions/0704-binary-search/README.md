# 704. Binary Search

[View problem on LeetCode](https://leetcode.com/problems/binary-search/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Closed-interval binary search |
| Language | C++ |
| First solved | 2026-08-29 |
| Time | 30 minutes |
| Solution support | H3 for the `left`, `right`, and `mid` framework |
| Optimization support | H0 after learning the framework |
| Initial rating | C |

## Summary

Return the index of a target in an ascending array, or `-1` when the target is absent.

## Baseline

A linear scan is correct in `O(n)` time but ignores the sorted-order guarantee. An early attempt to jump by a freely changing step could leave the valid index range or stop making progress.

## Final approach

Maintain the closed candidate interval `[left, right]`. Inspect its midpoint. Return it on equality; discard `[left, mid]` when the midpoint is too small, or discard `[mid, right]` when it is too large.

## Why it works

The target, if present, is always inside the maintained interval. Sorted order proves that every value at or left of `mid` is too small when `nums[mid] < target`; the symmetric argument removes the right half when it is too large. Each update preserves the invariant and strictly shrinks the interval. If the interval becomes empty, the target cannot exist.

## Complexity

- Time: `O(log n)`
- Auxiliary space: `O(1)`

## Edge cases

- An empty array returns `-1`
- One element, whether matching or not
- The target is the first or last value
- The target lies between two present values

## Learning note

Binary search becomes reliable when the interval convention is explicit. With a closed interval, use `left <= right`, and remove `mid` with `mid + 1` or `mid - 1` so every iteration makes progress.
