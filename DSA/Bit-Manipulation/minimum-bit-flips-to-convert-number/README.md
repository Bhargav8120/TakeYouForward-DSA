# [Minimum Bit Flips to Convert Number](https://takeuforward.org/plus/dsa/problems/minimum-bit-flips-to-convert-number?subject=dsa&approach=optimal&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given two integers start and goal. Flip the **minimum** number of bits of start integer to convert it into goal integer.

A bits flip in the number val is to choose any bit in binary representation of val and flipping it from either 0 to 1 or 1 to 0.

### Example 1

<p>

**Input:** start = 10 , goal = 7</p><p>

**Output:** 3</p><p>

**Explanation:** The binary representation of 10 is "<u>10</u>1<u>0</u>".</p>The binary representation of 7 is "111".

If we flip the underlined bits in binary representation of 10 then we will obtain our goal.

### Example 2

<p>

**Input:** start = 3 , goal = 4</p><p>

**Output:** 3</p><p>

**Explanation:** The binary representation of 3 is "011".</p>The binary representation of 4 is "100".

So if we flip all the three bits of 3 then we will reach our goal number.

### Constraints

- 1 <= start , end <= 10^9

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
