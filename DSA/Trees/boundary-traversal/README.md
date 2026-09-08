# [Boundary Traversal](https://takeuforward.org/plus/dsa/problems/boundary-traversal?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a root of Binary Tree, perform the **boundary traversal** of the tree.&nbsp;

The boundary traversal is the process of visiting the boundary nodes of the binary tree in the anticlockwise direction, starting from the root.

The&nbsp; **boundary** &nbsp;of a binary tree is the concatenation of the&nbsp; **root** , the&nbsp; **left boundary** , the&nbsp; **leaves** &nbsp;ordered from left-to-right, and the&nbsp; **reverse order** &nbsp;of the&nbsp; **right boundary** .

The&nbsp; **left boundary** &nbsp;is the set of nodes defined by the following:

- The root node's left child is in the left boundary. If the root does not have a left child, then the left boundary is&nbsp; **empty** .

- If a node in the left boundary and has a left child, then the left child is in the left boundary.

- If a node is in the left boundary, has&nbsp; **no** &nbsp;left child, but has a right child, then the right child is in the left boundary.

- The leftmost leaf is&nbsp; **not** &nbsp;in the left boundary.

The&nbsp; **right boundary** &nbsp;is similar to the&nbsp; **left boundary** , except it is the right side of the root's right subtree. Again, the leaf is&nbsp; **not** &nbsp;part of the&nbsp; **right boundary** , and the&nbsp; **right boundary** &nbsp;is empty if the root does not have a right child.

### Example 1

<p>

**Input:** root = [1, 2, 3, 4, 5, 6, 7, null, null, 8, 9]</p><p>

**Output:** [1, 2, 4, 8, 9, 6, 7, 3]</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-HG4THe8L">

### Example 2

<p>

**Input:** root = [1, 2, null, 4, 9, 6, 5, 3, null, null, null, null, null, 7, 8]</p><p>

**Output:** [1, 2, 4, 6, 5, 7, 8]</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-o0-6k-B_">

### Constraints

- 0 <= Number of Nodes <= 10^4
- -10^3 <= Node.val <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
