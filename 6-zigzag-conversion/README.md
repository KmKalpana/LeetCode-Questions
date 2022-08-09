<h2><a href="https://leetcode.com/problems/zigzag-conversion/">6. Zigzag Conversion</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The string <code style="user-select: auto;">"PAYPALISHIRING"</code> is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)</p>

<pre style="user-select: auto;">P   A   H   N
A P L S I I G
Y   I   R
</pre>

<p style="user-select: auto;">And then read line by line: <code style="user-select: auto;">"PAHNAPLSIIGYIR"</code></p>

<p style="user-select: auto;">Write the code that will take a string and make this conversion given a number of rows:</p>

<pre style="user-select: auto;">string convert(string s, int numRows);
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "PAYPALISHIRING", numRows = 3
<strong style="user-select: auto;">Output:</strong> "PAHNAPLSIIGYIR"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "PAYPALISHIRING", numRows = 4
<strong style="user-select: auto;">Output:</strong> "PINALSIGYAHRPI"
<strong style="user-select: auto;">Explanation:</strong>
P     I    N
A   L S  I G
Y A   H R
P     I
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "A", numRows = 1
<strong style="user-select: auto;">Output:</strong> "A"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of English letters (lower-case and upper-case), <code style="user-select: auto;">','</code> and <code style="user-select: auto;">'.'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= numRows &lt;= 1000</code></li>
</ul>
</div>