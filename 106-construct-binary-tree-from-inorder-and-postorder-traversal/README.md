<h2><a href="https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/">106. Construct Binary Tree from Inorder and Postorder Traversal</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integer arrays <code style="user-select: auto;">inorder</code> and <code style="user-select: auto;">postorder</code> where <code style="user-select: auto;">inorder</code> is the inorder traversal of a binary tree and <code style="user-select: auto;">postorder</code> is the postorder traversal of the same tree, construct and return <em style="user-select: auto;">the binary tree</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/02/19/tree.jpg" style="width: 277px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
<strong style="user-select: auto;">Output:</strong> [3,9,20,null,null,15,7]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> inorder = [-1], postorder = [-1]
<strong style="user-select: auto;">Output:</strong> [-1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= inorder.length &lt;= 3000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">postorder.length == inorder.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-3000 &lt;= inorder[i], postorder[i] &lt;= 3000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">inorder</code> and <code style="user-select: auto;">postorder</code> consist of <strong style="user-select: auto;">unique</strong> values.</li>
	<li style="user-select: auto;">Each value of <code style="user-select: auto;">postorder</code> also appears in <code style="user-select: auto;">inorder</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">inorder</code> is <strong style="user-select: auto;">guaranteed</strong> to be the inorder traversal of the tree.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">postorder</code> is <strong style="user-select: auto;">guaranteed</strong> to be the postorder traversal of the tree.</li>
</ul>
</div>