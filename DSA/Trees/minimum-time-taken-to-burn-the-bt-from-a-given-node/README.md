# [Minimum time taken to burn the BT from a given Node](https://takeuforward.org/plus/dsa/problems/minimum-time-taken-to-burn-the-bt-from-a-given-node?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given a target node data and a root of binary tree. If the target is set on fire, determine the shortest amount of **time** needed to **burn** the entire binary tree.

It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.

### Example 1

<p>

**Input:** root = [1, 2, 3, 4, null, 5, 6, null, 7]. target = 1</p><p>

**Output:** 3</p><p>

**Explanation:** The node with value 1 is set on fire.</p>In 1st second it burns node 2 and node 3.

In 2nd second it burns nodes 4, 5, 6.

In 3rd second it burns node 7.

<img src="https://static.takeuforward.org/content/ProblemSetter-cym-RjGO">

### Example 2

<p>

**Input:** root = [1, 2, 3, null, 5, null, 4], target = 4</p><p>

**Output:** 4</p><p>

**Explanation:** The node with value 4 is set on fire.</p>In 1st second it burns node 3.

In 2nd second it burns node 1.

In 3rd second it burns node 2.

In 4th second it burns node 5.

<img src="https://static.takeuforward.org/content/ProblemSetter-QHqDuU5z">

### Constraints

- 1 <= Number of Nodes <= 10^4
- -10^5 <= Node.val <= 10^5
- All Node.val values are **unique** .
- target will always be present in tree

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
