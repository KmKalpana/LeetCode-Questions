# Count the paths
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a directed acyclic graph(DAG) with n nodes labeled from 0 to n-1. Given edges, s and d ,count the number of ways to reach from s to d.</span><span style="font-size: 18px; user-select: auto;">There is a directed Edge from vertex edges[i][0]&nbsp;to the vertex&nbsp;edges[i][1].</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>edges = {{0,1},{0,3},{1,2},{3,2}}, 
n = 4, s = 0, d = 2
<strong style="user-select: auto;">Output: </strong>2
<strong style="user-select: auto;">Explanation: </strong>There are two ways to reach at 
2 from 0. These are-
1. 0-&gt;1-&gt;2
2. 0-&gt;3-&gt;2</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">possible_paths()&nbsp;</strong>which takes edges, n, s and d as input parameter and returns the number of ways to reach from s to d.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Compelxity:&nbsp;</strong>O(2<sup style="user-select: auto;">n</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(n+e) </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">where e is the number of edges in the graph.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 15<br style="user-select: auto;">
0 &lt;= s, d &lt;= n-1</span></p>
 <p style="user-select: auto;"></p>
            </div>