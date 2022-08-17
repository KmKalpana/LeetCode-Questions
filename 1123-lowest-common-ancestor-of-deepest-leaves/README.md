<h2><a href="https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/">1123. Lowest Common Ancestor of Deepest Leaves</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, return <em style="user-select: auto;">the lowest common ancestor of its deepest leaves</em>.</p>

<p style="user-select: auto;">Recall that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The node of a binary tree is a leaf if and only if it has no children</li>
	<li style="user-select: auto;">The depth of the root of the tree is <code style="user-select: auto;">0</code>. if the depth of a node is <code style="user-select: auto;">d</code>, the depth of each of its children is <code style="user-select: auto;">d + 1</code>.</li>
	<li style="user-select: auto;">The lowest common ancestor of a set <code style="user-select: auto;">S</code> of nodes, is the node <code style="user-select: auto;">A</code> with the largest depth such that every node in <code style="user-select: auto;">S</code> is in the subtree with root <code style="user-select: auto;">A</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/01/sketch1.png" style="width: 600px; height: 510px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [3,5,1,6,2,0,8,null,null,7,4]
<strong style="user-select: auto;">Output:</strong> [2,7,4]
<strong style="user-select: auto;">Explanation:</strong> We return the node with value 2, colored in yellow in the diagram.
The nodes coloured in blue are the deepest leaf-nodes of the tree.
Note that nodes 6, 0, and 8 are also leaf nodes, but the depth of them is 2, but the depth of nodes 7 and 4 is 3.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1]
<strong style="user-select: auto;">Output:</strong> [1]
<strong style="user-select: auto;">Explanation:</strong> The root is the deepest node in the tree, and it's the lca of itself.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [0,1,3,null,2]
<strong style="user-select: auto;">Output:</strong> [2]
<strong style="user-select: auto;">Explanation:</strong> The deepest leaf node in the tree is 2, the lca of one node is itself.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree will be in the range <code style="user-select: auto;">[1, 1000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 1000</code></li>
	<li style="user-select: auto;">The values of the nodes in the tree are <strong style="user-select: auto;">unique</strong>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> This question is the same as 865: <a href="https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/" target="_blank" style="user-select: auto;">https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/</a></p>
</div>