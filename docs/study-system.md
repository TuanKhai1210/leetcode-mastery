# Study System

## 1. Weekly rhythm

Use three sessions separated by at least one rest day when possible.

| Session | Foundation phase | Contest phase | Interview phase |
|---|---|---|---|
| 1 | Learn one pattern and solve one guided problem | Learn or upsolve one technique | One timed problem with spoken reasoning |
| 2 | Solve an independent problem of the same pattern | Solve one or two focused problems | Repair one weak topic and solve one blind problem |
| 3 | Spaced review plus a mixed problem | Contest or virtual contest | Mock interview or a two-problem timed set |

### A 90-minute session

1. 10–15 minutes: recall one due problem without looking at old code.
2. 15–20 minutes: study one concept.
3. 35–45 minutes: solve the main problem.
4. 10–15 minutes: test, analyze correctness, and calculate complexity.
5. 5–10 minutes: update the journal and review queue.

If only 60 minutes are available, remove the optional problem—not review or reflection. If 120 minutes are available, add a variation or rewrite a problem that previously required help.

### Four-week cycle

- Weeks 1–3: learn and apply new material.
- Week 4: reduce new work by about half and run a mixed checkpoint.
- Target allocation: 55–60% new work, 25–30% review, 10–15% analysis and logging.
- If more than ten reviews are overdue, reduce new problems for one week.

## 2. Problem-solving workflow

### Understand

- Restate the input and output.
- Read the constraints.
- Create at least two examples and one edge case.
- Estimate which time complexities the constraints allow.

### Establish a baseline

- Describe the simplest correct approach first.
- Calculate its time and space complexity.
- Identify repeated work or unnecessary state.

### Optimize

Ask whether the problem suggests:

- a hash map or set;
- sorting and two pointers;
- a sliding window or prefix sum;
- binary search;
- a stack, queue, heap, tree, or graph;
- recursion/backtracking;
- dynamic programming.

### Implement and test

- Write the key invariant before difficult loops.
- Dry-run the code on a hand-written example.
- Check minimum input, duplicates, negative values, overflow, missing answers, and index boundaries when applicable.

### Close the loop

After Accepted, record:

- the pattern;
- the key insight in two to four sentences;
- why the algorithm is correct;
- time and space complexity;
- mistakes and recognition signals;
- the next review date.

## 3. Hint protocol

Wait at least 8–10 minutes between hint levels unless the issue is only unclear wording.

| Level | Assistance |
|---|---|
| H0 | Restate the problem, constraints, or examples; no algorithmic direction |
| H1 | Ask one directional question about useful state or repeated work |
| H2 | Name the relevant pattern or data structure without giving the full algorithm |
| H3 | Provide short pseudocode or the central invariant |
| H4 | Provide a full explanation or reference implementation |

Attempt limits before requesting stronger help:

- Easy: 20–30 minutes.
- Familiar Medium: 35–45 minutes.
- Unfamiliar Medium or selected Hard: 45–60 minutes.

If H3 or H4 is used, close the explanation and rewrite the solution from a blank editor. Accepted code copied or reconstructed directly from an editorial remains a C for that attempt.

## 4. Mastery ratings

| Rating | Meaning |
|---|---|
| A | Found the algorithm and implemented it without algorithmic hints |
| B | Had a valid partial/baseline solution but needed H1 or H2 to complete or optimize it |
| C | Needed H3/H4, a full editorial, or could not explain the final solution |
| R | Successful no-hint review from a blank editor |

Keep the full history, for example `B → A → R`, rather than overwriting earlier attempts.

A problem is mastered only after:

1. an A-level no-hint solution in a later session;
2. another successful spaced or mixed review;
3. a correct explanation of the invariant, complexity, and edge cases;
4. successful transfer to a related variation or a clear explanation of changed constraints.

### Week 1 interpretation

The three Week 1 problems had an independent correct baseline in about five minutes. For `1480`, H1 supplied the improvement from the nested baseline to the linear running-sum method, so its current rating is B. For `1672` and `1929`, the independently chosen algorithms were already asymptotically optimal and H1 only improved C++ style or allocation, so their current rating is A. A later no-hint review is recorded as R and is still required for mastery.

## 5. Spaced review

| Current result | Review schedule |
|---|---|
| A | D+7, D+21, D+60, D+120 |
| B | Next session, D+7, D+21, D+60 |
| C | Re-explain immediately; recode next session; then D+3, D+7, D+21, D+60 |

Rules:

- Review from a blank editor without tags, notes, or previous code.
- Review no more than two old problems in one session.
- After D+21, prefer a related variation if the exact code has become memorized.
- A contest or interview failure has the highest review priority.

## 6. Language policy

- Use C++ for new problems during the first 4–6 months.
- Do not solve every new problem in both languages.
- After approximately 80–100 understood problems, rewrite one familiar pattern in Python every two weeks.
- During the final interview phase, increase to one familiar Python rewrite per week.
- Choose one interview language after timed mocks reveal which produces fewer errors.

## 7. Recovery rules

- Missed one session: move the new problem forward; do not delete the review session.
- Missed one week: use only half the normal new-problem load during the return week.
- More than half of recent problems are C: pause progression and return to easier variations.
- Repeated implementation mistakes: add one tiny drill instead of another full new problem.
- A difficult topic may be deferred after two focused weeks, but it must be placed back in the review queue.
