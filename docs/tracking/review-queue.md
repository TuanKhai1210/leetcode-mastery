# Review Queue

Week 1 was recorded as completed on **2026-08-02**. The exact review day may move to the next scheduled study session; do not stack all reviews into one session.

Week 2 was recorded as completed on **2026-08-03**. Problems `217` and `242` each used five minutes for the baseline and another five minutes for optimization; `1` used fifteen minutes.

Week 3 core work plus extension `167` was submitted on **2026-08-24**. Support was H2 for `121`, H0 for `344`, H1 for `125`, and H1 for `167`; attempt times are pending.

Week 4 core work plus extension `20` was submitted on **2026-08-29**. Recorded times were 20 minutes for `26` and 30 minutes each for `283`, `704`, and `20`. Problems `26`, `283`, and `704` require H0 reconstruction because the optimal algorithm used H3; `20` was H0 throughout.

Week 5 Sessions 1–2 were submitted on **2026-08-29**. Problem `35` took 10 minutes with H0 algorithm support and one H1 implementation correction. Problem `69` took 15 minutes with H3 algorithm support and H1 boundary debugging. Session 3, problem `206`, was recorded on **2026-08-31** with H3 algorithm support and H2 implementation debugging; its attempt time is pending.

| Problem | Initial time | Baseline | Optimization help | Current rating | Next-session review | D+7 | D+21 | D+60 | Status |
|---|---:|---|---|---|---|---|---|---|---|
| 1480. Running Sum of 1d Array | 5 min | H0 correct nested baseline | H1 for linear optimization | B | Overdue | 2026-08-09 | 2026-08-23 | 2026-10-01 | Overdue; no review reported |
| 1672. Richest Customer Wealth | 5 min | H0 optimal traversal | H1 for style only | A | — | 2026-08-09 | 2026-08-23 | 2026-10-01 | Overdue; no review reported |
| 1929. Concatenation of Array | 5 min | H0 optimal-complexity construction | H1 for STL/allocation style | A | — | 2026-08-09 | 2026-08-23 | 2026-10-01 | Overdue; no review reported |
| 217. Contains Duplicate | 5 + 5 min | H0 brute force/sorting baseline | H1 for hash-set optimization | B | Overdue | 2026-08-10 | 2026-08-24 | 2026-10-02 | D+21 due; no review reported |
| 1. Two Sum | 15 min | Brute force understood | H2 for `unordered_map` complement lookup | B | Overdue | 2026-08-10 | 2026-08-24 | 2026-10-02 | D+21 due; no review reported |
| 242. Valid Anagram | 5 + 5 min | H0 sorting baseline | H1 for frequency-array optimization | B | Overdue | 2026-08-10 | 2026-08-24 | 2026-10-02 | D+21 due; no review reported |
| 121. Best Time to Buy and Sell Stock | Pending | Brute force understood | H2 for one-pass pattern | B | 2026-08-25 | 2026-08-31 | 2026-09-14 | 2026-10-23 | Scheduled |
| 344. Reverse String | Pending | H0 optimal in-place solution | None | A | — | 2026-08-31 | 2026-09-14 | 2026-10-23 | Scheduled |
| 125. Valid Palindrome | Pending | H0 preprocessing baseline | H1 for in-place two pointers | B | 2026-08-25 | 2026-08-31 | 2026-09-14 | 2026-10-23 | Scheduled |
| 167. Two Sum II | Pending | H0 nested-search baseline | H1 for opposite pointers | B | 2026-08-25 | 2026-08-31 | 2026-09-14 | 2026-10-23 | Scheduled |
| 26. Remove Duplicates from Sorted Array | 20 min | H0 correct `erase` baseline | H3 for linear write pointer | C | Next study session | 2026-09-05 | 2026-09-19 | 2026-10-28 | H0 recode due; add D+3 after success |
| 283. Move Zeroes | 30 min | Temporary-vector baseline needed debugging | H3 for in-place two pointers | C | Next study session | 2026-09-05 | 2026-09-19 | 2026-10-28 | H0 recode due; add D+3 after success |
| 704. Binary Search | 30 min | Free-step attempt did not pass | H3 for interval framework | C | Next study session | 2026-09-05 | 2026-09-19 | 2026-10-28 | H0 recode due; add D+3 after success |
| 20. Valid Parentheses | 30 min | H0 stack insight and implementation | None | A | — | 2026-09-05 | 2026-09-19 | 2026-10-28 | Scheduled |
| 35. Search Insert Position | 10 min | H0 binary-search algorithm | H1 midpoint correction | A | — | 2026-09-05 | 2026-09-19 | 2026-10-28 | Scheduled |
| 69. Sqrt(x) | 15 min | Linear scan overflowed and timed out | H3 binary search / H1 final boundary | C | Next study session | 2026-09-05 | 2026-09-19 | 2026-10-28 | H0 recode due; add D+3 after success |
| 206. Reverse Linked List | Pending | Value-swapping idea did not fit a singly linked list | H3 pointer pseudocode / H2 loop debugging | C | Next study session | 2026-09-07 | 2026-09-21 | 2026-10-30 | H0 recode due; add D+3 after success |

## Promotion rule for these problems

- Recode from a blank editor without looking at the submitted solution.
- State time and space complexity.
- Give two relevant edge cases.
- If successful without algorithmic help, append `→ R` to the history.
- Mark mastered only after another successful spaced or mixed review.

## Consolidation rule before the next new set

No Week 1–2 review completion was reported by 2026-08-24. Do not mark any review as passed retroactively. Before beginning the next new set:

1. Reproduce `1480`, `1672`, and `1929` at H0 across separate sessions.
2. Reproduce `217`, `1`, and `242` at H0 across separate sessions.
3. Complete next-session H0 reviews for B-rated `121`, `125`, and `167`; review A-rated `344` at D+7.
4. Reconstruct the optimal solutions for C-rated `26`, `283`, and `704` without hints; repeat successful attempts at D+3.
5. Review A-rated `20` at D+7.
6. Reconstruct C-rated `69` without hints and review A-rated `35` at D+7.
7. Reconstruct C-rated `206` from a blank editor, stating the reversed-prefix invariant before coding.
8. Limit each session to at most two full blank-editor reviews; explanations can be shorter.
9. Record actual time and support for every review. A successful late review restarts spacing from its actual completion date; missed historical dates are not repeated on the same day.
