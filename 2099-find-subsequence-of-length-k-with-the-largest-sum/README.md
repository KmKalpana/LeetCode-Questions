<h2><a href="https://leetcode.com/problems/find-subsequence-of-length-k-with-the-largest-sum/">2099. Find Subsequence of Length K With the Largest Sum</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>. You want to find a <strong style="user-select: auto;">subsequence </strong>of <code style="user-select: auto;">nums</code> of length <code style="user-select: auto;">k</code> that has the <strong style="user-select: auto;">largest</strong> sum.</p>

<p style="user-select: auto;">Return<em style="user-select: auto;"> </em><em style="user-select: auto;"><strong style="user-select: auto;">any</strong> such subsequence as an integer array of length </em><code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,1,3,3], k = 2
<strong style="user-select: auto;">Output:</strong> [3,3]
<strong style="user-select: auto;">Explanation:</strong>
The subsequence has the largest sum of 3 + 3 = 6.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,-2,3,4], k = 3
<strong style="user-select: auto;">Output:</strong> [-1,3,4]
<strong style="user-select: auto;">Explanation:</strong> 
The subsequence has the largest sum of -1 + 3 + 4 = 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,4,3,3], k = 2
<strong style="user-select: auto;">Output:</strong> [3,4]
<strong style="user-select: auto;">Explanation:</strong>
The subsequence has the largest sum of 3 + 4 = 7. 
Another possible subsequence is [4, 3].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup>&nbsp;&lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= nums.length</code></li>
</ul>
</div>