<h2><a href="https://leetcode.com/problems/minimum-bit-flips-to-convert-number/">2220. Minimum Bit Flips to Convert Number</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">bit flip</strong> of a number <code style="user-select: auto;">x</code> is choosing a bit in the binary representation of <code style="user-select: auto;">x</code> and <strong style="user-select: auto;">flipping</strong> it from either <code style="user-select: auto;">0</code> to <code style="user-select: auto;">1</code> or <code style="user-select: auto;">1</code> to <code style="user-select: auto;">0</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, for <code style="user-select: auto;">x = 7</code>, the binary representation is <code style="user-select: auto;">111</code> and we may choose any bit (including any leading zeros not shown) and flip it. We can flip the first bit from the right to get <code style="user-select: auto;">110</code>, flip the second bit from the right to get <code style="user-select: auto;">101</code>, flip the fifth bit from the right (a leading zero) to get <code style="user-select: auto;">10111</code>, etc.</li>
</ul>

<p style="user-select: auto;">Given two integers <code style="user-select: auto;">start</code> and <code style="user-select: auto;">goal</code>, return<em style="user-select: auto;"> the <strong style="user-select: auto;">minimum</strong> number of <strong style="user-select: auto;">bit flips</strong> to convert </em><code style="user-select: auto;">start</code><em style="user-select: auto;"> to </em><code style="user-select: auto;">goal</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> start = 10, goal = 7
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The binary representation of 10 and 7 are 1010 and 0111 respectively. We can convert 10 to 7 in 3 steps:
- Flip the first bit from the right: 101<u style="user-select: auto;">0</u> -&gt; 101<u style="user-select: auto;">1</u>.
- Flip the third bit from the right: 1<u style="user-select: auto;">0</u>11 -&gt; 1<u style="user-select: auto;">1</u>11.
- Flip the fourth bit from the right: <u style="user-select: auto;">1</u>111 -&gt; <u style="user-select: auto;">0</u>111.
It can be shown we cannot convert 10 to 7 in less than 3 steps. Hence, we return 3.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> start = 3, goal = 4
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The binary representation of 3 and 4 are 011 and 100 respectively. We can convert 3 to 4 in 3 steps:
- Flip the first bit from the right: 01<u style="user-select: auto;">1</u> -&gt; 01<u style="user-select: auto;">0</u>.
- Flip the second bit from the right: 0<u style="user-select: auto;">1</u>0 -&gt; 0<u style="user-select: auto;">0</u>0.
- Flip the third bit from the right: <u style="user-select: auto;">0</u>00 -&gt; <u style="user-select: auto;">1</u>00.
It can be shown we cannot convert 3 to 4 in less than 3 steps. Hence, we return 3.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start, goal &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>