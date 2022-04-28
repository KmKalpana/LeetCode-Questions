# Level of a Node in Binary Tree
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Given a Binary Tree and a target key you need to find the level of target key in the given Binary Tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Note:</strong>&nbsp;The level of the root node is 1.</span></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 3
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; / &nbsp; \
&nbsp; &nbsp; &nbsp; &nbsp; 2 &nbsp; &nbsp; 5
&nbsp; &nbsp; &nbsp; / &nbsp; \
&nbsp;&nbsp; &nbsp; 1 &nbsp; &nbsp; 4
Key: 4
Level: 3&nbsp;&nbsp;</span></pre>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> if no such key exists then return 0.</span></p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input:
&nbsp;       </strong>1
&nbsp;     /   \
&nbsp;    2     3
target = 4<strong style="user-select: auto;">
Output: </strong>0<strong style="user-select: auto;">
</strong></span>
</pre>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;">&nbsp;        3
&nbsp;      /   \
&nbsp;     2     5
&nbsp;   /   \
&nbsp;  1     4</span><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">
</strong>target = 4<strong style="user-select: auto;">
Output: </strong>3</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">&nbsp;You don't have to take input. Just complete the <strong style="user-select: auto;">function getLevel()&nbsp;</strong>that takes <strong style="user-select: auto;">a node and a target </strong>as <strong style="user-select: auto;">parameters </strong>and returns&nbsp;the level of the target value.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(H).<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong> H is the height of the tree and this space is used implicitly for recursion stack.</span></p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= Number of nodes&lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= Data of a node&lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= Target &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>