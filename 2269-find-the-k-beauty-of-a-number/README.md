<h2><a href="https://leetcode.com/problems/find-the-k-beauty-of-a-number/">2269. Find the K-Beauty of a Number</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">k-beauty</strong> of an integer <code style="user-select: auto;">num</code> is defined as the number of <strong style="user-select: auto;">substrings</strong> of <code style="user-select: auto;">num</code> when it is read as a string that meet the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">It has a length of <code style="user-select: auto;">k</code>.</li>
	<li style="user-select: auto;">It is a divisor of <code style="user-select: auto;">num</code>.</li>
</ul>

<p style="user-select: auto;">Given integers <code style="user-select: auto;">num</code> and <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the k-beauty of </em><code style="user-select: auto;">num</code>.</p>

<p style="user-select: auto;">Note:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Leading zeros</strong> are allowed.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0</code> is not a divisor of any value.</li>
</ul>

<p style="user-select: auto;">A <strong style="user-select: auto;">substring</strong> is a contiguous sequence of characters in a string.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 240, k = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The following are the substrings of num of length k:
- "24" from "<strong style="user-select: auto;"><u style="user-select: auto;">24</u></strong>0": 24 is a divisor of 240.
- "40" from "2<u style="user-select: auto;"><strong style="user-select: auto;">40</strong></u>": 40 is a divisor of 240.
Therefore, the k-beauty is 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = 430043, k = 2
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The following are the substrings of num of length k:
- "43" from "<u style="user-select: auto;"><strong style="user-select: auto;">43</strong></u>0043": 43 is a divisor of 430043.
- "30" from "4<u style="user-select: auto;"><strong style="user-select: auto;">30</strong></u>043": 30 is not a divisor of 430043.
- "00" from "43<u style="user-select: auto;"><strong style="user-select: auto;">00</strong></u>43": 0 is not a divisor of 430043.
- "04" from "430<u style="user-select: auto;"><strong style="user-select: auto;">04</strong></u>3": 4 is not a divisor of 430043.
- "43" from "4300<u style="user-select: auto;"><strong style="user-select: auto;">43</strong></u>": 43 is a divisor of 430043.
Therefore, the k-beauty is 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= num &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= num.length</code> (taking <code style="user-select: auto;">num</code> as a string)</li>
</ul>
</div>