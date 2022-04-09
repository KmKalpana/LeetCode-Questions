<h2><a href="https://leetcode.com/problems/delete-leaves-with-a-given-value/">1325. Delete Leaves With a Given Value</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a binary tree <code style="user-select: auto;">root</code> and an integer <code style="user-select: auto;">target</code>, delete all the <strong style="user-select: auto;">leaf nodes</strong> with value <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">Note that once you delete a leaf node with value <code style="user-select: auto;">target</code><strong style="user-select: auto;">, </strong>if its parent node becomes a leaf node and has the value <code style="user-select: auto;">target</code>, it should also be deleted (you need to continue doing that until you cannot).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/01/09/sample_1_1684.png" style="width: 500px; height: 112px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3,2,null,2,4], target = 2
<strong style="user-select: auto;">Output:</strong> [1,null,3,null,4]
<strong style="user-select: auto;">Explanation:</strong> Leaf nodes in green with value (target = 2) are removed (Picture in left). 
After removing, new nodes become leaf nodes with value (target = 2) (Picture in center).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/01/09/sample_2_1684.png" style="width: 400px; height: 154px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,3,3,3,2], target = 3
<strong style="user-select: auto;">Output:</strong> [1,3,null,null,2]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/01/15/sample_3_1684.png" style="width: 500px; height: 166px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,null,2,null,2], target = 2
<strong style="user-select: auto;">Output:</strong> [1]
<strong style="user-select: auto;">Explanation:</strong> Leaf nodes in green with value (target = 2) are removed at each step.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 3000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val, target &lt;= 1000</code></li>
</ul>
</div>