<h2><a href="https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/">1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> cities numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n-1</code>. Given the array <code style="user-select: auto;">edges</code> where <code style="user-select: auto;">edges[i] = [from<sub style="user-select: auto;">i</sub>, to<sub style="user-select: auto;">i</sub>, weight<sub style="user-select: auto;">i</sub>]</code> represents a bidirectional and weighted edge between cities <code style="user-select: auto;">from<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">to<sub style="user-select: auto;">i</sub></code>, and given the integer <code style="user-select: auto;">distanceThreshold</code>.</p>

<p style="user-select: auto;">Return the city with the smallest number of cities that are reachable through some path and whose distance is <strong style="user-select: auto;">at most</strong> <code style="user-select: auto;">distanceThreshold</code>, If there are multiple such cities, return the city with the greatest number.</p>

<p style="user-select: auto;">Notice that the distance of a path connecting cities <em style="user-select: auto;"><strong style="user-select: auto;">i</strong></em> and <em style="user-select: auto;"><strong style="user-select: auto;">j</strong></em> is equal to the sum of the edges' weights along that path.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/16/find_the_city_01.png" style="width: 300px; height: 225px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, edges = [[0,1,3],[1,2,1],[1,3,4],[2,3,1]], distanceThreshold = 4
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation: </strong>The figure above describes the graph.&nbsp;
The neighboring cities at a distanceThreshold = 4 for each city are:
City 0 -&gt; [City 1, City 2]&nbsp;
City 1 -&gt; [City 0, City 2, City 3]&nbsp;
City 2 -&gt; [City 0, City 1, City 3]&nbsp;
City 3 -&gt; [City 1, City 2]&nbsp;
Cities 0 and 3 have 2 neighboring cities at a distanceThreshold = 4, but we have to return city 3 since it has the greatest number.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/16/find_the_city_02.png" style="width: 300px; height: 225px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, edges = [[0,1,2],[0,4,8],[1,2,3],[1,4,2],[2,3,1],[3,4,1]], distanceThreshold = 2
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation: </strong>The figure above describes the graph.&nbsp;
The neighboring cities at a distanceThreshold = 2 for each city are:
City 0 -&gt; [City 1]&nbsp;
City 1 -&gt; [City 0, City 4]&nbsp;
City 2 -&gt; [City 3, City 4]&nbsp;
City 3 -&gt; [City 2, City 4]
City 4 -&gt; [City 1, City 2, City 3]&nbsp;
The city 0 has 1 neighboring city at a distanceThreshold = 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= edges.length &lt;= n * (n - 1) / 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= from<sub style="user-select: auto;">i</sub> &lt; to<sub style="user-select: auto;">i</sub> &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= weight<sub style="user-select: auto;">i</sub>,&nbsp;distanceThreshold &lt;= 10^4</code></li>
	<li style="user-select: auto;">All pairs <code style="user-select: auto;">(from<sub style="user-select: auto;">i</sub>, to<sub style="user-select: auto;">i</sub>)</code> are distinct.</li>
</ul>
</div>