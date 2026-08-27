# 344. Reverse String

[View problem on LeetCode](https://leetcode.com/problems/reverse-string/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | In-place two pointers |
| Language | C++ |
| First solved | 2026-08-24 |
| Time | Pending |
| Initial support | H0 |
| Initial rating | A |

## Summary

Reverse a character array in place without allocating another array.

## Approach

Place one pointer at each end. Swap the referenced characters and move both pointers toward the center until the unprocessed region is empty.

## Why it works

Each swap places the leftmost and rightmost unprocessed characters into their final reversed positions. Shrinking the unprocessed interval repeatedly therefore produces the complete reversal.

## Complexity

- Time: `O(n)`; `n / 2` swaps simplify to linear time
- Auxiliary space: `O(1)`

## Edge cases

- One character
- Even and odd lengths
- Repeated characters

## Learning note

The one-past-end index style in the reviewed implementation handles an empty vector without unsigned underflow.

