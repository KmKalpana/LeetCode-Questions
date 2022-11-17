<h2><a href="https://leetcode.com/problems/rectangle-area/">223. Rectangle Area</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the coordinates of two <strong style="user-select: auto;">rectilinear</strong> rectangles in a 2D plane, return <em style="user-select: auto;">the total area covered by the two rectangles</em>.</p>

<p style="user-select: auto;">The first rectangle is defined by its <strong style="user-select: auto;">bottom-left</strong> corner <code style="user-select: auto;">(ax1, ay1)</code> and its <strong style="user-select: auto;">top-right</strong> corner <code style="user-select: auto;">(ax2, ay2)</code>.</p>

<p style="user-select: auto;">The second rectangle is defined by its <strong style="user-select: auto;">bottom-left</strong> corner <code style="user-select: auto;">(bx1, by1)</code> and its <strong style="user-select: auto;">top-right</strong> corner <code style="user-select: auto;">(bx2, by2)</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="Rectangle Area" src="https://assets.leetcode.com/uploads/2021/05/08/rectangle-plane.png" style="width: 700px; height: 365px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2
<strong style="user-select: auto;">Output:</strong> 45
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ax1 = -2, ay1 = -2, ax2 = 2, ay2 = 2, bx1 = -2, by1 = -2, bx2 = 2, by2 = 2
<strong style="user-select: auto;">Output:</strong> 16
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= ax1 &lt;= ax2 &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= ay1 &lt;= ay2 &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= bx1 &lt;= bx2 &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= by1 &lt;= by2 &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>