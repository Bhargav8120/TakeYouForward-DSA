# [Bottom view of BT](https://takeuforward.org/plus/dsa/problems/bottom-view-of-bt?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given root of binary tree, return the **bottom view** of the binary tree.

The bottom view of a binary tree is the set of nodes visible when the tree is viewed from the bottom. Return nodes from the leftmost node to the rightmost node. Also if 2 nodes are outside the shadow of the tree and are at the same position then consider the node that appears later in level traversal.

### Example 1

<p>

**Input:** root = [20, 8, 22, 5, 3, null, 25, null, null, 10 ,14]</p><p>

**Output:** [5, 10, 3, 14, 25]</p><p>

**Explanation:** From left to right the path is as follows :</p>First we encounter node with value 5.

Then we have nodes 8 , 10 but from bottom only 10 will be visible.

Next we have 20 , 3 but from bottom only 3 will be visible.

Next we have 14 , 22 but from bottom only 14 will be visible.

Then we encounter node with value 25.

<img src="https://static.takeuforward.org/content/aptitude_1768096166392_Group 21.png">

### Example 2

<p>

**Input:** root = [20, 8, 22, 5, 3, 4, 25, null, null, 10 ,14]</p><p>

**Output:** [5, 10, 4, 14, 25]</p><p>

**Explanation:** From left to right the path is as follows :</p>First we encounter node with value 5.

Then we have nodes 8 , 10 but from bottom only 10 will be visible.

Next we have 20 , 3 and 4. The 3 and 4 will be nodes visible from bottom but as the node 4 appears later from left to right , so only node 4 will be considered visible.

Next we have 14 , 22 but from bottom only 14 will be visible.

Then we encounter node with value 25.

<img src="https://static.takeuforward.org/content/aptitude_1768096346490_Group 21 (1).png">

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
