# Diagonal Difference

## Problem

Given a square matrix, find the absolute difference between the sum of the primary diagonal and the sum of the secondary diagonal.

## Approach

The matrix is traversed once. The primary diagonal is identified using `i == j`, while the secondary diagonal is identified using `i + j == n - 1`.

The absolute difference between the two diagonal sums is then calculated and printed.

## Complexity Analysis

- Time Complexity: O(N²)
- Space Complexity: O(N²)

The matrix is stored in memory and every element is visited once.

## Language

C

## HackerRank

The solution was submitted and accepted on HackerRank.

HackerRank Accepted Submission:

Add the screenshot of the accepted submission here.