<h2><a href="https://leetcode.com/problems/create-binary-tree-from-descriptions/">2196. Create Binary Tree From Descriptions</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a 2D integer array <code style="user-select: auto;">descriptions</code> where <code style="user-select: auto;">descriptions[i] = [parent<sub style="user-select: auto;">i</sub>, child<sub style="user-select: auto;">i</sub>, isLeft<sub style="user-select: auto;">i</sub>]</code> indicates that <code style="user-select: auto;">parent<sub style="user-select: auto;">i</sub></code> is the <strong style="user-select: auto;">parent</strong> of <code style="user-select: auto;">child<sub style="user-select: auto;">i</sub></code> in a <strong style="user-select: auto;">binary</strong> tree of <strong style="user-select: auto;">unique</strong> values. Furthermore,</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If <code style="user-select: auto;">isLeft<sub style="user-select: auto;">i</sub> == 1</code>, then <code style="user-select: auto;">child<sub style="user-select: auto;">i</sub></code> is the left child of <code style="user-select: auto;">parent<sub style="user-select: auto;">i</sub></code>.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">isLeft<sub style="user-select: auto;">i</sub> == 0</code>, then <code style="user-select: auto;">child<sub style="user-select: auto;">i</sub></code> is the right child of <code style="user-select: auto;">parent<sub style="user-select: auto;">i</sub></code>.</li>
</ul>

<p style="user-select: auto;">Construct the binary tree described by <code style="user-select: auto;">descriptions</code> and return <em style="user-select: auto;">its <strong style="user-select: auto;">root</strong></em>.</p>

<p style="user-select: auto;">The test cases will be generated such that the binary tree is <strong style="user-select: auto;">valid</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/09/example1drawio.png" style="width: 300px; height: 236px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> descriptions = [[20,15,1],[20,17,0],[50,20,1],[50,80,0],[80,19,1]]
<strong style="user-select: auto;">Output:</strong> [50,20,80,15,17,19]
<strong style="user-select: auto;">Explanation:</strong> The root node is the node with value 50 since it has no parent.
The resulting binary tree is shown in the diagram.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/02/09/example2drawio.png" style="width: 131px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> descriptions = [[1,2,1],[2,3,0],[3,4,1]]
<strong style="user-select: auto;">Output:</strong> [1,2,null,null,3,4]
<strong style="user-select: auto;">Explanation:</strong> The root node is the node with value 1 since it has no parent.
The resulting binary tree is shown in the diagram.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= descriptions.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">descriptions[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= parent<sub style="user-select: auto;">i</sub>, child<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= isLeft<sub style="user-select: auto;">i</sub> &lt;= 1</code></li>
	<li style="user-select: auto;">The binary tree described by <code style="user-select: auto;">descriptions</code> is valid.</li>
</ul>
</div>