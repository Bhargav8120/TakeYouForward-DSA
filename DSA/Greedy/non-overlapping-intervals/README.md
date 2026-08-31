# [Non-overlapping Intervals](https://takeuforward.org/plus/dsa/problems/non-overlapping-intervals?subject=dsa&approach=brute&sidebar=open&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given an array of N intervals in the form of (start[i], end[i]), where start[i] is the starting point of the interval and end[i] is the ending point of the interval, return the **minimum** number of intervals that need to be removed to make the remaining intervals **non-overlapping** .

<strong style="color: rgb(209, 213, 219); background-color: rgb(24, 24, 24);">Note:</strong>

Intervals which only touch at a point are also considered as non-overlapping. For example, [1, 3] and [3, 4] are non-overlapping.

### Example 1

<p>

**Input:** Intervals = [ [1, 2] , [2, 3] , [3, 4] ,[1, 3] ]</p>

<p>

**Output:** 1</p>

<p>

**Explanation:** You can remove the interval [1, 3] to make the remaining interval non overlapping.</p>

### Example 2

<p>

**Input:** Intervals = [ [1, 3] , [1, 4] , [3, 5] , [3, 4] , [4, 5] ]</p>

<p>

**Output:** 2</p>

<p>

**Explanation:** You can remove the intervals [1, 4] and [3, 5] and the remaining intervals becomes non overlapping.</p>

### Example 3

<p>

**Input:** Intervals = [ [1, 10] , [1, 4] , [3, 8] , [3, 4] , [4, 5] ]</p>Output:

3

### Constraints

- 1 <= Intervals.length <= 10^5
- 0 <= start[i] < end[i] <= 10^5
- Intervals[i].length = 2

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
