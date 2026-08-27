# Error Log

Use this file to capture mistakes that can teach a reusable lesson. Do not log a harmless style preference as an error. A post-solve H1 optimization belongs in the improvement table unless it caused incorrectness or poor complexity.

## Current Status

No correctness errors were reported in Weeks 1–3. The following are improvement opportunities, not failed solutions.

| Problem | Observation | Better habit | Severity | Verify on |
|---:|---|---|---|---|
| 1480 | The result-empty check adds a special case. | Use one running accumulator or update the array in place when allowed. | Style | D+7 review |
| 1672 | `accounts[0].size()` assumes every row has the same width. | Iterate over the current row with `const auto& row`. | Robustness | D+7 review |
| 1929 | Repeated `insert` may reallocate the result vector. | Use `result.reserve(2 * nums.size())` before insertion. | Performance detail | D+7 review |
| 217 | Hash-table operations were described only by their average bound. | State average `O(1)` lookup and acknowledge pathological worst-case degradation when relevant. | Complexity precision | D+7 review |
| 1 | A set was initially confused with the map required to retain indices. | Before choosing a container, write down exactly what must be stored as the key and as the value. | Pattern/STL | Next-session review |
| 242 | “Same set of letters” can hide duplicate-count differences. | Describe an anagram as equal character frequencies, or the same character multiset. | Communication | D+7 review |
| 167 | The phrase “static memory” was used for `O(1)` workspace. | Say “constant auxiliary space”; the returned two-index vector is output space. | Communication | D+7 review |
| 125 | Plain `char` was passed directly to `isalnum` and `tolower`. | Cast through `unsigned char` before calling `<cctype>` functions. | C++ robustness | D+7 review |
| 125/344 | `size() - 1` subtracts before conversion because `size()` is unsigned. | Use `static_cast<int>(s.size()) - 1`, or design with a one-past-end unsigned index. | C++ robustness | D+7 review |
| 121 | The loop invariant was implied but not stated explicitly. | Write what `min_price` and `max_profit` mean after each processed day. | Explanation | D+7 review |

## Error Taxonomy

Tag each logged error with one primary category.

| Tag | Category | Examples |
|---|---|---|
| `READ` | Misread requirement | Returned an index instead of a value; missed “distinct” or “sorted.” |
| `EDGE` | Missing edge case | Empty input, one element, duplicates, negatives, overflow. |
| `PATTERN` | Wrong or missed pattern | Used nested loops instead of hashing; missed sliding window. |
| `LOGIC` | Algorithmic logic | Incorrect invariant, wrong transition, invalid greedy choice. |
| `INDEX` | Bounds or off-by-one | Wrong loop limit, skipped first/last element. |
| `STATE` | State management | Stale variable, incorrect reset, mutation at the wrong time. |
| `CPP` | C++ language/STL | Iterator invalidation, accidental copies, signed/unsigned issue. |
| `COMPLEXITY` | Time or space | Correct output but exceeds constraints. |
| `TEST` | Weak validation | Did not test the case that exposes the bug. |
| `COMM` | Explanation | Code works but reasoning, proof, or complexity is unclear. |

## Error Entries

Add one row per meaningful error. Give each root cause a stable ID such as `E001` so repeated errors can be linked.

| Date | ID | Problem | Tag | Symptom | Root cause | Fix made | Prevention rule | Repeat count | Review date | Resolved? |
|---|---|---:|---|---|---|---|---|---:|---|---|
| 2026-08-24 | E001 | 167 | COMPLEXITY | Nested scanning reached TLE | The sorted-order constraint was not yet used to eliminate impossible pairs | Replaced repeated search with converging two pointers | Before nested search, ask what ordering lets one pointer discard | 1 | Consolidation Session 1 | No |
| 2026-08-24 | E002 | 167 | CPP | Helper calls copied the vector and increased memory/time | The vector parameter omitted `&` | Pass read-only vectors as `const std::vector<int>&` | Check every container parameter for ownership and mutation intent | 1 | Consolidation Session 1 | No |

## Detailed Error Entry Template

### E___ — Short name

- **Date:**
- **Problem:**
- **Attempt number:**
- **Mastery before attempt:** A / B / C / R
- **Hint level used:** H0 / H1 / H2 / H3 / H4
- **Error category:** READ / EDGE / PATTERN / LOGIC / INDEX / STATE / CPP / COMPLEXITY / TEST / COMM
- **Observed symptom:**
- **Smallest failing test:**
- **Expected result:**
- **Actual result:**
- **Root cause:**
- **Code or reasoning change:**
- **General prevention rule:**
- **Review exercise:**
- **Scheduled verification:** Next session (B/C) / D+3 (C if needed) / D+7 / D+21 / D+60 / D+120
- **Resolved:** Yes / No

## Recurring-Error Register

Move an error pattern here after it occurs twice. A third occurrence returns the affected problem to **C** until the concept is relearned and reproduced successfully.

| Pattern | Related error IDs | Occurrences | Trigger | Prevention checklist | Status |
|---|---|---:|---|---|---|
| — | — | — | — | — | — |

## Pre-Submission Checklist

- [ ] I restated exactly what must be returned.
- [ ] I checked the smallest valid input.
- [ ] I checked duplicates, negatives, and boundaries when relevant.
- [ ] Every index access is valid.
- [ ] Each variable has a clear invariant or purpose.
- [ ] The algorithm fits the constraints.
- [ ] I stated time and auxiliary-space complexity.
- [ ] I manually traced at least one non-trivial example.

## Resolution Rule

An error is resolved only after a later H0 attempt demonstrates the corrected habit. Reading the fix or editing the original code is not enough.
