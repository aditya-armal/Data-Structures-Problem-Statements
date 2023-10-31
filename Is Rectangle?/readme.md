# Rectangle Existence Checker

## Problem Description

Given four positive integers A, B, C, D, determine if there's a rectangle such that the lengths of its sides are A, B, C, and D (in any order).

If any such rectangle exists, return 1; otherwise, return 0.

### Constraints

- 1 <= A, B, C, D <= 100

## Input Format

- First argument is an integer A.
- Second argument is an integer B.
- Third argument is an integer C.
- Fourth argument is an integer D.

## Output Format

- If any such rectangle exists with sides A, B, C, D in any order, return 1; else return 0.

## Example

### Input 1:

```python
A = 1
B = 1
C = 2
D = 2
```

### Output 1:

```python
1
```

### Explanation 1:

The rectangle drawn above is one of the rectangles that can be formed by side lengths of 1, 1, 2, 2, so we return 1.

### Input 2:

```python
A = 1
B = 2
C = 3
D = 4
```

### Output 2:

```python
0
```

### Explanation 2:

No such rectangle exists with sides 1, 2, 3, 4, so we return 0.
```
