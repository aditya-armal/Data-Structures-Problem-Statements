# Maximum Modulus Pair

## Problem Description

Given an array A of size N, Groot wants you to pick 2 indices i and j such that

- 1 <= i, j <= N
- A[i] % A[j] is maximum among all possible pairs of (i, j).

Help Groot find the maximum value of A[i] % A[j] for some i, j.

### Constraints

- 1 <= N <= 100,000
- 0 <= A[i] <= 100,000

## Input Format

- The first and only argument is an integer array A.

## Output Format

- Return an integer denoting the maximum value of A[i] % A[j] for any valid i, j.

## Example

### Input 1:

```python
A = [1, 2, 44, 3]
```

### Output 1:

```python
3
```

### Explanation 1:

For i = 4, j = 3, A[i] % A[j] = 3 % 44 = 3.
No pair exists which has a higher value than 3.

### Input 2:

```python
A = [2, 6, 4]
```

### Output 2:

```python
4
```

### Explanation 2:

For i = 3, j = 2, A[i] % A[j] = 4 % 6 = 4.