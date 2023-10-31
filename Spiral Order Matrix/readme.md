# Spiral Order Matrix II

## Problem Description

Given an integer A, generate a square matrix filled with elements from 1 to A^2 in spiral order and return the generated square matrix.

### Constraints

- 1 <= A <= 1000

## Input Format

- First and only argument is an integer A.

## Output Format

- Return a 2-D matrix which consists of the elements added in spiral order.

## Example

### Input 1:

```python
A = 1
```

### Output 1:

```python
[ [1] ]
```

### Input 2:

```python
A = 2
```

### Output 2:

```python
[ [1, 2], 
  [4, 3] ]
```

### Input 3:

```python
A = 5
```

### Output 3:

```python
[ [1,   2,  3,  4, 5], 
  [16, 17, 18, 19, 6], 
  [15, 24, 25, 20, 7], 
  [14, 23, 22, 21, 8], 
  [13, 12, 11, 10, 9] ]
```

### Explanation 1:

Only 1 is to be arranged.

### Explanation 2:

```
1 --> 2
^     |
|     v
4 <-- 3
```
