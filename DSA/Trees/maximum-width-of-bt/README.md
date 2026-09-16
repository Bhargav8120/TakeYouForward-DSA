# [Maximum Width of BT](https://takeuforward.org/plus/dsa/problems/maximum-width-of-bt?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree, return the **maximum width** of the given tree.

The maximum width of a tree is the maximum width among **all levels** . The width of a level is determined by measuring the distance between its end nodes, which are the leftmost and rightmost non-null nodes. The length calculation additionally takes into account the null nodes that would be present between the end nodes if a complete binary tree were to stretch down to that level.

### Example 1

<p>

**Input:** root = [1, 3, 2, 5, 3, null, 9]</p><p>

**Output:** 4</p><p>

**Explanation:** </p>So if the below tree would be a complete binary tree then there would be total 4 nodes in the last level.

So the maximum width of the binary tree is between the nodes with value 5 and 9 is equal to 4.

<img src="https://static.takeuforward.org/content/ProblemSetter-mTKWEKn1">

### Example 2

<p>

**Input:** root = [1, 3, 2, 5, null, null, 9, 6, null, 7]</p><p>

**Output:** 7</p><p>

**Explanation:** </p>If the below tree would be a complete binary tree then at last levels there would b 7 nodes including the node with value 6 and 7.

So the maximum width of binary tree is 7.

<img src="https://static.takeuforward.org/content/ProblemSetter-Qds-KkJF">

### Constraints

- 1 <= Number of Nodes <= 3000
- -1000 <= Node.val <= 1000

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
