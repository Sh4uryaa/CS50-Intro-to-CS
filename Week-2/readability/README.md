# Readability (C)

This program calculates the approximate grade level needed to comprehend a given text using the Coleman-Liau index.

## How it works

- Counts the number of letters, words, and sentences in the text
- Applies the Coleman-Liau formula to compute a grade level
- Outputs the grade level, or "Before Grade 1" / "Grade 16+" for edge cases

## Compile & Run
```
gcc readability.c -o readability ./readability
```
