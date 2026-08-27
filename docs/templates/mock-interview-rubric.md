# Mock Interview Rubric

Use this rubric for a 45–60 minute algorithm interview. The interviewer should give hints incrementally and record the highest level used.

## Session Metadata

| Field | Value |
|---|---|
| Date | YYYY-MM-DD |
| Candidate | |
| Interviewer | |
| Problem | |
| Difficulty | Easy / Medium / Hard |
| Topic | |
| Language | C++ / Python |
| Time limit | |
| Final result | Complete / Partial / Incomplete |
| Highest hint level | H0 / H1 / H2 / H3 / H4 |

## Hint Scale

| Level | Interviewer assistance |
|---|---|
| H0 | No help. |
| H1 | Clarifies wording, points to an overlooked edge case, or gives a very small nudge. |
| H2 | Names the relevant pattern or data structure. |
| H3 | Outlines the algorithm or supplies targeted pseudocode. |
| H4 | Reveals the solution or provides near-complete code. |

## Scoring Rubric

Score each category using the anchors below, then add the weighted points.

| Category | Weight | Strong performance | Partial performance | Weak performance | Score |
|---|---:|---|---|---|---:|
| Clarification and examples | 10 | Confirms requirements, constraints, and creates useful examples before coding. | Misses one relevant question or example. | Starts coding with major ambiguity. | /10 |
| Brute force and tradeoffs | 10 | States a valid baseline and explains its bottleneck. | Mentions a baseline without clear analysis. | Cannot form a valid baseline. | /10 |
| Algorithm and data structures | 20 | Derives an appropriate approach and explains each step. | Direction is mostly correct but needs a small hint or has a gap. | Requires the pattern or full algorithm. | /20 |
| Correctness reasoning | 15 | States an invariant, proof idea, or convincing reason the algorithm covers all cases. | Reasoning is intuitive but incomplete. | Cannot justify correctness. | /15 |
| Complexity analysis | 10 | Gives accurate time and auxiliary-space bounds with reasons. | Correct bounds but weak explanation or one minor error. | Incorrect or absent analysis. | /10 |
| Implementation quality | 15 | Produces clear, idiomatic, compilable code with disciplined state and naming. | Minor bugs corrected with normal debugging. | Major bugs or incomplete code. | /15 |
| Testing and debugging | 10 | Traces normal and edge cases systematically and localizes defects. | Tests basic cases but misses an important boundary. | Relies on the interviewer or random edits. | /10 |
| Communication and collaboration | 10 | Thinks aloud clearly, responds to feedback, and signals decisions. | Understandable but has long silent or unclear stretches. | Reasoning is difficult to follow. | /10 |
| **Total before hint adjustment** | **100** | | | | **/100** |

## Hint Adjustment

Hints are evidence about independence, not punishment for learning. Apply the adjustment only to the final interview score.

| Highest level | Adjustment |
|---|---:|
| H0 | 0 |
| H1 | −3 |
| H2 | −8 |
| H3 | −15 |
| H4 | Maximum final score is 55 |

**Adjusted score:** ____ / 100

## Overall Outcome

| Adjusted score | Outcome | Interpretation |
|---:|---|---|
| 85–100 | Strong hire signal | Independent, correct, clear, and interview-ready for this level. |
| 70–84 | Hire signal | Solid performance with limited gaps. |
| 55–69 | Mixed signal | Partial competence; targeted practice is needed. |
| 0–54 | No-hire signal | Major gaps in approach, correctness, implementation, or communication. |

## Learning Mastery After the Interview

This rating tracks future study and is separate from the hiring signal.

- **A:** Re-solved independently, explained correctness, and tested edge cases.
- **B:** Correct with a small hint or one important explanation gap.
- **C:** Needed the pattern, structured algorithm, or substantial debugging help.
- **R:** A previously studied problem was reproduced successfully from a blank editor in interview conditions.

**Assigned mastery:** A / B / C / R

## Interview Timeline

| Minute | Event | Candidate behavior | Interviewer note / hint |
|---:|---|---|---|
| 0–5 | Clarify and create examples | | |
| 5–15 | Baseline and optimize | | |
| 15–40 | Implement | | |
| 40–50 | Test, debug, analyze | | |
| 50–60 | Follow-up or reflection | | |

## Feedback

### What went well

-

### Highest-impact improvement

-

### Technical gaps

-

### Communication gaps

-

### Recommended drills

1.
2.
3.

## Follow-Up Review Schedule

| Checkpoint | Due date | Expected task | Result | Hint level | Mastery |
|---|---|---|---|---|---|
| D+1 | | Reconstruct approach and code from blank editor | | | |
| D+7 | | Timed re-solve and verbal explanation | | | |
| D+21 | | Solve a variation or related problem | | | |
| D+60 | | Include in a mixed mock interview | | | |
| D+120 | | Long-term retention check | | | |
