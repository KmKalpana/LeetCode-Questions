<h2><a href="https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/">1749. Maximum Absolute Sum of Any Subarray</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code>. The <strong style="user-select: auto;">absolute sum</strong> of a subarray <code style="user-select: auto;">[nums<sub style="user-select: auto;">l</sub>, nums<sub style="user-select: auto;">l+1</sub>, ..., nums<sub style="user-select: auto;">r-1</sub>, nums<sub style="user-select: auto;">r</sub>]</code> is <code style="user-select: auto;">abs(nums<sub style="user-select: auto;">l</sub> + nums<sub style="user-select: auto;">l+1</sub> + ... + nums<sub style="user-select: auto;">r-1</sub> + nums<sub style="user-select: auto;">r</sub>)</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> absolute sum of any <strong style="user-select: auto;">(possibly empty)</strong> subarray of </em><code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">Note that <code style="user-select: auto;">abs(x)</code> is defined as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If <code style="user-select: auto;">x</code> is a negative integer, then <code style="user-select: auto;">abs(x) = -x</code>.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">x</code> is a non-negative integer, then <code style="user-select: auto;">abs(x) = x</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,-3,2,3,-4]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,-5,1,-4,3,-2]
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>