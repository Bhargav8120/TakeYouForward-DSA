# [Construct a BT from Postorder and Inorder](https://takeuforward.org/plus/dsa/problems/construct-a-bt-from-postorder-and-inorder?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given two integer arrays Postorder and Inorder. Where Postorder is the postorder traversal of a binary tree and Inorder is the inorder traversal of the same tree.

Construct and return the binary tree using the **postorder** and **inorder** arrays.

### Example 1

<p>

**Input:** postorder = [9, 15, 7, 20, 3] , inorder = [9, 3, 15, 20, 7]</p><p>

**Output:** [3, 9, 20, null, null, 15, 7]</p><p>

**Explanation:** The output tree is shown below.</p><img src="https://static.takeuforward.org/content/ProblemSetter-rdloQxO4">

### Example 2

<p>

**Input:** postorder = [5, 6, 4, 9, 2, 3]&nbsp;, inorder =&nbsp;[5, 4, 6, 3, 2, 9]</p><p>

**Output:** [3, 4, 2, 5, 6, null, 9]</p><p>

**Explanation:** The output tree is shown below.</p><img src="https://static.takeuforward.org/content/ProblemSetter-wcRUWMz1">

### Constraints

- 1 <= Number of Nodes <= 3000
- -10^4 <= Node.val <= 10^4
- All values in the given tree are unique.
- Each value of inorder also appears in postorder.
- Postorder is guaranteed to be the postorder traversal of the tree.
- Inorder is guaranteed to be the inorder traversal of the tree.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
