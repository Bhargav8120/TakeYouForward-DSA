# [Construct a BT from Preorder and Inorder](https://takeuforward.org/plus/dsa/problems/construct-a-bt-from-preorder-and-inorder?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given two integer arrays preorder and inorder. Where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree.

Construct and return the binary tree using **in-order** and **preorder arrays** .

### Example 1

<p>

**Input:** preorder = [3, 9, 20, 15, 7] , inorder = [9, 3, 15, 20, 7]</p><p>

**Output:** [3, 9, 20, null, null, 15, 7]</p><p>

**Explanation:** The output tree is shown below.</p><img src="https://static.takeuforward.org/content/ProblemSetter-J7OHMB3h">

### Example 2

<p>

**Input:** preorder = [3, 4, 5, 6, 2, 9] , inorder =&nbsp;[5, 4, 6, 3, 2, 9]</p><p>

**Output:** [3, 4, 2, 5, 6, null, 9]</p><p>

**Explanation:** The output tree is shown below.</p><img src="https://static.takeuforward.org/content/ProblemSetter-2FRZ0uID">

### Constraints

- 1 <= Number of Nodes <= 10^4
- -10^4 <= Node.val <= 10^4
- All values in the given tree are unique.
- Each value of inorder also appears in preorder.
- Preorder is guaranteed to be the preorder traversal of the tree.
- Inorder is guaranteed to be the inorder traversal of the tree.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
