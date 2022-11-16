<h2><a href="https://leetcode.com/problems/minimum-cost-homecoming-of-a-robot-in-a-grid/">2087. Minimum Cost Homecoming of a Robot in a Grid</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is an <code style="user-select: auto;">m x n</code> grid, where <code style="user-select: auto;">(0, 0)</code> is the top-left cell and <code style="user-select: auto;">(m - 1, n - 1)</code> is the bottom-right cell. You are given an integer array <code style="user-select: auto;">startPos</code> where <code style="user-select: auto;">startPos = [start<sub style="user-select: auto;">row</sub>, start<sub style="user-select: auto;">col</sub>]</code> indicates that <strong style="user-select: auto;">initially</strong>, a <strong style="user-select: auto;">robot</strong> is at the cell <code style="user-select: auto;">(start<sub style="user-select: auto;">row</sub>, start<sub style="user-select: auto;">col</sub>)</code>. You are also given an integer array <code style="user-select: auto;">homePos</code> where <code style="user-select: auto;">homePos = [home<sub style="user-select: auto;">row</sub>, home<sub style="user-select: auto;">col</sub>]</code> indicates that its <strong style="user-select: auto;">home</strong> is at the cell <code style="user-select: auto;">(home<sub style="user-select: auto;">row</sub>, home<sub style="user-select: auto;">col</sub>)</code>.</p>

<p style="user-select: auto;">The robot needs to go to its home. It can move one cell in four directions: <strong style="user-select: auto;">left</strong>, <strong style="user-select: auto;">right</strong>, <strong style="user-select: auto;">up</strong>, or <strong style="user-select: auto;">down</strong>, and it can not move outside the boundary. Every move incurs some cost. You are further given two <strong style="user-select: auto;">0-indexed</strong> integer arrays: <code style="user-select: auto;">rowCosts</code> of length <code style="user-select: auto;">m</code> and <code style="user-select: auto;">colCosts</code> of length <code style="user-select: auto;">n</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If the robot moves <strong style="user-select: auto;">up</strong> or <strong style="user-select: auto;">down</strong> into a cell whose <strong style="user-select: auto;">row</strong> is <code style="user-select: auto;">r</code>, then this move costs <code style="user-select: auto;">rowCosts[r]</code>.</li>
	<li style="user-select: auto;">If the robot moves <strong style="user-select: auto;">left</strong> or <strong style="user-select: auto;">right</strong> into a cell whose <strong style="user-select: auto;">column</strong> is <code style="user-select: auto;">c</code>, then this move costs <code style="user-select: auto;">colCosts[c]</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum total cost</strong> for this robot to return home</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/10/11/eg-1.png" style="width: 282px; height: 217px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> startPos = [1, 0], homePos = [2, 3], rowCosts = [5, 4, 3], colCosts = [8, 2, 6, 7]
<strong style="user-select: auto;">Output:</strong> 18
<strong style="user-select: auto;">Explanation:</strong> One optimal path is that:
Starting from (1, 0)
-&gt; It goes down to (<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>, 0). This move costs rowCosts[2] = 3.
-&gt; It goes right to (2, <u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>). This move costs colCosts[1] = 2.
-&gt; It goes right to (2, <u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>). This move costs colCosts[2] = 6.
-&gt; It goes right to (2, <u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>). This move costs colCosts[3] = 7.
The total cost is 3 + 2 + 6 + 7 = 18</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> startPos = [0, 0], homePos = [0, 0], rowCosts = [5], colCosts = [26]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The robot is already at its home. Since no moves occur, the total cost is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == rowCosts.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == colCosts.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= rowCosts[r], colCosts[c] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">startPos.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">homePos.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">row</sub>, home<sub style="user-select: auto;">row</sub> &lt; m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= start<sub style="user-select: auto;">col</sub>, home<sub style="user-select: auto;">col</sub> &lt; n</code></li>
</ul>
</div>