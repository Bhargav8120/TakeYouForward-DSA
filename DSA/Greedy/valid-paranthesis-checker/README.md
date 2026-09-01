# [Valid Paranthesis Checker](https://takeuforward.org/plus/dsa/problems/valid-paranthesis-checker?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Find the validity of an input string **s** that only contains the letters '(', ')' and '*'.

A string entered is legitimate if

- Any left parenthesis '(' must have a corresponding right parenthesis ')'.
- Any right parenthesis ')' must have a corresponding left parenthesis '('.
- Left parenthesis '(' must go before the corresponding right parenthesis ')'.
- '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

### Example 1

<p>

**Input:** s = (*))</p><p>

**Output:** true</p><p>

**Explanation:** The * can be replaced by an opening '(' bracket. The string after replacing the * mark is "(())" and is a valid string.</p>

### Example 2

<p>

**Input:** s = *(()</p><p>

**Output:** false</p><p>

**Explanation:** The * replaced with any bracket does not form a valid string.</p>

### Constraints

- 1 <= s.length <= 10^4
- s consist of only '(', ')', '*'.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
