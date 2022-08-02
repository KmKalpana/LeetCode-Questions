<h2><a href="https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/">1984. Minimum Difference Between Highest and Lowest of K Scores</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">nums</code>, where <code style="user-select: auto;">nums[i]</code> represents the score of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> student. You are also given an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">Pick the scores of any <code style="user-select: auto;">k</code> students from the array so that the <strong style="user-select: auto;">difference</strong> between the <strong style="user-select: auto;">highest</strong> and the <strong style="user-select: auto;">lowest</strong> of the <code style="user-select: auto;">k</code> scores is <strong style="user-select: auto;">minimized</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> possible difference</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [90], k = 1
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There is one way to pick score(s) of one student:
- [<strong style="user-select: auto;"><u style="user-select: auto;">90</u></strong>]. The difference between the highest and lowest score is 90 - 90 = 0.
The minimum possible difference is 0.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [9,4,1,7], k = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> There are six ways to pick score(s) of two students:
- [<strong style="user-select: auto;"><u style="user-select: auto;">9</u></strong>,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,1,7]. The difference between the highest and lowest score is 9 - 4 = 5.
- [<strong style="user-select: auto;"><u style="user-select: auto;">9</u></strong>,4,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,7]. The difference between the highest and lowest score is 9 - 1 = 8.
- [<strong style="user-select: auto;"><u style="user-select: auto;">9</u></strong>,4,1,<strong style="user-select: auto;"><u style="user-select: auto;">7</u></strong>]. The difference between the highest and lowest score is 9 - 7 = 2.
- [9,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,7]. The difference between the highest and lowest score is 4 - 1 = 3.
- [9,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,1,<strong style="user-select: auto;"><u style="user-select: auto;">7</u></strong>]. The difference between the highest and lowest score is 7 - 4 = 3.
- [9,4,<strong style="user-select: auto;"><u style="user-select: auto;">1</u></strong>,<strong style="user-select: auto;"><u style="user-select: auto;">7</u></strong>]. The difference between the highest and lowest score is 7 - 1 = 6.
The minimum possible difference is 2.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>