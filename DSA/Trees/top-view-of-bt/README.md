# [Top View of BT](https://takeuforward.org/plus/dsa/problems/top-view-of-bt?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree, return the **top view** of the binary tree.

The top view of a binary tree consists of the set of nodes visible when the tree is observed from above.

Return the values of these nodes ordered from the leftmost to the rightmost position.

If multiple nodes share the same horizontal distance from the root, only the node that appears first when traversing from left to right (i.e., the leftmost node) should be included in the result.

### Example 1

<p>

**Input:** root = [1, 2, 3, 4, 5, 6, 7]</p><p>

**Output:** [4, 2, 1, 3, 7]</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-h55_oAjJ">

### Example 2

<p>

**Input:** root = [10, 20, 30, 40, 60, 90, 100]</p><p>

**Output:** [40, 20, 10, 30, 100]</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-EOPQ0lyq">

### Example 3

<p>

**Input:** root = [5, 1, 2, 8, null, 4, 5, null, 6]</p>Output:

[8, 1, 5, 2, 5]

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
