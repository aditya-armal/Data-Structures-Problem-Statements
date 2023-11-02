
# XOR Subarrays

## Problem Description

Given an integer array A of size N, you need to find the value obtained by XOR-ing the contiguous subarrays, followed by XOR-ing the values thus obtained. Determine and return this value.

For example, if A = [3, 4, 5]:

| Subarray | Operation      | Result |
|----------|----------------|--------|
| 3        | None           | 3      |
| 4        | None           | 4      |
| 5        | None           | 5      |
| 3,4      | 3 XOR 4        | 7      |
| 4,5      | 4 XOR 5        | 1      |
| 3,4,5    | 3 XOR 4 XOR 5  | 2      |

Now we take the resultant values and XOR them together:

3 ⊕ 4 ⊕ 5 ⊕ 7 ⊕ 1 ⊕ 2 = 6, so we will return 6.

### Constraints

- 1 <= N <= 105
- 1 <= A[i] <= 108

## Input Format

- The first and only argument is an integer array A.

## Output Format

- Return a single integer denoting the value as described above.

## Example

### Input 1:

```python
A = [1, 2, 3]
```

### Output 1:

```python
2
```

### Explanation 1:

1 ⊕ 2 ⊕ 3 ⊕ (1 ⊕ 2) ⊕ (2 ⊕ 3) ⊕ (1 ⊕ 2 ⊕ 3) = 2

### Input 2:

```python
A = [4, 5, 7, 5]
```

### Output 2:

```python
0
```

### Explanation 2:

4 ⊕ 5 ⊕ 7 ⊕ 5 ⊕ (4 ⊕ 5) ⊕ (5 ⊕ 7) ⊕ (7 ⊕ 5) ⊕ (4 ⊕ 5 ⊕ 7) ⊕ (5 ⊕ 7 ⊕ 5) ⊕ (4 ⊕ 5 ⊕ 7 ⊕ 5) = 0
