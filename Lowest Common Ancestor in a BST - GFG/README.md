# Lowest Common Ancestor in a BST
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Search Tree (with all values unique)&nbsp;and two node values. Find the Lowest Common Ancestors of the two nodes in the BST.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; 5
 &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp;/&nbsp; &nbsp; \
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;4&nbsp;&nbsp; &nbsp; &nbsp; 6
 &nbsp; &nbsp;   &nbsp;/&nbsp; &nbsp;&nbsp; &nbsp;  &nbsp;\
 &nbsp;    &nbsp;3&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;7
 &nbsp;&nbsp; &nbsp;  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  \
&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  &nbsp;&nbsp;&nbsp;8
n1 = 7, n2 = 8
<strong style="user-select: auto;">Output: </strong>7
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>     2
&nbsp;  /   \
&nbsp; 1     3
n1 = 1, n2 = 3
<strong style="user-select: auto;">Output: </strong>2
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">LCA()</strong>&nbsp;which takes the root Node of the BST and two integer values n1 and n2 as inputs and returns the Lowest Common Ancestor of the Nodes with values n1 and n2 in the given BST.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(Height of the BST).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(Height of the BST).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>