# LeetCode Mastery

A structured record of my journey from algorithm fundamentals to competitive programming and technical interviews.

The repository prioritizes deliberate practice over raw submission count. Every solution includes the approach, correctness reasoning, complexity analysis, edge cases, and the learning signal that made the pattern recognizable.

## Goals

- Build reliable data-structure and algorithm fundamentals in C++.
- Learn reusable problem-solving patterns instead of memorizing code.
- Develop competitive-programming speed through contests and upsolving.
- Communicate solutions clearly in technical interviews.
- Reproduce solutions after spaced intervals to verify retention.

## Repository structure

```text
leetcode-mastery/
├── README.md
├── solutions/
│   └── <problem-id>-<slug>/
│       ├── README.md
│       └── solution.cpp
└── docs/
    ├── roadmap.md
    ├── study-system.md
    ├── competitive-programming.md
    ├── interview-track.md
    ├── consolidation-01.md
    ├── tracking/
    └── templates/
```

## Learning workflow

1. Restate the problem and create independent test cases.
2. Describe a correct baseline before optimizing.
3. Identify repeated work, useful invariants, and applicable constraints.
4. Implement and dry-run the final approach.
5. Explain correctness and calculate time and auxiliary-space complexity.
6. Review from a blank editor on a spaced schedule.

## Assistance scale

| Level | Meaning |
|---|---|
| H0 | Independent solution; no algorithmic help |
| H1 | Small directional or optimization hint |
| H2 | Relevant pattern or data structure named |
| H3 | Structured algorithm outline provided |
| H4 | Full solution or reference implementation viewed |

Assistance history is recorded honestly. A later clean reproduction is tracked separately rather than erasing the original learning path.

## Documentation

- [24-month roadmap](docs/roadmap.md)
- [Study and review system](docs/study-system.md)
- [Progress tracker](docs/tracking/progress.md)
- [Review queue](docs/tracking/review-queue.md)
- [Error log](docs/tracking/error-log.md)
- [Competitive-programming track](docs/competitive-programming.md)
- [Interview track](docs/interview-track.md)

## Solutions

Solutions are committed one problem at a time using Conventional Commit messages. See the [solution index](solutions/README.md).

## Notes

- LeetCode problem statements are not reproduced in full; each README contains only a concise summary and links to the original problem.
- Complexity uses auxiliary space unless output space is explicitly discussed.
- The code targets the constraints of the linked problem and notes relevant C++ portability concerns.

