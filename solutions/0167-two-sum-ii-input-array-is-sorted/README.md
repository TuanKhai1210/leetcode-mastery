# 167. Two Sum II — Input Array Is Sorted

[View problem on LeetCode](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

| Field | Value |
|---|---|
| Difficulty | Medium |
| Pattern | Opposite-direction two pointers |
| Language | C++ |
| First solved | 2026-08-24 |
| Time | Pending |
| Initial support | H1 for the two-pointer optimization |
| Initial rating | B |

## Summary

Return the one-based positions of two values in a sorted array whose sum equals the target, using constant auxiliary space.

## Approach

Start one pointer at each end. If their sum is too small, increase the left value; if it is too large, decrease the right value. Return when the target is reached.

## Why it works

Because the array is sorted, a sum below the target cannot be repaired while keeping the current left value and moving the right pointer left. The left endpoint can be discarded. The symmetric argument discards the right endpoint when the sum is too large. No valid pair is skipped.

## Complexity

- Time: `O(n)`
- Auxiliary space: `O(1)`; the constant-size returned pair is output

## Edge cases

- Negative values
- Duplicate values such as `[0, 0, 3, 4]`
- The answer uses the first and last elements

## Learning note

The unsorted Two Sum needs a hash map, while sorted order enables deterministic linear time with constant auxiliary space.
