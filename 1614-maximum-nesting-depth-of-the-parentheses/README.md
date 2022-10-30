<h2><a href="https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/">1614. Maximum Nesting Depth of the Parentheses</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A string is a <strong style="user-select: auto;">valid parentheses string</strong> (denoted <strong style="user-select: auto;">VPS</strong>) if it meets one of the following:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">It is an empty string <code style="user-select: auto;">""</code>, or a single character not equal to <code style="user-select: auto;">"("</code> or <code style="user-select: auto;">")"</code>,</li>
	<li style="user-select: auto;">It can be written as <code style="user-select: auto;">AB</code> (<code style="user-select: auto;">A</code> concatenated with <code style="user-select: auto;">B</code>), where <code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> are <strong style="user-select: auto;">VPS</strong>'s, or</li>
	<li style="user-select: auto;">It can be written as <code style="user-select: auto;">(A)</code>, where <code style="user-select: auto;">A</code> is a <strong style="user-select: auto;">VPS</strong>.</li>
</ul>

<p style="user-select: auto;">We can similarly define the <strong style="user-select: auto;">nesting depth</strong> <code style="user-select: auto;">depth(S)</code> of any VPS <code style="user-select: auto;">S</code> as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">depth("") = 0</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">depth(C) = 0</code>, where <code style="user-select: auto;">C</code> is a string with a single character not equal to <code style="user-select: auto;">"("</code> or <code style="user-select: auto;">")"</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">depth(A + B) = max(depth(A), depth(B))</code>, where <code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> are <strong style="user-select: auto;">VPS</strong>'s.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">depth("(" + A + ")") = 1 + depth(A)</code>, where <code style="user-select: auto;">A</code> is a <strong style="user-select: auto;">VPS</strong>.</li>
</ul>

<p style="user-select: auto;">For example, <code style="user-select: auto;">""</code>, <code style="user-select: auto;">"()()"</code>, and <code style="user-select: auto;">"()(()())"</code> are <strong style="user-select: auto;">VPS</strong>'s (with nesting depths 0, 1, and 2), and <code style="user-select: auto;">")("</code> and <code style="user-select: auto;">"(()"</code> are not <strong style="user-select: auto;">VPS</strong>'s.</p>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">VPS</strong> represented as string <code style="user-select: auto;">s</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">nesting depth</strong> of </em><code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "(1+(2*3)+((<u style="user-select: auto;">8</u>)/4))+1"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Digit 8 is inside of 3 nested parentheses in the string.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "(1)+((2))+(((<u style="user-select: auto;">3</u>)))"
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of digits <code style="user-select: auto;">0-9</code> and characters <code style="user-select: auto;">'+'</code>, <code style="user-select: auto;">'-'</code>, <code style="user-select: auto;">'*'</code>, <code style="user-select: auto;">'/'</code>, <code style="user-select: auto;">'('</code>, and <code style="user-select: auto;">')'</code>.</li>
	<li style="user-select: auto;">It is guaranteed that parentheses expression <code style="user-select: auto;">s</code> is a <strong style="user-select: auto;">VPS</strong>.</li>
</ul>
</div>