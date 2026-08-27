# 1672. Richest Customer Wealth

[View problem on LeetCode](https://leetcode.com/problems/richest-customer-wealth/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Matrix traversal and aggregation |
| Language | C++ |
| First solved | 2026-08-02 |
| Time | 5 minutes |
| Initial support | H0 algorithm; H1 style improvement |
| Initial rating | A |

## Summary

Each matrix row stores one customer's account balances. Return the largest row sum.

## Approach

Traverse each row, calculate its total, and retain the maximum total encountered.

## Why it works

Every customer's wealth is exactly the sum of one row. Comparing each completed row total ensures the retained maximum is the richest customer's wealth after all rows are processed.

## Complexity

- Time: `O(K)`, where `K` is the total number of account entries; `O(m × n)` for a rectangular matrix
- Auxiliary space: `O(1)`

## Edge cases

- One customer with one account
- Multiple customers tied for the maximum

## Learning note

Range-based iteration with `const auto& row` avoids copying rows and does not hard-code the width from `accounts[0]`.

