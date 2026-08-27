# 121. Best Time to Buy and Sell Stock

[View problem on LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | One-pass state tracking |
| Language | C++ |
| First solved | 2026-08-24 |
| Time | Pending |
| Initial support | H2 for the one-pass pattern |
| Initial rating | B |

## Summary

Choose one buy day and a later sell day to maximize non-negative profit.

## Approach

Scan chronologically while tracking the minimum price seen before or at the current day and the best valid profit observed.

## Invariant

After processing day `i`, `minimumPrice` is the lowest price in the processed prefix, and `maximumProfit` is the best profit obtainable using only days in that prefix.

## Why it works

For each possible sell day, the best compatible purchase is the cheapest earlier price. Evaluating that profit for every day and retaining the maximum considers the best valid transaction without checking every pair.

## Complexity

- Time: `O(n)`
- Auxiliary space: `O(1)`

## Edge cases

- Strictly decreasing prices return `0`
- A single price returns `0`
- The global minimum occurs too late to form the best transaction

