# Runoff (C)

A program that simulates a ranked-choice instant runoff election between any number of candidates. An improved version of [Plurality](../plurality/) that better reflects voter preferences.

## How it works

- Candidates are passed as command-line arguments
- Each voter ranks all candidates in order of preference
- If a candidate has more than 50% of votes, they win immediately
- Otherwise, the candidate with the fewest votes is eliminated and their voters' next preferences are counted
- This repeats until a winner is found or a tie is declared

## Compile & Run

```
make runoff
./runoff Alice Bob Charlie
```
