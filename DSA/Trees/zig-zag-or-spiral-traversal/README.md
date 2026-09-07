# [Zig Zag or Spiral Traversal](https://takeuforward.org/plus/dsa/problems/zig-zag-or-spiral-traversal?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree, return the **zigzag level order** traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

### Example 1

<p>

**Input:** root = [1, 2, 3, null, 4, 8, 5]</p><p>

**Output:** [ [1] , [3, 2], [4, 8, 5] ]</p><p>

**Explanation:** So at root we move from left to right.</p>At next level we move in opposite direction i.e. from right to left.

At next level again reverse the traversal i.e. from left to right.

<img src="https://static.takeuforward.org/content/ProblemSetter-8yVI8cfQ">

### Example 2

<p>

**Input:** root = [3, 9, 20, null, null, 15, 7]</p><p>

**Output:** [ [3] , [20, 9], [15, 7] ]</p><p>

**Explanation:** So at root we move from left to right.</p>At next level we move in opposite direction i.e. from right to left , from 20 to 9.

At next level again reverse the traversal i.e. from left to right, from 15 to 7.

<img src="https://static.takeuforward.org/content/ProblemSetter-9gRWP-_y">

### Constraints

- 1 <= Number of Nodes <= 10^4
- -10^3 <= Node.val <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
