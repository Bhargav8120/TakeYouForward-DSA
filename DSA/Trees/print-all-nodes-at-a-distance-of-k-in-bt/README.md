# [Print all nodes at a distance of K in BT](https://takeuforward.org/plus/dsa/problems/print-all-nodes-at-a-distance-of-k-in-bt?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given the **root** of a binary tree, the value of a target node **target** , and an integer **k** . Return an array of the values of all nodes that have a distance **k** from the **target node** .

The answer can be returned in any order (N represents null).

**Note:** *Although input shows target as a value, internally it refers to the TreeNode with that value.*

### Example 1

<p>

**Input:** root = [3, 5, 1, 6, 2, 0, 8, N, N, 7, 4] , target = 5, k = 2</p><p>

**Output:** [1, 4, 7]</p><p>

**Explanation:** The nodes that are a distance 2 from the target node (with value 5) have values 7, 4, and 1.</p><img src="https://static.takeuforward.org/content/ProblemSetter-X7lrwOO7">

### Example 2

<p>

**Input:** root = [3, 5, 1, 6, 2, 0, 8, N, N, 7, 4] , target = 5, k = 3</p><p>

**Output:** [0, 8]</p><p>

**Explanation:** The nodes that are a distance 3 from the target node (with value 5) have values 0, 8.</p><img src="https://static.takeuforward.org/content/ProblemSetter-8qwA6bD3">

### Example 3

<p>

**Input:** root =[1, 2, 3, 4, null, 5, 6], target = 6, k = 2</p>Output:

[1, 5]

### Constraints

- 1 <= Number of Nodes <= 10^3
- -10^4 <= Node.val <= 10^4
- All the values **Node.val** are **unique** .
- target is the value of one of the nodes in the tree
- 0 <= k <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
