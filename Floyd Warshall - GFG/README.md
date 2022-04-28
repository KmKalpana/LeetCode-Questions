# Floyd Warshall
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The problem is to find shortest distances between every pair of vertices in a given edge weighted directed Graph. The Graph is represented as adjancency matrix, and the matrix denotes the weight of the edegs (if it exists) else -1. <strong style="user-select: auto;">Do it in-place.</strong></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>matrix = {{0,25},{-1,0}}
<strong style="user-select: auto;">Output: </strong>{{0,25},{-1,0}}
<strong style="user-select: auto;">Explanation: </strong>The shortest distance between
every pair is already given(if it exists).</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>matrix = {{0,1,43},{1,0,6},{-1,-1,0}}
<strong style="user-select: auto;">Output: </strong>{{0,1,7},{1,0,6},{-1,-1,0}}
<strong style="user-select: auto;">Explanation: </strong>We can reach 3 from 1 as 1-&gt;2-&gt;3
and the cost will be 1+6=7 which is less than 
43.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read, return or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">shortest_distance()&nbsp;</strong>which takes the matrix as input parameter and modify the distances for every pair in-place.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n<sup style="user-select: auto;">3</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Compelxity:&nbsp;</strong>O(1)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>