# [Vertical Order Traversal](https://takeuforward.org/plus/dsa/problems/vertical-order-traversal?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Compute the binary tree's vertical order traversal given its root.

The left and right children of a node at location (row, col) will be at (row + 1, col - 1) and (row + 1, col + 1), respectively. The tree's root is located at (0, 0).

The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values. Return the binary tree's **vertical order traversal** .

### Example 1

<p>

**Input:** root = [3, 9, 20, null, null, 15, 7]</p><p>

**Output:** [ [9] , [3, 15] , [20] , [7] ]</p><p>

**Explanation:** </p>Column -1: Only node 9 is in this column.

Column 0: Nodes 3 and 15 are in this column in that order from top to bottom.

Column 1: Only node 20 is in this column.

Column 2: Only node 7 is in this column.

<img src="https://static.takeuforward.org/content/ProblemSetter-Ys33Ay3r">

### Example 2

<p>

**Input:** root = [1, 2, 3, 4, 5, 6, 7]</p><p>

**Output:** [ [4] , [2] , [1, 5, 6] , [3] , [7] ]</p><p>

**Explanation:** </p>Column -2: Only node 4 is in this column.

Column -1: Only node 2 is in this column.

Column 0: Nodes 1, 5, and 6 are in this column.1 is at the top, so it comes first. 5 and 6 are at the same position (2, 0), so we sort them by their value, 5 before 6.

Column 1: Only node 3 is in this column.

Column 2: Only node 7 is in this column.

<img src="https://static.takeuforward.org/content/ProblemSetter-_KMwKgfE">

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
