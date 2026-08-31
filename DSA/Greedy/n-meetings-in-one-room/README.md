# [N meetings in one room](https://takeuforward.org/plus/dsa/problems/n-meetings-in-one-room?subject=dsa&approach=brute&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given one meeting room and N meetings represented by two arrays, start and end, where start[i] represents the start time of the ith meeting and end[i] represents the end time of the ith meeting, determine the **maximum** number of meetings that can be accommodated in the meeting room if only one meeting can be held at a time. A meeting starting at the same time another meeting ends is considered overlapping.

### Example 1

<p>

**Input:** Start = [1, 3, 0, 5, 8, 5]&nbsp;,&nbsp;End = [2, 4, 6, 7, 9, 9]</p><p>

**Output:** 4</p><p>

**Explanation:** The meetings that can be accommodated in meeting room are (1,2) , (3,4) , (5,7) , (8,9).</p>

### Example 2

<p>

**Input:** Start = [10, 12, 20]&nbsp;,&nbsp;End = [20, 25, 30]</p><p>

**Output:** 1</p><p>

**Explanation:** Given the start and end time, only one meeting can be held in meeting room.</p>

### Example 3

<p>

**Input:** Start = [1, 4, 6, 9] , End = [2, 5, 7, 12]</p>Output:

4

### Constraints

- 1 <= N <= 10^5
- 0 <= start[i] < end[i] <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
