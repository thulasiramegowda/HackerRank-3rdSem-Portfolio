# Time Conversion

## Problem

Convert a time given in 12-hour AM/PM format into 24-hour military time.

## Approach

The hour and AM/PM period are extracted from the input string.

For AM, 12 is converted to 00. For PM, 12 remains unchanged while other hours have 12 added to them.

The converted time is then printed in 24-hour format.

## Complexity Analysis

- Time Complexity: O(1)
- Space Complexity: O(1)

The input always contains a fixed-length time string, so the number of operations does not depend on the input size.

## Language

C

## HackerRank

The solution was submitted and accepted on HackerRank.

HackerRank Accepted Submission:

Add the screenshot of the accepted submission here.