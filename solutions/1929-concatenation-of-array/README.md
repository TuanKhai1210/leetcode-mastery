# 1929. Concatenation of Array

[View problem on LeetCode](https://leetcode.com/problems/concatenation-of-array/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Output construction |
| Language | C++ |
| First solved | 2026-08-02 |
| Time | 5 minutes |
| Initial support | H0 algorithm; H1 allocation improvement |
| Initial rating | A |

## Summary

Construct an output array containing the input sequence twice in the same order.

## Approach

Reserve capacity for `2n` elements and insert the complete input range twice.

## Why it works

The first insertion fills output indices `[0, n)`, and the second fills `[n, 2n)` with the same sequence. The result therefore matches the required concatenation.

## Complexity

- Time: `O(n)`; copying `2n` elements differs only by a constant factor
- Auxiliary space: `O(1)` excluding output
- Output space: `O(n)`

## Edge cases

- The minimum permitted input size
- Repeated values

## Learning note

`reserve` does not change Big-O complexity, but it prevents avoidable vector reallocations during construction.

