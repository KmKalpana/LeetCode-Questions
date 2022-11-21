<h2><a href="https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/">1926. Nearest Exit from Entrance in Maze</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">m x n</code> matrix <code style="user-select: auto;">maze</code> (<strong style="user-select: auto;">0-indexed</strong>) with empty cells (represented as <code style="user-select: auto;">'.'</code>) and walls (represented as <code style="user-select: auto;">'+'</code>). You are also given the <code style="user-select: auto;">entrance</code> of the maze, where <code style="user-select: auto;">entrance = [entrance<sub style="user-select: auto;">row</sub>, entrance<sub style="user-select: auto;">col</sub>]</code> denotes the row and column of the cell you are initially standing at.</p>

<p style="user-select: auto;">In one step, you can move one cell <strong style="user-select: auto;">up</strong>, <strong style="user-select: auto;">down</strong>, <strong style="user-select: auto;">left</strong>, or <strong style="user-select: auto;">right</strong>. You cannot step into a cell with a wall, and you cannot step outside the maze. Your goal is to find the <strong style="user-select: auto;">nearest exit</strong> from the <code style="user-select: auto;">entrance</code>. An <strong style="user-select: auto;">exit</strong> is defined as an <strong style="user-select: auto;">empty cell</strong> that is at the <strong style="user-select: auto;">border</strong> of the <code style="user-select: auto;">maze</code>. The <code style="user-select: auto;">entrance</code> <strong style="user-select: auto;">does not count</strong> as an exit.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">number of steps</strong> in the shortest path from the </em><code style="user-select: auto;">entrance</code><em style="user-select: auto;"> to the nearest exit, or </em><code style="user-select: auto;">-1</code><em style="user-select: auto;"> if no such path exists</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/nearest1-grid.jpg" style="width: 333px; height: 253px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> maze = [["+","+",".","+"],[".",".",".","+"],["+","+","+","."]], entrance = [1,2]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> There are 3 exits in this maze at [1,0], [0,2], and [2,3].
Initially, you are at the entrance cell [1,2].
- You can reach [1,0] by moving 2 steps left.
- You can reach [0,2] by moving 1 step up.
It is impossible to reach [2,3] from the entrance.
Thus, the nearest exit is [0,2], which is 1 step away.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/nearesr2-grid.jpg" style="width: 253px; height: 253px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> maze = [["+","+","+"],[".",".","."],["+","+","+"]], entrance = [1,0]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> There is 1 exit in this maze at [1,2].
[1,0] does not count as an exit since it is the entrance cell.
Initially, you are at the entrance cell [1,0].
- You can reach [1,2] by moving 2 steps right.
Thus, the nearest exit is [1,2], which is 2 steps away.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/nearest3-grid.jpg" style="width: 173px; height: 93px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> maze = [[".","+"]], entrance = [0,0]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> There are no exits in this maze.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">maze.length == m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">maze[i].length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">maze[i][j]</code> is either <code style="user-select: auto;">'.'</code> or <code style="user-select: auto;">'+'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">entrance.length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= entrance<sub style="user-select: auto;">row</sub> &lt; m</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= entrance<sub style="user-select: auto;">col</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">entrance</code> will always be an empty cell.</li>
</ul>
</div>