# Consolidation Block 01 — Retrieval Before New Material

## Why this block exists

Week 3 new work was submitted on 2026-08-24, but no completion was reported for the scheduled Week 1–2 reviews. The goal is not to repeat every missed calendar event. Complete one honest H0 retrieval per old problem, then restart spacing from the actual successful review date.

Pause Week 4 new material for Sessions 1–3. After that, continue only at half the normal new-problem load until this block is complete.

## Rules

- Start every problem from a blank editor.
- Do not view tags, notes, old code, or the archived solution.
- Use at most two full reviews per session.
- Record time to first correct solution and the highest hint level.
- Explain the invariant, time complexity, auxiliary space, and two edge cases.
- A clean H0 reproduction is recorded as R.
- If a review needs help, keep B/C, record the exact gap, and reschedule it instead of memorizing code.

## Session 1 — Unsorted versus sorted Two Sum

- [ ] `1. Two Sum` — overdue H0 review.
- [ ] `167. Two Sum II` — next-session H0 review.

After both attempts, explain why the unsorted problem needs value-to-index memory while sorted order permits constant-space two pointers.

## Session 2 — Membership and one-pass state

- [ ] `217. Contains Duplicate` — overdue H0 review.
- [ ] `121. Best Time to Buy and Sell Stock` — next-session H0 review.

After both attempts, state what information from the processed prefix each algorithm retains.

## Session 3 — Frequency counting and filtered comparison

- [ ] `242. Valid Anagram` — overdue H0 review.
- [ ] `125. Valid Palindrome` — next-session H0 review.

For `125`, use safe `<cctype>` calls with `static_cast<unsigned char>` and explain why the nested pointer-moving loops are still total `O(n)`.

## Session 4 — Prefix accumulation and in-place reversal

- [ ] `1480. Running Sum of 1d Array` — overdue H0 review.
- [ ] `344. Reverse String` — H0 D+7 review, ideally on or after 2026-08-31.

Contrast constructing an output vector with modifying an input vector in place.

## Session 5 — Linear aggregation and output construction

- [ ] `1672. Richest Customer Wealth` — overdue H0 review.
- [ ] `1929. Concatenation of Array` — overdue H0 review.

Explain output space versus auxiliary space and identify which C++ operations may allocate.

## Review report format

```text
[ID] Problem title
Review date:
Review time:
Support: H0 / H1 / H2 / H3 / H4
Result: Accepted / Incorrect / Incomplete
Invariant:
Time complexity:
Auxiliary space:
Edge cases:
What I forgot or improved:
Review grade: R / B / C
```

## Exit condition

The block is complete when all ten boxes are checked or every failed retrieval has a concrete rescheduled date. Week 4 may start after Sessions 1–3 only if review accuracy is at least 75%; otherwise finish Sessions 4–5 first.
