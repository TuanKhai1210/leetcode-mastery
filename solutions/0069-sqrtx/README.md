# 69. Sqrt(x)

[View problem on LeetCode](https://leetcode.com/problems/sqrtx/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Binary search on the answer |
| Language | C++ |
| First solved | 2026-08-29 |
| Time | 15 minutes |
| Algorithm support | H3 for the binary-search transformation |
| Implementation support | H1 for the final boundary return |
| Initial rating | C |

## Summary

Return the integer part of the square root of a nonnegative integer without calling a built-in square-root or power function.

## Baseline

The first approach scanned candidate values linearly and stopped when `i * i` exceeded `x`. Besides taking `O(x)` time in the stated analysis, direct multiplication can overflow for large inputs.

## Final approach

Binary-search candidate roots in the closed interval `[1, x]`. Compare `mid` with `x / mid` rather than computing `mid * mid`. Move right when `mid` is too large and move left when it is still feasible. If no comparison returns immediately, `right` is the greatest feasible integer root.

## Why it works

For positive `mid`, the condition `mid <= x / mid` is equivalent to `mid * mid <= x` without performing the overflowing multiplication. Feasible candidates form a monotonic prefix. Binary search removes an infeasible suffix or a feasible prefix on every iteration. At termination, `right` is the last feasible value and thus equals `floor(sqrt(x))`.

## Complexity

- Time: `O(log x)`
- Auxiliary space: `O(1)`

## Edge cases

- `x = 0` is handled before division
- `x = 1` returns `1`
- A perfect square
- A value immediately below the next perfect square
- A large integer that would overflow `mid * mid`

## Learning note

This problem combines two reusable ideas: binary search can operate on an answer space, and division can replace a potentially overflowing multiplication. With a closed interval, the final floor value is `right`, not `left`.
