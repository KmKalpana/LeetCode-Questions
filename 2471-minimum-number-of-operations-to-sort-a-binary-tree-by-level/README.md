<h2><a href="https://leetcode.com/problems/minimum-number-of-operations-to-sort-a-binary-tree-by-level/">2471. Minimum Number of Operations to Sort a Binary Tree by Level</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the <code style="user-select: auto;">root</code> of a binary tree with <strong style="user-select: auto;">unique values</strong>.</p>

<p style="user-select: auto;">In one operation, you can choose any two nodes <strong style="user-select: auto;">at the same level</strong> and swap their values.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of operations needed to make the values at each level sorted in a <strong style="user-select: auto;">strictly increasing order</strong></em>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">level</strong> of a node is the number of edges along the path between it and the root node<em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/09/18/image-20220918174006-2.png" style="width: 500px; height: 324px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,4,3,7,6,8,5,null,null,null,null,9,null,10]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
- Swap 4 and 3. The 2<sup style="user-select: auto;">nd</sup> level becomes [3,4].
- Swap 7 and 5. The 3<sup style="user-select: auto;">rd</sup> level becomes [5,6,8,7].
- Swap 8 and 7. The 3<sup style="user-select: auto;">rd</sup> level becomes [5,6,7,8].
We used 3 operations so return 3.
It can be proven that 3 is the minimum number of operations needed.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/09/18/image-20220918174026-3.png" style="width: 400px; height: 303px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,3,2,7,6,5,4]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
- Swap 3 and 2. The 2<sup style="user-select: auto;">nd</sup> level becomes [2,3].
- Swap 7 and 4. The 3<sup style="user-select: auto;">rd</sup> level becomes [4,6,5,7].
- Swap 6 and 5. The 3<sup style="user-select: auto;">rd</sup> level becomes [4,5,6,7].
We used 3 operations so return 3.
It can be proven that 3 is the minimum number of operations needed.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>
<img src="https://assets.leetcode.com/uploads/2022/09/18/image-20220918174052-4.png" style="width: 400px; height: 274px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3,4,5,6]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Each level is already sorted in increasing order so return 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">5</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">All the values of the tree are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>