# [Requirements needed to construct a unique BT](https://takeuforward.org/plus/dsa/problems/requirements-needed-to-construct-a-unique-bt?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a pair of tree traversal, return **true** if a unique binary tree can be constructed otherwise **false** . Each traversal is represented with integer: 1 -> Preorder , 2 -> Inorder , 3 -> Postorder.

### Example 1

<p>

**Input:** 1 2</p><p>

**Output:** true&nbsp;</p><p>

**Explanation:** Answer is True.</p>It is possible to construct a unique binary tree. This is because the preorder traversal provides the root of the tree, and the inorder traversal helps determine the left and right subtrees.

### Example 2

<p>

**Input:** 2 2</p><p>

**Output:** false</p><p>

**Explanation:** Two inorder traversals are insufficient to uniquely determine a binary tree.</p>

### Constraints

- 1 <= a, b <= 3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
