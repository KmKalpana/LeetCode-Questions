<h2><a href="https://leetcode.com/problems/check-if-n-and-its-double-exist/">1346. Check If N and Its Double Exist</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">arr</code> of integers, check if there exists two integers <code style="user-select: auto;">N</code> and <code style="user-select: auto;">M</code> such that <code style="user-select: auto;">N</code> is the double of <code style="user-select: auto;">M</code> ( i.e. <code style="user-select: auto;">N = 2 * M</code>).</p>

<p style="user-select: auto;">More formally check if there exists&nbsp;two indices <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> such that :</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">i != j</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= i, j &lt; arr.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">arr[i] == 2 * arr[j]</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [10,2,5,3]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> N<code style="user-select: auto;"> = 10</code> is the double of M<code style="user-select: auto;"> = 5</code>,that is, <code style="user-select: auto;">10 = 2 * 5</code>.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [7,1,14,11]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> N<code style="user-select: auto;"> = 14</code> is the double of M<code style="user-select: auto;"> = 7</code>,that is, <code style="user-select: auto;">14 = 2 * 7</code>.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,1,7,11]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> In this case does not exist N and M, such that N = 2 * M.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= arr.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10^3 &lt;= arr[i] &lt;= 10^3</code></li>
</ul>
</div>