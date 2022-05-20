<h2><a href="https://leetcode.com/problems/sum-of-distances-in-tree/">834. Sum of Distances in Tree</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is an undirected connected tree with <code style="user-select: auto;">n</code> nodes labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> and <code style="user-select: auto;">n - 1</code> edges.</p>

<p style="user-select: auto;">You are given the integer <code style="user-select: auto;">n</code> and the array <code style="user-select: auto;">edges</code> where <code style="user-select: auto;">edges[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> indicates that there is an edge between nodes <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code> in the tree.</p>

<p style="user-select: auto;">Return an array <code style="user-select: auto;">answer</code> of length <code style="user-select: auto;">n</code> where <code style="user-select: auto;">answer[i]</code> is the sum of the distances between the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> node in the tree and all other nodes.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-sumdist1.jpg" style="width: 304px; height: 224px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 6, edges = [[0,1],[0,2],[2,3],[2,4],[2,5]]
<strong style="user-select: auto;">Output:</strong> [8,12,6,10,10,10]
<strong style="user-select: auto;">Explanation:</strong> The tree is shown above.
We can see that dist(0,1) + dist(0,2) + dist(0,3) + dist(0,4) + dist(0,5)
equals 1 + 1 + 2 + 2 + 2 = 8.
Hence, answer[0] = 8, and so on.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-sumdist2.jpg" style="width: 64px; height: 65px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1, edges = []
<strong style="user-select: auto;">Output:</strong> [0]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/07/23/lc-sumdist3.jpg" style="width: 144px; height: 145px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, edges = [[1,0]]
<strong style="user-select: auto;">Output:</strong> [1,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges.length == n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;">The given input represents a valid tree.</li>
</ul>
</div>