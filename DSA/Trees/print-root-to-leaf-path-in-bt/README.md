# [Print root to leaf path in BT](https://takeuforward.org/plus/dsa/problems/print-root-to-note-path-in-bt?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree. Return all the **root-to-leaf paths** in the binary tree.

A leaf node of a binary tree is the node which does not have a left and right child.

### Example 1

<p>

**Input:** root = [1, 2, 3, null, 5, null, 4]</p><p>

**Output:** [ [1, 2, 5] , [1, 3, 4] ]</p><p>

**Explanation:** There are only two paths from root to leaf.</p>From root 1 to 5 , 1 -> 2 -> 5.

From root 1 to 4 , 1 -> 3 -> 4.

<img src="https://static.takeuforward.org/content/ProblemSetter-hHfCfcd8">

### Example 2

<p>

**Input:** root = [1, 2, 3, 4, 5]</p><p>

**Output:** [ [1, 2, 4] , [1, 2, 5] , [1, 3] ]</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-w9T0EbU5">

### Constraints

- 1 <= Number of Nodes <= 3*10^3
- -10^3 <= Node.val <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
