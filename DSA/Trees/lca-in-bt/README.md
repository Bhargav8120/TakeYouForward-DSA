# [LCA in BT](https://takeuforward.org/plus/dsa/problems/lca-in-bt?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given a root of binary tree, find the **lowest common ancestor (LCA)** of two given nodes (p, q) in the tree.

The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).

**Note** : Return the TreeNode itself, not its value.

### Example 1

<p>

**Input:** root = [3, 5, 1, 6, 2, 0, 8, null, null, 7, 4] , p = 5, q = 1</p><p>

**Output:** 3</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-bFSPuLgF">

### Example 2

<p>

**Input:** root = [3, 5, 1, 6, 2, 0, 8, null, null, 7, 4] , p = 5, q = 4</p><p>

**Output:** 5</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-fPJukq_V">

### Example 3

<p>

**Input:** root = [7, 1, 2, 8, 10, 4, 5, null, 6], p = 6, q = 10</p>Output:

1

### Constraints

- 2 <= Number of Nodes <= 10^5
- -10^6 <= node.val <= 10^6
- All values in tree are **unique.**

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
