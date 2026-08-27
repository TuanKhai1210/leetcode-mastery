# LeetCode, DSA, Competitive Programming, and Interview Roadmap

> A personalized 24-month curriculum for a beginner who knows basic syntax but is new to algorithmic problem solving. The schedule assumes **three sessions per week**, **60–120 minutes per session**, with goals in this order: **build fundamentals → compete → interview**.

## Learner profile

| Item | Plan |
|---|---|
| Starting level | Knows basic syntax; no prior algorithm practice before this program |
| Primary language | C++ |
| Secondary language | Python, introduced after the core foundation is stable |
| Weekly capacity | 3 sessions, 1–2 hours each |
| Main sequence | Foundations → competitive programming → technical interviews |
| Expected duration | 24 months, approximately 300–600 focused hours |

### Current baseline

Week 1 was completed with all three correct baselines found in about five minutes each. For `1480`, H1 supplied the asymptotic improvement from nested accumulation to a linear running sum, so the current rating is B. For `1672` and `1929`, H1 only improved style or allocation after an optimal-complexity H0 algorithm, so their current rating is A.

- [x] `1480. Running Sum of 1d Array`
- [x] `1672. Richest Customer Wealth`
- [x] `1929. Concatenation of Array`

These problems should still be reviewed on the spaced-repetition schedule. Fast first completion is encouraging, but mastery is confirmed by recall after time has passed.

---

## 1. Definition of success

“Completing all of LeetCode” is not treated as solving every problem on the site. The catalog keeps growing, and many problems repeat the same patterns. This program defines mastery as the ability to:

- use the major data structures and algorithm families from basic through advanced;
- identify likely patterns in an unfamiliar problem instead of memorizing solutions;
- solve most new Easy problems in 20–25 minutes;
- solve familiar-pattern Medium problems in 35–45 minutes;
- explain correctness, time complexity, space complexity, and edge cases;
- compete regularly, then systematically upsolve missed contest problems;
- communicate a solution clearly in an interview setting.

Expected milestones at the current study rate:

| Milestone | Expected outcome |
|---|---|
| 6 months | Initial DSA foundation; roughly 45–65 carefully learned new problems |
| 12 months | Most common patterns covered; roughly 95–130 new problems |
| 18 months | Comfortable with familiar Medium problems; roughly 140–180 new problems plus contest work |
| 24 months | Strong interview and contest foundation; roughly 170–230 new problems plus 250–400 reviews/upsolves |

Problem count is only a supporting metric. One problem reproduced from a blank editor after several weeks is more valuable than several editorials merely read once.

---

## 2. Language strategy

### C++ first

Use C++ for all new problems during at least the first 4–6 months. Build fluency with:

- functions, references, `const`, loops, and conditions;
- `vector`, `string`, and `pair`;
- `set`, `unordered_set`, `map`, and `unordered_map`;
- `stack`, `queue`, `deque`, and `priority_queue`;
- `sort`, `lower_bound`, `upper_bound`, and lambda comparators;
- pointers and nodes for linked lists and trees;
- blank-page implementations of binary search, BFS, DFS, DSU, and Dijkstra.

### Add Python gradually

- Do not solve every early problem in both languages.
- After approximately 80–100 well-understood problems, usually around Months 10–12, rewrite one familiar problem in Python every two weeks.
- From Month 19, rewrite one familiar problem in Python each week.
- During the final interview phase, compare error rate and explanation speed in C++ and Python, then select one interview language.
- Continue learning unfamiliar algorithms in the language with the strongest current reflexes.

---

## 3. Weekly operating system

Space the three sessions apart when possible, for example Tuesday, Thursday, and Sunday.

### Foundation phase

| Session | Work |
|---|---|
| 1 | Learn one concept and solve one minimally guided problem |
| 2 | Solve a new problem using the same pattern; add an optional second problem if time remains |
| 3 | Reproduce an older problem from scratch, then solve a mixed test or new problem |

### Contest phase

| Session | Work |
|---|---|
| 1 | Learn one technique or upsolve a missed contest problem |
| 2 | Solve two appropriately difficult problems from the same topic |
| 3 | Join a live/virtual contest; the following week must include upsolving |

### Interview phase

| Session | Work |
|---|---|
| 1 | One timed problem while explaining the reasoning aloud |
| 2 | Review one weak pattern and solve one topic-blind problem |
| 3 | Mock interview or a two-problem set in 60–70 minutes |

### Template for a 90-minute session

1. **10 minutes:** recall an old idea or write an old template from memory.
2. **15 minutes:** study exactly one new concept.
3. **35–45 minutes:** independently attempt the main problem.
4. **15 minutes:** debug, justify correctness, and analyze complexity.
5. **5–10 minutes:** update the learning log and schedule reviews.

For a 60-minute session, remove the optional problem but keep review and logging. For a 120-minute session, add one related problem or reimplement a solution that required an editorial.

### Four-week cycle

- Weeks 1–3: learn and practice new material.
- Week 4: reduce new work by about half; prioritize due reviews and one mixed test.
- Target allocation: 55–60% new work, 25–30% review, and 10–15% analysis/logging.
- If more than ten reviews are overdue, pause or reduce new problems for one week.

---

## 4. Problem-solving protocol

For every problem:

1. Restate the input, output, and constraints.
2. Create at least two examples and identify edge cases.
3. Describe the simplest brute-force solution and its complexity.
4. Identify repeated work and search for an applicable pattern.
5. State the optimized idea and, where useful, its invariant.
6. Code without relying on repeated Run/Submit attempts.
7. Dry-run small and boundary cases.
8. After acceptance, record correctness reasoning, complexity, mistakes, recognition cues, and the next review date.

Useful optimization questions:

- Can previously seen information be stored in a hash map or set?
- Does order enable two pointers or binary search?
- Is there a contiguous region suggesting a sliding window or prefix sum?
- Is last-in-first-out behavior suggesting a stack?
- Can the problem be represented as a tree, graph, or state-space search?
- Are overlapping subproblems suggesting dynamic programming?

### Hint levels

| Level | Meaning |
|---|---|
| H0 | No assistance |
| H1 | One guiding question or optional post-solution optimization note |
| H2 | The relevant data structure or algorithmic pattern is named |
| H3 | An invariant or short pseudocode outline is provided |
| H4 | Full explanation or reference implementation is viewed |

Initial independent-attempt limits:

- new Easy: 25–30 minutes;
- familiar-topic Medium: 35–45 minutes;
- unfamiliar Medium or Hard: 45–60 minutes before requesting a stronger hint.

If a full solution is viewed, close it and reimplement the answer from a blank editor. The problem is not mastered yet.

### Learning labels

| Label | Definition | Required follow-up |
|---|---|---|
| A | Idea and implementation were independent | Review at +7 and +21 days |
| B | One or more meaningful hints were required | Redo next session, then +7 and +21 days |
| C | Editorial or reference code was required | Recode next session; not yet complete |
| R | Successfully reproduced from scratch | Eligible for mastered status |

An H1 comment that only improves style or allocation after an independently optimal algorithm does not lower A to B. If H1 supplies a better asymptotic algorithm, the attempt is B even when the original baseline was correct.

A problem is **mastered** only when the learner can reproduce it from scratch, explain why it is correct, give correct complexities, identify at least two edge cases, and succeed in at least two spaced attempts—one inside a topic-blind mixed set.

Review schedule:

- A: `+7`, `+21`, `+60`, `+120` days.
- B: next session, then `+7`, `+21`, `+60` days.
- C: next session, then `+3`, `+7`, `+21`, `+60` days.
- Contest/interview failures: highest priority during the following week.

---

## 5. Roadmap overview

| Phase | Time | Focus | Exit standard |
|---|---:|---|---|
| 0. Problem-solving launch | Weeks 1–6 | Big-O, STL, arrays, hashing, two pointers, stack, binary search, linked list | At least 8/12 core problems at A/R |
| 1. Foundational DSA | Months 2–6 | Prefix/window, stack/queue, linked list, tree, heap, introductory greedy | Familiar Easy in 20–25 minutes; begin Medium |
| 2. Core DSA | Months 7–12 | Backtracking, graph, DSU, topological sort, greedy, DP | Familiar Medium in 40–50 minutes |
| 3. Advanced algorithms | Months 13–18 | Shortest path, trie, monotonic structures, bit/math, Fenwick/segment tree, advanced DP | Regular contests and systematic upsolving |
| 4. Competition and interviews | Months 19–24 | Topic-blind sets, contests, Python transfer, mock interviews | About two Medium problems in 70 minutes with clear communication |

---

# Phase 0 — Six-week launch

The standard load is two required new problems each week. The third problem may be treated as an extension if a session is only 60 minutes. Twelve core problems are sufficient for the phase; completing all eighteen is an accelerated target.

## Week 1 — Arrays, loops, and Big-O

- [x] `1480. Running Sum of 1d Array` — prefix accumulation and linear scanning.
- [x] `1672. Richest Customer Wealth` — 2D arrays and `O(rows × columns)` analysis.
- [x] `1929. Concatenation of Array` — output construction, `insert`, and optional `reserve`.

Review target: rewrite `1480` without notes.

## Week 2 — Sets and hash maps

- [x] `217. Contains Duplicate` — compare sorting with `unordered_set`.
- [x] `1. Two Sum` — explain both `O(n²)` brute force and `O(n)` hashing.
- [x] `242. Valid Anagram` — compare a 26-slot frequency array with a hash map.

Review target: reproduce `217` from scratch after the first solution.

Week 2 support record: `217` used H1 for the hash-set optimization, `1` used H2 because `unordered_map` was unfamiliar, and `242` used H1 for the fixed-frequency-array optimization. All three are currently B and require no-hint review.

## Week 3 — One-pass state and two pointers

- [x] `121. Best Time to Buy and Sell Stock` — maintain the minimum-so-far and best answer.
- [x] `344. Reverse String` — two pointers and in-place modification.
- [x] `125. Valid Palindrome` — skip invalid characters and normalize case.
- [x] Extension: `167. Two Sum II - Input Array Is Sorted` — opposite-direction two pointers on sorted input.

Review target: reproduce `1. Two Sum` without code or notes.

Week 3 support record: `121` used H2, `344` used H0, `125` used H1, and extension `167` used H1. Ratings are B, A, B, and B respectively; attempt times remain pending.

## Week 4 — In-place arrays and stack

- [ ] `283. Move Zeroes` — read/write pointers and processed-region invariant.
- [ ] `26. Remove Duplicates from Sorted Array` — exploit sorted order.
- [ ] `20. Valid Parentheses` — stack discipline and matching pairs.

Review target: redo the lower-rated problem between `121` and `125`.

## Week 5 — Binary search

- [ ] `704. Binary Search` — boundaries, loop condition, and invariant.
- [ ] `35. Search Insert Position` — first position satisfying a condition.
- [ ] `69. Sqrt(x)` — binary search over the answer space.

Review target: write a binary-search template from a blank editor.

## Week 6 — Linked lists

- [ ] `206. Reverse Linked List` — `prev`, `current`, and `next` pointer updates.
- [ ] `21. Merge Two Sorted Lists` — dummy node and list stitching.
- [ ] `141. Linked List Cycle` — slow/fast pointers.

### Phase 0 checkpoint

Core set: `1480`, `1672`, `217`, `1`, `242`, `121`, `125`, `283`, `20`, `704`, `206`, `21`.

Extension set: `1929`, `344`, `26`, `35`, `69`, `141`.

Advance when:

- at least 8/12 core problems are A or R;
- no remaining problem has an unexplained core idea;
- basic operations with `vector`, `unordered_map`, `unordered_set`, and `stack` can be written without frequent syntax lookup;
- the difference between `O(1)`, `O(log n)`, `O(n)`, `O(n log n)`, and `O(n²)` can be explained.

---

# Phase 1 — Foundational DSA, Months 2–6

## Month 2 — Prefix sum and sliding window

Concepts: one-dimensional prefix sums, fixed and variable windows, contiguous subarrays versus subsequences, and hash maps combined with prefix sums.

- [ ] `303. Range Sum Query - Immutable`
- [ ] `724. Find Pivot Index`
- [ ] `643. Maximum Average Subarray I`
- [ ] `209. Minimum Size Subarray Sum`
- [ ] `3. Longest Substring Without Repeating Characters`
- [ ] `438. Find All Anagrams in a String`
- [ ] `567. Permutation in String`
- [ ] `560. Subarray Sum Equals K`

It is acceptable to use guided practice for `3` and `560` on the first attempt.

## Month 3 — Stack, queue, and intervals

Concepts: stack, queue, deque, expression evaluation, introductory monotonic stacks, and sorted-interval scanning.

- [ ] `155. Min Stack`
- [ ] `232. Implement Queue using Stacks`
- [ ] `225. Implement Stack using Queues`
- [ ] `1047. Remove All Adjacent Duplicates In String`
- [ ] `150. Evaluate Reverse Polish Notation`
- [ ] `496. Next Greater Element I`
- [ ] `739. Daily Temperatures`
- [ ] `56. Merge Intervals`
- [ ] `57. Insert Interval`
- [ ] `435. Non-overlapping Intervals`

## Month 4 — Extended linked lists

Concepts: dummy nodes, slow/fast pointers, segment reversal/stitching, intersections, and auxiliary pointers.

- [ ] `876. Middle of the Linked List`
- [ ] `203. Remove Linked List Elements`
- [ ] `160. Intersection of Two Linked Lists`
- [ ] `234. Palindrome Linked List`
- [ ] `19. Remove Nth Node From End of List`
- [ ] `2. Add Two Numbers`
- [ ] `24. Swap Nodes in Pairs`
- [ ] `143. Reorder List`
- [ ] `138. Copy List with Random Pointer`

Contest: complete one beginner virtual contest this month. The goal is learning the environment and time pressure, not rating.

## Month 5 — Binary trees and BSTs

Concepts: recursive/iterative DFS, level-order BFS, height, diameter, balance, BST properties, and lowest common ancestor.

- [ ] `104. Maximum Depth of Binary Tree`
- [ ] `100. Same Tree`
- [ ] `226. Invert Binary Tree`
- [ ] `101. Symmetric Tree`
- [ ] `543. Diameter of Binary Tree`
- [ ] `110. Balanced Binary Tree`
- [ ] `102. Binary Tree Level Order Traversal`
- [ ] `112. Path Sum`
- [ ] `98. Validate Binary Search Tree`
- [ ] `230. Kth Smallest Element in a BST`
- [ ] `235. Lowest Common Ancestor of a BST`
- [ ] `236. Lowest Common Ancestor of a Binary Tree`

## Month 6 — Heap, sorting, and introductory greedy

Concepts: min/max heaps using `priority_queue`, Top K, local decisions, and common sort-and-scan patterns.

- [ ] `703. Kth Largest Element in a Stream`
- [ ] `1046. Last Stone Weight`
- [ ] `215. Kth Largest Element in an Array`
- [ ] `347. Top K Frequent Elements`
- [ ] `973. K Closest Points to Origin`
- [ ] `75. Sort Colors`
- [ ] `53. Maximum Subarray`
- [ ] `55. Jump Game`
- [ ] `45. Jump Game II`
- [ ] `763. Partition Labels`

### Month 6 checkpoint

Use one 120-minute session for:

1. one unseen Easy array/hash problem;
2. one Easy or light Medium tree/linked-list problem;
3. binary search and BFS written from scratch;
4. time/space explanations for all work.

Pass criteria:

- most familiar-topic Easy problems are solved within 25 minutes;
- a Medium problem can be started without immediately requesting a hint;
- basic STL syntax no longer requires constant lookup;
- at least 70% of reviewed problems are A/R.

---

# Phase 2 — Core DSA, Months 7–12

## Month 7 — Recursion and backtracking

- [ ] `78. Subsets`
- [ ] `46. Permutations`
- [ ] `77. Combinations`
- [ ] `39. Combination Sum`
- [ ] `40. Combination Sum II`
- [ ] `17. Letter Combinations of a Phone Number`
- [ ] `22. Generate Parentheses`
- [ ] `79. Word Search`
- [ ] `131. Palindrome Partitioning`
- [ ] `51. N-Queens`

Exit skill: write the `choose → recurse → undo` structure and state the search state and base case.

## Month 8 — Graphs, BFS, and DFS

- [ ] `200. Number of Islands`
- [ ] `695. Max Area of Island`
- [ ] `733. Flood Fill`
- [ ] `994. Rotting Oranges`
- [ ] `130. Surrounded Regions`
- [ ] `417. Pacific Atlantic Water Flow`
- [ ] `133. Clone Graph`
- [ ] `127. Word Ladder`

Exit skill: move confidently among adjacency-list, grid, and implicit state-graph representations.

## Month 9 — Topological sort, DSU, and MST

- [ ] `207. Course Schedule`
- [ ] `210. Course Schedule II`
- [ ] `547. Number of Provinces`
- [ ] `684. Redundant Connection`
- [ ] `721. Accounts Merge`
- [ ] `1319. Number of Operations to Make Network Connected`
- [ ] `990. Satisfiability of Equality Equations`
- [ ] `1584. Min Cost to Connect All Points`

Exit skill: implement DSU with path compression and union by size/rank from scratch.

## Month 10 — Advanced greedy and intervals

- [ ] `134. Gas Station`
- [ ] `135. Candy`
- [ ] `452. Minimum Number of Arrows to Burst Balloons`
- [ ] `881. Boats to Save People`
- [ ] `846. Hand of Straights`
- [ ] `1899. Merge Triplets to Form Target Triplet`
- [ ] `678. Valid Parenthesis String`
- [ ] `406. Queue Reconstruction by Height`

For every greedy solution, write the local choice and an exchange/invariant argument explaining why it preserves an optimal solution.

Begin Python transfer: rewrite one familiar problem every two weeks without changing the language used for new algorithms.

## Month 11 — One-dimensional dynamic programming

- [ ] `70. Climbing Stairs`
- [ ] `746. Min Cost Climbing Stairs`
- [ ] `198. House Robber`
- [ ] `213. House Robber II`
- [ ] `322. Coin Change`
- [ ] `139. Word Break`
- [ ] `300. Longest Increasing Subsequence`
- [ ] `152. Maximum Product Subarray`
- [ ] `416. Partition Equal Subset Sum`
- [ ] `377. Combination Sum IV`

For every DP problem, document: **state → transition → base case → evaluation order → final answer**.

## Month 12 — Two-dimensional and string DP

- [ ] `62. Unique Paths`
- [ ] `64. Minimum Path Sum`
- [ ] `1143. Longest Common Subsequence`
- [ ] `72. Edit Distance`
- [ ] `5. Longest Palindromic Substring`
- [ ] `647. Palindromic Substrings`
- [ ] `91. Decode Ways`
- [ ] `518. Coin Change II`
- [ ] `494. Target Sum`
- [ ] `115. Distinct Subsequences`

### Month 12 checkpoint

- Write BFS, DFS, topological sort, DSU, and backtracking from a blank editor.
- For a new DP problem, define a plausible state even if the transition is incomplete.
- Solve familiar-pattern Medium problems in approximately 40–50 minutes.
- Complete or virtually replay at least two contests per month.
- Perform at least one upsolve session after every contest.

---

# Phase 3 — Advanced algorithms and competition, Months 13–18

## Month 13 — Shortest paths

Learn unweighted BFS, Dijkstra, Bellman–Ford, and the conditions under which each is valid.

- [ ] `743. Network Delay Time`
- [ ] `787. Cheapest Flights Within K Stops`
- [ ] `1631. Path With Minimum Effort`
- [ ] `1514. Path with Maximum Probability`
- [ ] `778. Swim in Rising Water`
- [ ] Implement Dijkstra from scratch using `priority_queue`.

## Month 14 — Advanced trees and trie

- [ ] `208. Implement Trie (Prefix Tree)`
- [ ] `211. Design Add and Search Words Data Structure`
- [ ] `212. Word Search II`
- [ ] `105. Construct Binary Tree from Preorder and Inorder Traversal`
- [ ] `106. Construct Binary Tree from Inorder and Postorder Traversal`
- [ ] `124. Binary Tree Maximum Path Sum`
- [ ] `297. Serialize and Deserialize Binary Tree`
- [ ] `199. Binary Tree Right Side View`
- [ ] `1448. Count Good Nodes in Binary Tree`

## Month 15 — Monotonic stack and deque

- [ ] `739. Daily Temperatures` — revisit and generalize.
- [ ] `496. Next Greater Element I` — revisit.
- [ ] `84. Largest Rectangle in Histogram`
- [ ] `85. Maximal Rectangle`
- [ ] `239. Sliding Window Maximum`
- [ ] `42. Trapping Rain Water`
- [ ] `907. Sum of Subarray Minimums`
- [ ] `402. Remove K Digits`

## Month 16 — Bit manipulation and basic mathematics

- [ ] `136. Single Number`
- [ ] `191. Number of 1 Bits`
- [ ] `338. Counting Bits`
- [ ] `268. Missing Number`
- [ ] `190. Reverse Bits`
- [ ] `371. Sum of Two Integers`
- [ ] `50. Pow(x, n)`
- [ ] `201. Bitwise AND of Numbers Range`
- [ ] `202. Happy Number`
- [ ] `204. Count Primes`

Contest additions: GCD/LCM, sieve of Eratosthenes, modular arithmetic, binary exponentiation, and basic combinatorics.

## Month 17 — Fenwick tree, segment tree, and offline queries

- [ ] Implement a Fenwick tree with point update and prefix/range sum.
- [ ] Implement a segment tree with build, query, and update.
- [ ] `307. Range Sum Query - Mutable`
- [ ] `315. Count of Smaller Numbers After Self`
- [ ] `493. Reverse Pairs`
- [ ] `327. Count of Range Sum`
- [ ] Solve beginner Fenwick/segment-tree problems on Codeforces or AtCoder.

Do not force every Hard problem this month. Correct implementation and conceptual understanding take priority over volume.

## Month 18 — Advanced DP and graph problems

- [ ] `309. Best Time to Buy and Sell Stock with Cooldown`
- [ ] `714. Best Time to Buy and Sell Stock with Transaction Fee`
- [ ] `123. Best Time to Buy and Sell Stock III`
- [ ] `312. Burst Balloons`
- [ ] `332. Reconstruct Itinerary`
- [ ] Reproduce `72`, `115`, and `787` without notes.

### Month 18 checkpoint

- Correctly choose among BFS, Dijkstra, DSU, and topological sort.
- Implement DSU, Dijkstra, a basic Fenwick tree, and a basic segment tree from scratch or from a personally understood template.
- Maintain an upsolve log for every contest.
- Usually finish a familiar-pattern Medium in 35–45 minutes.
- Count a Hard problem as successful only when it is deeply understood and reproducible.

---

# Phase 4 — Competition and interviews, Months 19–24

Throughout this phase, rewrite one familiar problem in Python each week. Do not switch languages inside a timed set.

## Month 19 — Competitive implementation and speed

- Complete 2–4 live or virtual contests.
- Diagnose implementation mistakes, slow constraint reading, and avoidable debugging.
- Drill fast I/O, prefix/difference arrays, coordinate compression, and reliable boundary handling.
- Select 4–8 contest problems for +7/+21-day review.
- Target stable Codeforces Div.4 or AtCoder ABC A–B performance.

## Month 20 — Competitive greedy, graph, and math

- Complete 2–4 live or virtual contests.
- Choose one primary weakness: greedy, graph, or math.
- Practice sweep line, GCD/LCM, prime sieve, modular arithmetic, and basic combinatorics.
- Upsolve every missed problem that required only one more step or already learned knowledge.
- Begin targeting A–C consistency.

## Month 21 — Competitive data structures and consolidation

- Complete 2–4 live or virtual contests, no more than one per week.
- Review coordinate compression, binary lifting basics, Fenwick tree, and segment tree.
- When A–C becomes consistent, prioritize learning from D upsolves over adding more contests.
- Treat rating as a secondary signal; use upsolve quality and repeatability as primary signals.

## Month 22 — Interviews: arrays, strings, and solution design

- Solve 12–15 topic-blind problems emphasizing array, hash, two pointers, sliding window, binary search, and intervals.
- For every problem, speak through: clarify → brute force → optimize → code → test.
- Continue one Python rewrite per week and compare C++ versus Python error rates.
- Complete two mock interviews.

## Month 23 — Interviews: trees, graphs, heap, backtracking, and DP

- Solve 12–15 mixed problems without topic labels.
- Explain invariants, correctness, and trade-offs.
- Complete one mock interview every two weeks.
- Build a weakness queue from mock feedback and repair the highest-impact gap first.

## Month 24 — Final review and interview simulation

- Redo 20 B/C problems or problems previously missed in contests.
- Complete 6–8 mock interviews.
- Each mock contains one or two problems in 60–70 minutes.
- After each mock, select at most three high-impact errors to repair the following week.
- Finalize one interview language, C++ or Python, and stop switching near interview dates.

### Interview-readiness checkpoint

- Clarify requirements before coding.
- Present brute force and explain why optimization is required.
- Choose an appropriate data structure for most familiar-pattern problems.
- Complete approximately two Medium problems in 70 minutes.
- Produce readable code, meaningful names, self-created tests, and effective debugging.
- State correct time and space complexities.
- Use interviewer hints productively without losing the whole line of reasoning.

---

## 6. Contest cadence

| Period | Frequency | Primary objective |
|---|---:|---|
| Months 1–3 | Optional | Build C++ STL and core problem-solving habits |
| Months 4–6 | 1 virtual contest/month | Learn the interface and timed conditions |
| Months 7–12 | 2 contests/month | Solve A–B consistently and begin C |
| Months 13–18 | 2–4 contests/month | Improve upsolve quality and handle C/D |
| Months 19–21 | Up to 1 contest/week | Compete with a specific weakness target |
| Months 22–24 | 2 contests/month | Preserve speed while prioritizing interviews |

### Upsolve protocol

1. Record which problems were read, attempted, and where progress stopped.
2. Retry for 20–30 minutes after the contest without score pressure.
3. Read a hint/editorial only after describing the missing step.
4. Close the editorial and implement from scratch.
5. Reproduce the solution at +7 and +21 days.
6. Record the recognition cue for the missed technique.

---

## 7. Recurring checkpoints

### Every week

- Recode one old problem from scratch.
- Solve one new problem without being told its pattern.
- Record only the three most important errors or lessons.

### Every four weeks

- Randomly select four learned problems.
- Fully code two.
- Explain the idea, correctness, and complexity of the other two.
- Calculate the A/B/C/R distribution and adjust the next month.

### Every three months

- Run a 90–120-minute assessment with two or three mixed problems.
- Use no notes.
- Spend the following week repairing gaps before adding new material.

Do not advance solely because the calendar says so. If a topic group remains below 70% A/R, extending it by one or two weeks is normal.

---

## 8. Recovery rules

### If one session is missed

- Do not combine two heavy sessions into one day.
- Move the new problem to the next week.
- Preserve the review session because it protects long-term retention.

### If one week is missed

- Complete only 50% of the usual new-problem load during the return week.
- Use the remaining time for the most recent B/C problems.

### If a topic is too difficult

- Return to an Easy problem with the same pattern.
- Draw the state and manually trace a small input.
- Request the smallest useful hint.
- If progress remains stalled for two weeks, defer the topic for one cycle instead of blocking the entire roadmap.

Reduce new work by 30–50% for one week if C ratings rise for two consecutive weeks, more than half of recent problems cannot be reproduced, editorials are being read without reimplementation, or correctness cannot be explained.

---

## 9. Post-Month-24 advanced competitive programming branch

This branch is optional for standard software-engineering interviews. Begin it only when the Month 1–24 structures and algorithms feel reasonably natural.

| Month | Topic | Required outcome |
|---|---|---|
| 25 | String algorithms | Implement prefix function/KMP and Z-function; understand rolling-hash collisions |
| 26 | Structural graph algorithms | SCC, bridges, articulation points, Euler path/circuit |
| 27 | Advanced trees | LCA/binary lifting and tree DP; optional heavy-light decomposition |
| 28 | Advanced DP | Bitmask DP, interval DP, digit DP, and selective state optimization |
| 29 | Advanced data structures | Lazy segment tree, sparse table, offline queries; optional persistence |
| 30 | Mathematics and synthesis | Modular inverse, combinations modulo, matrix exponentiation; optional flow |

### Month 25 — String algorithms

- Prefix function and KMP.
- Z-function.
- One- and two-modulus rolling hashes and collision risk.
- Suffix array or suffix automaton only if target contests frequently require them.

### Month 26 — Structural graph algorithms

- Strongly connected components using Kosaraju or Tarjan.
- Bridges and articulation points.
- Eulerian paths and circuits.
- Max-flow/min-cut only after shortest paths and core graph skills are stable.

### Month 27 — Advanced trees

- Lowest common ancestor with binary lifting.
- Tree DP.
- Euler tour techniques.
- Heavy-light decomposition as an optional extension.

### Month 28 — Advanced dynamic programming

- Bitmask DP.
- Interval DP.
- Digit DP.
- Divide-and-conquer or Knuth optimization only after encountering suitable problems; do not memorize unsupported templates.

### Month 29 — Advanced data structures

- Lazy propagation segment tree.
- Sparse table for static queries.
- Ordered set/policy-based data structures when allowed.
- Mo's algorithm and offline processing.
- Persistent segment tree as an optional specialization.

### Month 30 — Mathematics and synthesis

- Modular inverse and combinations modulo a prime.
- Matrix exponentiation.
- Mixed contests requiring technique selection rather than isolated drills.
- Flow algorithms only if aligned with the target contest level.

For each advanced topic, use one introductory problem, two reinforcement problems, and at least one real contest problem. Keep only templates whose every line can be explained.

---

## 10. Governing principle

Real progress follows this order:

**understand → find brute force → recognize a pattern → implement → test → explain → reproduce later**.

Accepted is an intermediate event. A solution truly belongs to the learner only when it can be reconstructed weeks later without recalling the old code line by line.
