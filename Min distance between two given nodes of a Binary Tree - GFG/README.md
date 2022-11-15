# Min distance between two given nodes of a Binary Tree
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a&nbsp;binary tree&nbsp;and two node&nbsp;values your task is to find the minimum distance between them.<br style="user-select: auto;">
The given two nodes are guaranteed to be in the binary tree and nodes are numbered from 1 to N.<br style="user-select: auto;">
Please Note&nbsp;that a and b are not always leaf node.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
&nbsp;       </strong>1
&nbsp;     /  \
&nbsp;    2    3
a = 2, b = 3<strong style="user-select: auto;">
</strong><strong style="user-select: auto;">Output: </strong>2<strong style="user-select: auto;">
Explanation: </strong>The tree formed is:
&nbsp; &nbsp; &nbsp;  1
&nbsp; &nbsp; &nbsp;/&nbsp; &nbsp;\&nbsp;
&nbsp;  &nbsp;2&nbsp; &nbsp; &nbsp;3
We need the distance between 2 and 3.
Being at node 2, we need to take two
steps ahead in order to reach node 3.
The path followed will be:
2 -&gt; 1 -&gt; 3. Hence, the result is 2.&nbsp;</span></pre>

<p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findDist()&nbsp;</strong>which takes the <strong style="user-select: auto;">root </strong>node of the Tree and the two node values <strong style="user-select: auto;">a</strong> and <strong style="user-select: auto;">b</strong>&nbsp;as input parameters&nbsp;and returns the minimum distance between the nodes represented by the two given node values.</span></p>

<p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p dir="ltr" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 &lt;= Data of a node &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
</div>