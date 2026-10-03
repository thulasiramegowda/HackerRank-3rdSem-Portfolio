# Sparse Arrays

## Problem

Given a collection of strings and a set of query strings, determine how many times each query string appears in the collection.

## Approach

Each query string is compared with every string in the original collection using `strcmp()`.

A counter is increased whenever a match is found, and the final count is printed for each query.

## Complexity Analysis

- Time Complexity: O(N + Q)
- Space Complexity: O(N)

The strings are stored in memory and each query is checked against the stored collection.

## Language

C

## HackerRank

The solution was submitted and accepted on HackerRank.

HackerRank Accepted Submission:

Add the screenshot of the accepted submission here.