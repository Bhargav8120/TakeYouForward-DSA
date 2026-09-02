# [Candy](https://takeuforward.org/plus/dsa/problems/candy?subject=dsa&approach=constant-window&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

A line of **N** kids is standing there. The rating values listed in the integer array **ratings** are assigned to each kid.

These kids are receiving candy, according to the following criteria:

- There must be at least one candy for every child.

- Kids whose scores are higher than their neighbours receive more candies than their neighbours.

Return the **minimum** number of candies needed to distribute among children.

### Example 1

<p>

**Input:** ratings = [1, 0, 5]</p>

<p>

**Output:** 5</p>

<p>

**Explanation:** The distribution of candies will be 2 , 1 , 2 to first , second , third child respectively.</p>

### Example 2

<p>

**Input:** ratings = [1, 2, 2]</p>

<p>

**Output:** 4</p>

<p>

**Explanation:** The distribution of candies will be 1 , 2 , 1 to first , second , third child respectively.</p>The third gets only 1 candy because it satisfy above two criteria.

### Example 3

<p>

**Input:** ratings = [1, 2, 1, 4, 5]</p>Output:

9

### Constraints

- 1 <= n <= 10^4
- 0 <= ratings[i] <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
