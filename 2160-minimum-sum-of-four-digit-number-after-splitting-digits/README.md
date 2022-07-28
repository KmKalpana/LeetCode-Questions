<h2><a href="https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/">2160. Minimum Sum of Four Digit Number After Splitting Digits</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">positive</strong> integer <code style="user-select: auto;">num</code> consisting of exactly four digits. Split <code style="user-select: auto;">num</code> into two new integers <code style="user-select: auto;">new1</code> and <code style="user-select: auto;">new2</code> by using the <strong style="user-select: auto;">digits</strong> found in <code style="user-select: auto;">num</code>. <strong style="user-select: auto;">Leading zeros</strong> are allowed in <code style="user-select: auto;">new1</code> and <code style="user-select: auto;">new2</code>, and <strong style="user-select: auto;">all</strong> the digits found in <code style="user-select: auto;">num</code> must be used.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, given <code style="user-select: auto;">num = 2932</code>, you have the following digits: two <code style="user-select: auto;">2</code>'s, one <code style="user-select: auto;">9</code> and one <code style="user-select: auto;">3</code>. Some of the possible pairs <code style="user-select: auto;">[new1, new2]</code> are <code style="user-select: auto;">[22, 93]</code>, <code style="user-select: auto;">[23, 92]</code>, <code style="user-select: auto;">[223, 9]</code> and <code style="user-select: auto;">[2, 329]</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> possible sum of </em><code style="user-select: auto;">new1</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">new2</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 2932
<strong style="user-select: auto;">Output:</strong> 52
<strong style="user-select: auto;">Explanation:</strong> Some possible pairs [new1, new2] are [29, 23], [223, 9], etc.
The minimum sum can be obtained by the pair [29, 23]: 29 + 23 = 52.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 4009
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation:</strong> Some possible pairs [new1, new2] are [0, 49], [490, 0], etc. 
The minimum sum can be obtained by the pair [4, 9]: 4 + 9 = 13.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1000 &lt;= num &lt;= 9999</code></li>
</ul>
</div>