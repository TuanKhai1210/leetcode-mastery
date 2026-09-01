# 206. Reverse Linked List

[View problem on LeetCode](https://leetcode.com/problems/reverse-linked-list/)

| Field | Value |
|---|---|
| Difficulty | Easy |
| Pattern | Iterative pointer reversal |
| Language | C++ |
| First solved | 2026-08-31 |
| Time | Pending |
| Algorithm support | H3 for four-step pointer-reversal pseudocode |
| Implementation support | H2 for the loop condition and return value |
| Initial rating | C |

## Summary

Reverse every `next` pointer in a singly linked list and return the new head.

## Rejected baseline

Swapping values from the two ends resembles an array solution, but a singly linked list has no backward pointer and no constant-time access to its tail-side positions. More importantly, reversing the list requires changing its links rather than merely rearranging stored values.

## Final approach

Maintain `previous` as the reversed prefix and `head` as the first node of the unprocessed suffix. Before changing a link, save `head->next` in `next_node`. Redirect `head->next` to `previous`, advance `previous` to the current node, and continue from the saved node. When the unprocessed suffix is empty, return `previous`.

## Why it works

Before every iteration, `previous` is the head of a correctly reversed prefix and `head` is the first node not yet processed. Saving the next node preserves access to the remaining suffix. Redirecting the current link and advancing both pointers extends the reversed prefix by exactly one node without losing any node. At termination, the suffix is empty, so `previous` heads the complete reversed list.

## Complexity

- Time: `O(n)`
- Auxiliary space: `O(1)`

## Edge cases

- An empty list returns `nullptr`
- A one-node list returns the same node with `next == nullptr`
- A two-node list
- A longer list in which the original head must become the tail

## Learning note

Pointer-reversal problems require preserving the next address before overwriting it. The safe iteration order is: save, redirect, advance the reversed prefix, then advance the unprocessed suffix. The loop must test `head != nullptr` before dereferencing `head`.
