<h2><a href="https://leetcode.com/problems/count-good-numbers/">1922. Count Good Numbers</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A digit string is <strong style="user-select: auto;">good</strong> if the digits <strong style="user-select: auto;">(0-indexed)</strong> at <strong style="user-select: auto;">even</strong> indices are <strong style="user-select: auto;">even</strong> and the digits at <strong style="user-select: auto;">odd</strong> indices are <strong style="user-select: auto;">prime</strong> (<code style="user-select: auto;">2</code>, <code style="user-select: auto;">3</code>, <code style="user-select: auto;">5</code>, or <code style="user-select: auto;">7</code>).</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"2582"</code> is good because the digits (<code style="user-select: auto;">2</code> and <code style="user-select: auto;">8</code>) at even positions are even and the digits (<code style="user-select: auto;">5</code> and <code style="user-select: auto;">2</code>) at odd positions are prime. However, <code style="user-select: auto;">"3245"</code> is <strong style="user-select: auto;">not</strong> good because <code style="user-select: auto;">3</code> is at an even index but is not even.</li>
</ul>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">total</strong> number of good digit strings of length </em><code style="user-select: auto;">n</code>. Since the answer may be large, <strong style="user-select: auto;">return it modulo </strong><code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">digit string</strong> is a string consisting of digits <code style="user-select: auto;">0</code> through <code style="user-select: auto;">9</code> that may contain leading zeros.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The good numbers of length 1 are "0", "2", "4", "6", "8".
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4
<strong style="user-select: auto;">Output:</strong> 400
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 50
<strong style="user-select: auto;">Output:</strong> 564908303
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">15</sup></code></li>
</ul>
</div>