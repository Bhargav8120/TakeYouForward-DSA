# [Insert Interval](https://takeuforward.org/plus/dsa/problems/insert-interval?subject=dsa&approach=brute&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a 2D array Intervals, where Intervals[i] = [start[i], end[i]] represents the start and end of the ith interval, the array represents non-overlapping intervals sorted in ascending order by start[i].&nbsp;

Given another array newInterval, where newInterval = [start, end] represents the start and end of another interval, merge newInterval into Intervals such that Intervals remain non-overlapping and sorted in ascending order by start[i].

Return **Intervals** after the insertion of **newInterval** .

### Example 1

<p>

**Input:** Intervals = [ [1, 3] , [6, 9] ] , newInterval = [2, 5]</p>

<p>

**Output:** [ [1, 5] , [6, 9] ]</p>

<p>

**Explanation:** After inserting the newInterval the Intervals array becomes [ [1, 3] , [2, 5] , [6, 9] ].</p>So to make them non overlapping we can merge the intervals [1, 3] and [2, 5].

So the Intervals array is [ [1, 5] , [6, 9] ].

### Example 2

<p>

**Input:** Intervals = [ [1, 2] , [3, 5] , [6, 7] , [8,10] ] , newInterval = [4, 8]</p>

<p>

**Output:** [ [1, 2] , [3, 10] ]</p>

<p>

**Explanation:** The Intervals array after inserting newInterval is [ [1, 2] , [3, 5] , [4, 8] , [6, 7] , [8, 10] ].</p>We merge the required intervals to make it non overlapping.

So final array is [ [1, 2] , [3, 10] ].

### Example 3

<p>

**Input:** Intervals = [ [1, 2] , [3, 5] , [6, 7] , [8,10] ] , newInterval = [1, 8]</p>Output:

[ [1, 10] ]

### Constraints

- 0 <= Intervals.length <= 10^5
- 0 <= start[i] < end[i] <= 10^7
- 0 <= start < end <= 10^7
- Intervals[i].length = 2
- newInterval.length = 2

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
