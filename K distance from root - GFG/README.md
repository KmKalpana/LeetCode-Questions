# K distance from root
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree of size <strong style="user-select: auto;">N</strong> and an integer&nbsp;<strong style="user-select: auto;">K</strong>. Print all nodes that are at distance k from root (root is considered at distance 0 from itself). Nodes should be printed from left to right. If k is more that height of tree, nothing should be printed.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For example, if below is given tree and k is 2. Output should be 4 5 6.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3<br style="user-select: auto;">
&nbsp;&nbsp; /&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp; 4&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 5&nbsp;&nbsp;&nbsp; 6&nbsp;<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 8</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 0
&nbsp;     1
&nbsp;   /   \
&nbsp;  3     2<strong style="user-select: auto;">
Output: </strong>1<strong style="user-select: auto;">
</strong></span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 3
&nbsp;       3
&nbsp;      /
&nbsp;     2
&nbsp;      \
&nbsp;       1
&nbsp;     /  \
&nbsp;    5    3<strong style="user-select: auto;">
Output: </strong>5 3</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't have to take input. Complete the function&nbsp;<strong style="user-select: auto;">Kdistance()&nbsp;</strong>that accepts&nbsp;<strong style="user-select: auto;">root</strong> node<strong style="user-select: auto;">&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">k&nbsp;</strong>as parameter and&nbsp;<strong style="user-select: auto;">return&nbsp;</strong>the&nbsp;<strong style="user-select: auto;">value&nbsp;</strong>of the&nbsp;<strong style="user-select: auto;">nodes&nbsp;</strong>that are at a distance k from the root. (The values are returned as vector in&nbsp;<strong style="user-select: auto;">cpp,&nbsp;</strong>as ArrayList in&nbsp;<strong style="user-select: auto;">java&nbsp;</strong>and list in python)</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">4</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">0 &lt;= K &lt;= 30</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 14px; user-select: auto;"><strong style="user-select: auto;">Note:</strong>&nbsp;The&nbsp;<strong style="user-select: auto;">Input/Ouput</strong>&nbsp;format and&nbsp;<strong style="user-select: auto;">Example </strong>is given&nbsp;are used for the system's internal purpose, and should be used by a user for&nbsp;<strong style="user-select: auto;">Expected Output</strong>&nbsp;only. As it is a function problem, hence a user should not read any input from the stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p style="user-select: auto;"></p>
            </div>