# [Job sequencing Problem](https://takeuforward.org/plus/dsa/problems/job-sequencing-problem?subject=dsa&approach=brute&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given an 2D array Jobs of size Nx3, where Jobs[i][0] represents JobID , Jobs[i][1] represents Deadline , Jobs[i][2] represents Profit associated with that job. Each Job takes 1 unit of time to complete and only one job can be scheduled at a time.

The profit associated with a job is earned only if it is completed by its deadline. Find the number of **jobs** and **maximum profit** .

### Example 1

<p>

**Input:** Jobs = [ [1, 4, 20] , [2, 1, 10] , [3, 1, 40] , [4, 1, 30] ]</p><p>

**Output:** 2 60</p><p>

**Explanation:** Job with JobID 3 can be performed at time t=1 giving a profit of 40.</p>Job with JobID 1 can be performed at time t=2 giving a profit of 20.

No more jobs can be scheduled, So total Profit = 40 + 20 => 60.

Total number of jobs completed are two, JobID 1, JobID 3.

So answer is 2 60.

### Example 2

<p>

**Input:** Jobs = [ [1, 2, 100] , [2, 1, 19] , [3, 2, 27] , [4, 1, 25] , [5, 1, 15] ]</p><p>

**Output:** 2 127</p><p>

**Explanation:** Job with JobID 1 can be performed at time time t=1 giving a profit of 100.</p>Job with JobID 3 can be performed at time t=2 giving a profit of 27.

No more jobs can be scheduled, So total Profit = 100 + 27 => 127.

Total number of jobs completed are two, JobID 1, JobID 3.

So answer is 2 127.

### Example 3

<p>

**Input:** Jobs = [ [1, 1, 100] , [2, 2, 200] , [3, 3, 300] , [4, 4, 400] ]</p>Output:

4 1000

### Constraints

- 1 <= N <= 10^4
- 1 <= Deadline <= N
- 1 <= Profit <= 500

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
