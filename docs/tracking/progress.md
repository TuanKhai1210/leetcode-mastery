# LeetCode Mastery Progress

This file is the source of truth for completed problems, review status, and learning metrics.

## Current Snapshot

| Metric | Current value |
|---|---:|
| Program stage | Foundation |
| Primary language | C++ |
| Secondary language | Python (introduced later) |
| Planned study frequency | 3 sessions per week |
| Completed planned sessions | 12 |
| Completed problems | 14 |
| Recorded first-baseline time | 150 minutes across Weeks 1–2 and 4; Week 3 pending |
| Recorded total work time | 160 minutes across Weeks 1–2 and 4; Week 3 pending |
| Current first-solve ratings | 4 A / 7 B / 3 C |
| Current stage | Week 4 core completed; consolidation reviews due |

## Mastery Scale

Use one rating per problem. Update the rating after every scheduled review.

| Rating | Meaning | Promotion rule |
|---|---|---|
| **A — Independent** | Found an asymptotically appropriate algorithm and implemented it without algorithmic help. | Schedule spaced reviews; A alone is not yet long-term mastery. |
| **B — Developing** | Reached a correct solution with a small conceptual hint, or solved independently but cannot yet explain one important detail. | Promote after an H0 review with a correct explanation and implementation. |
| **C — Learning** | Needed the main pattern, structured guidance, debugging assistance, or an editorial to finish. | Promote only after reconstructing the solution at a later review without copying. |
| **R — Reproduced** | Successfully solved a scheduled review from a blank editor without algorithmic help. | Two spaced successes, including one mixed review, qualify the problem as mastered. |

An H1 style suggestion given after an already asymptotically appropriate solution does not lower A. If H1 supplies the better asymptotic algorithm, the attempt is B even when the baseline was correct.

## Hint Scale

| Level | Assistance received |
|---|---|
| **H0** | No help before producing a correct accepted solution. |
| **H1** | A small nudge, edge-case reminder, or optimization suggestion; no core pattern or algorithm revealed. |
| **H2** | The relevant pattern, data structure, or direction is named. |
| **H3** | The algorithm is outlined in ordered steps or targeted pseudocode. |
| **H4** | Full solution, editorial, or near-complete code is viewed. |

Record solution help and post-solve optimization help separately. Example: `H0 / H1` means the solution was independent and only the optimization used a hint.

## Completed Problems

| Week | Session | ID | Problem | Topic | Language | Time | Solution / optimization help | Result | Mastery | Review cycle |
|---:|---:|---:|---|---|---|---:|---|---|---|---|
| 1 | 1 | 1480 | Running Sum of 1d Array | Array, prefix accumulation | C++ | 5 min | H0 baseline / H1 asymptotic optimization | Accepted | B | Not started |
| 1 | 2 | 1672 | Richest Customer Wealth | 2D array, aggregation | C++ | 5 min | H0 algorithm / H1 style | Accepted | A | Not started |
| 1 | 3 | 1929 | Concatenation of Array | Array construction, STL | C++ | 5 min | H0 algorithm / H1 allocation style | Accepted | A | Not started |
| 2 | 1 | 217 | Contains Duplicate | Hash set | C++ | 5 min baseline + 5 min optimization | H0 baseline / H1 hash-set optimization | Accepted | B | Not started |
| 2 | 2 | 1 | Two Sum | Hash map, complement lookup | C++ | 15 min | H2: `unordered_map` pattern was unfamiliar | Accepted | B | Not started |
| 2 | 3 | 242 | Valid Anagram | Frequency counting | C++ | 5 min baseline + 5 min optimization | H0 sorting / H1 frequency-array optimization | Accepted | B | Not started |
| 3 | 1 | 121 | Best Time to Buy and Sell Stock | One-pass state | C++ | Pending | H2 | Correct; judge status not reported | B | Scheduled |
| 3 | 2 | 344 | Reverse String | In-place two pointers | C++ | Pending | H0 | Correct; judge status not reported | A | Scheduled |
| 3 | 3 | 125 | Valid Palindrome | Filtering two pointers | C++ | Pending | H1 | Correct; judge status not reported | B | Scheduled |
| 3 | Extension | 167 | Two Sum II - Input Array Is Sorted | Opposite-direction two pointers | C++ | Pending | H1 | Correct; judge status not reported | B | Scheduled |
| 4 | 1 | 26 | Remove Duplicates from Sorted Array | Same-direction two pointers | C++ | 20 min | H0 `erase` baseline / H3 linear optimization | Correct; judge status not reported | C | Scheduled |
| 4 | 2 | 283 | Move Zeroes | Stable same-direction two pointers | C++ | 30 min | H3 in-place algorithm / H0 implementation refinements | Correct; judge status not reported | C | Scheduled |
| 4 | 3 | 704 | Binary Search | Closed-interval binary search | C++ | 30 min | H3 algorithm framework / H0 implementation | Correct; judge status not reported | C | Scheduled |
| 4 | Extension | 20 | Valid Parentheses | Stack matching | C++ | 30 min | H0 / H0 | Correct; judge status not reported | A | Scheduled |

### Week 1 Notes

- All three baseline solutions were produced independently in about five minutes each.
- H1 supplied the asymptotic running-sum optimization for `1480`; for the other two problems it only improved style or allocation after an optimal-complexity baseline.
- `1480`: consider a running accumulator to remove the empty-result branch.
- `1672`: prefer each row's own size or a range-based loop with `const auto& row`.
- `1929`: call `reserve(2 * nums.size())` before inserting to avoid reallocations.

### Week 2 Notes

- `217`: the final hash-set solution is average `O(n)` time and `O(n)` space; worst-case hashing can degrade to `O(n²)`.
- `1`: lookup before insertion prevents using the same index twice and correctly handles duplicate values such as `[3, 3]`.
- `242`: the 26-slot frequency array is valid because the constraints use lowercase English letters; the precise cost is `O(|s| + |t| + 26)`.
- All three Week 2 problems are B and need a no-hint reproduction before they can be recorded as R.

### Week 3 Notes

- `121`: the invariant is that `min_price` is the smallest price seen so far and `max_profit` is the best valid profit seen so far. Updating the minimum before the profit is still correct because a new minimum only creates a same-day profit of zero.
- `344`: the H0 in-place two-pointer solution is optimal. `std::swap` is an optional style simplification.
- `125`: the algorithm is optimal. In robust C++, pass `unsigned char` values to `<cctype>` functions; the LeetCode ASCII constraint keeps the submitted code valid.
- `167`: sorted order justifies discarding the left endpoint when the sum is too small and the right endpoint when it is too large.
- Attempt times are pending. Week 2 and earlier spaced reviews were not reported, so they remain due rather than being inferred as completed.

### Week 4 Notes

- `26`: the independent `erase` solution was correct but could take `O(n^2)` time because every middle erasure shifts the remaining suffix. H3 supplied the linear write-pointer optimization.
- `283`: the temporary-vector baseline violated the constant-space requirement and initially had a non-decreasing zero counter. H3 supplied the in-place two-pointer pattern; the final swap implementation was written independently.
- `704`: the free-step attempt did not preserve a valid search interval. H3 supplied the closed-interval `left`, `right`, and `mid` framework; the final code correctly guarantees progress.
- `20`: both pattern selection and implementation were H0. The key insight was that counters lose nesting history while a stack preserves the most recent unmatched opening bracket.
- Week 4 added 110 recorded minutes. No overdue review is marked complete without a reported blank-editor reproduction.

## Spaced-Review Queue

Review timing depends on the rating: **A → D+7, D+21, D+60, D+120**; **B → next study session, then D+7, D+21, D+60**; **C → next session plus D+3, D+7, D+21, D+60**. Week 1 is recorded as completed on 2026-08-02 based on the study report.

| ID | Next session (B/C) | D+7 | D+21 | D+60 | D+120 | Latest rating | Next action |
|---:|---|---|---|---|---|---|---|
| 1480 | 2026-08-03 | 2026-08-09 | 2026-08-23 | 2026-10-01 | 2026-11-30 | B | Recode without hints in Week 2, Session 1 |
| 1672 | — | 2026-08-09 | 2026-08-23 | 2026-10-01 | 2026-11-30 | A | Complete one late H0 review and restart spacing |
| 1929 | — | 2026-08-09 | 2026-08-23 | 2026-10-01 | 2026-11-30 | A | Complete one late H0 review and restart spacing |
| 217 | 2026-08-04 | 2026-08-10 | 2026-08-24 | 2026-10-02 | 2026-12-01 | B | Recode optimal solution without hints in Week 3, Session 1 |
| 1 | 2026-08-04 | 2026-08-10 | 2026-08-24 | 2026-10-02 | 2026-12-01 | B | Recode without hints in Week 3, Session 2 |
| 242 | 2026-08-04 | 2026-08-10 | 2026-08-24 | 2026-10-02 | 2026-12-01 | B | Recode frequency solution without hints in Week 3, Session 3 |
| 121 | Next study session | 2026-08-31 | 2026-09-14 | 2026-10-23 | — | B | No-hint recode; restart spacing from actual success date |
| 344 | — | 2026-08-31 | 2026-09-14 | 2026-10-23 | 2026-12-22 | A | H0 review on or after D+7 |
| 125 | Next study session | 2026-08-31 | 2026-09-14 | 2026-10-23 | — | B | Robust no-hint recode; restart spacing from actual success date |
| 167 | Next study session | 2026-08-31 | 2026-09-14 | 2026-10-23 | — | B | No-hint recode; restart spacing from actual success date |
| 26 | Next study session | 2026-09-05 | 2026-09-19 | 2026-10-28 | — | C | H0 write-pointer recode, then repeat at D+3 |
| 283 | Next study session | 2026-09-05 | 2026-09-19 | 2026-10-28 | — | C | H0 stable two-pointer recode, then repeat at D+3 |
| 704 | Next study session | 2026-09-05 | 2026-09-19 | 2026-10-28 | — | C | H0 closed-interval recode, then repeat at D+3 |
| 20 | — | 2026-09-05 | 2026-09-19 | 2026-10-28 | 2026-12-27 | A | H0 stack review on or after D+7 |

Review result notation:

- `✓ H0`: solved correctly without help; record the scheduled review as R.
- `△ H1–H2`: solved with a hint; keep the same review interval or repeat within seven days.
- `✗`: failed to reconstruct; rate the attempt B or C according to the help required and retry in the next study session.

## Weekly Session Rhythm

| Session | Default focus | Expected output |
|---:|---|---|
| 1 | Learn one concept and solve one new problem | Journal entry, complexity analysis, tests |
| 2 | Retrieve one due problem and solve one new problem | Review result plus new journal entry |
| 3 | Mixed practice, review, or timed set | Weekly review and next-week adjustments |

## Weekly Metrics Log

| Week | Sessions completed | New problems | Reviews due / completed | H0 first solves | A / B / C / R | Average time | Main topic | Notes |
|---:|---:|---:|---|---:|---|---:|---|---|
| 1 | 3 / 3 | 3 | 0 / 0 | 3 | 2 / 1 / 0 / 0 | 5 min | Arrays | Baseline week completed |
| 2 | 3 / 3 | 3 | 3 / pending | 3 baseline ideas | 0 / 3 / 0 / 0 | 11.7 min total/problem | Hash set and hash map | 35 min total; review outcomes pending |
| 3 | 3 / 3 | 4 (1 extension) | 6 / 0 reported | 1 | 1 / 3 / 0 / 0 | Pending | One-pass state and two pointers | Core complete; consolidation required |
| 4 | 3 / 3 | 4 (1 extension) | Overdue / 0 reported | 2 baseline ideas | 1 / 0 / 3 / 0 | 27.5 min | Two pointers, binary search, stack | 110 min total; prior reviews remain due |

## Milestone Dashboard

| Milestone | Target | Status |
|---|---|---|
| First 10 independent Easy problems | 10 A-rated first solves | 4 / 10 |
| Foundation checkpoint | Solve 8 of 10 studied Easy problems in 20–25 minutes each | Not started |
| First timed mixed set | 3 studied Easy problems in 60 minutes | Not started |
| First contest | Complete a beginner contest and upsolve missed problems | Not started |
| Interview baseline | Explain and implement two Medium problems in 70 minutes | Not started |

## Rules for Updating This File

1. Add a row immediately after each accepted first solve.
2. Record elapsed time honestly; exclude unrelated interruptions.
3. Separate pre-solution help from post-solution optimization help.
4. Add all five review checkpoints when the completion date is known.
5. Update the mastery rating after each review, not merely after reading an explanation.
6. At the end of every third session, add one row to the weekly metrics log.
