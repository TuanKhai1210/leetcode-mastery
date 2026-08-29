# 20. Valid Parentheses

[View problem on LeetCode](https://leetcode.com/problems/valid-parentheses/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Stack matching |
| Language | C++ |
| First solved | 2026-08-29 |
| Time | 30 minutes |
| Solution support | H0 |
| Optimization support | H0 |
| Initial rating | A |

## Summary

Determine whether a string of round, square, and curly brackets is correctly paired and nested.

## Rejected baseline

Three counters can verify that each bracket type occurs equally often, but they lose ordering information. A sequence such as `[{]}` can balance every counter while remaining invalid.

## Final approach

Push each opening bracket onto a stack. For a closing bracket, require a nonempty stack and check that its top is the corresponding opening type. Pop only after a successful match. The string is valid only if the stack is empty at the end.

## Why it works

Correct nesting requires every closing bracket to match the most recently opened bracket that has not yet been closed. The stack top stores exactly that bracket. Rejecting an empty stack or a mismatched top catches invalid prefixes immediately; an empty stack after the scan proves that no opening bracket remains unmatched.

## Complexity

- Time: `O(n)`
- Auxiliary space: `O(n)` in the worst case

## Edge cases

- A closing bracket appears first
- Only opening brackets
- A balanced count with incorrect nesting, such as `[{]}`
- The smallest valid pair

## Learning note

Counters preserve quantity but not history. When correctness depends on the most recent unmatched item, a stack is the natural data structure. This pattern was identified and implemented independently.
