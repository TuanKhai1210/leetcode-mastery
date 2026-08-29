# 283. Move Zeroes

[View problem on LeetCode](https://leetcode.com/problems/move-zeroes/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Stable same-direction two pointers |
| Language | C++ |
| First solved | 2026-08-29 |
| Time | 30 minutes |
| Solution support | H3 for the in-place two-pointer algorithm |
| Optimization support | H0 after learning the pattern |
| Initial rating | C |

## Summary

Move every zero to the end of an array in place while preserving the relative order of all nonzero values.

## Baseline

The first approach collected nonzero values in a temporary vector and appended the counted zeroes. It produced the intended ordering but required `O(n)` auxiliary space and initially contained a non-decreasing loop counter that caused an infinite loop.

## Final approach

Let `insert_pos` identify the first zero in the processed prefix. Scan with `index`. Whenever a nonzero value is found, swap it with `nums[insert_pos]` and advance the write pointer. Nonzero values move forward in their original encounter order, while zeroes are displaced toward the suffix.

## Why it works

Before each iteration, the prefix before `insert_pos` contains exactly the processed nonzero values in their original order. A zero does not change this invariant. A nonzero is swapped into the next prefix position and extends the invariant by one. At termination, all nonzero values form the stable prefix, so every remaining position must contain zero.

## Complexity

- Time: `O(n)`
- Auxiliary space: `O(1)`

## Edge cases

- No zeroes: each value may swap with itself and the array remains unchanged
- All zeroes: `insert_pos` never advances
- One element
- Consecutive and leading zeroes

## Learning note

The write pointer marks the boundary between the stable nonzero prefix and the unprocessed region. This is the same compaction pattern as problem 26, with swapping used to preserve the displaced zeroes.
