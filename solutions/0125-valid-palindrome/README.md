# 125. Valid Palindrome

[View problem on LeetCode](https://leetcode.com/problems/valid-palindrome/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Filtering two pointers |
| Language | C++ |
| First solved | 2026-08-24 |
| Time | Pending |
| Initial support | H1 for the in-place comparison |
| Initial rating | B |

## Summary

Determine whether the alphanumeric characters of a string form a palindrome when compared case-insensitively.

## Approach

Move pointers inward from both ends. Skip non-alphanumeric characters, normalize the next significant pair to lowercase, and reject the string if the characters differ.

## Why it works

Before each comparison, both pointers identify the next significant characters from opposite ends. Equal pairs preserve the palindrome condition for the remaining interior; the first unequal pair proves the string cannot be a palindrome.

## Complexity

- Time: `O(n)` because each pointer moves across the string at most once
- Algorithmic auxiliary space: `O(1)`

## C++ portability

Functions from `<cctype>` require either `EOF` or a value representable as `unsigned char`. The reviewed implementation casts before calling `std::isalnum` and `std::tolower`.

## Edge cases

- Only ignored characters
- Digits mixed with letters
- Mixed case and punctuation

