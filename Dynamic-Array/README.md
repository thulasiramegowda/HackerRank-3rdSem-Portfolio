# Dynamic Array

## Problem

The Dynamic Array problem involves maintaining multiple sequences and processing two types of queries using the value of `lastAnswer`.

## Approach

An array of dynamic sequences is maintained. For each query, the required sequence is selected using:

`(x ^ lastAnswer) % n`

For type 1 queries, the value is added to the selected sequence. For type 2 queries, an element is accessed using the given position and the selected value becomes `lastAnswer`.

## Complexity Analysis

- Time Complexity: O(N + Q)
- Space Complexity: O(N)

Dynamic memory is used to maintain the sequences while processing the queries.

## Language

C

## HackerRank

The solution was submitted and accepted on HackerRank.

HackerRank Accepted Submission:

Add the screenshot of the accepted submission here.