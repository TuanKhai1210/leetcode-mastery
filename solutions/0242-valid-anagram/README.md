# 242. Valid Anagram

[View problem on LeetCode](https://leetcode.com/problems/valid-anagram/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Fixed-domain frequency counting |
| Language | C++ |
| First solved | 2026-08-03 |
| Time | 5-minute baseline + 5-minute optimization |
| Initial support | H1 for the frequency-array optimization |
| Initial rating | B |

## Summary

Determine whether two strings contain every character with exactly the same frequency.

## Approach

Reject unequal lengths. Increment a 26-slot frequency table for the first string, decrement it for the second, then verify that every count is zero.

## Why it works

Each slot stores the difference between the two strings' counts for one lowercase English letter. All slots are zero exactly when every character frequency matches.

## Complexity

- Time: `O(|s| + |t|)`, conventionally `O(n)` after the equal-length check
- Auxiliary space: `O(1)` because the table always has 26 entries

## Constraint dependency

The fixed table relies on the lowercase-English-letter constraint. A larger or unknown character domain would require a frequency map.

## Learning note

Anagrams require equal character multisets, not merely the same set of distinct characters.

