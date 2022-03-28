# Tree from Postorder and Inorder
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given <strong style="user-select: auto;">inorder </strong>and <strong style="user-select: auto;">postorder</strong> traversals of a Binary Tree in the arrays <strong style="user-select: auto;">in[]</strong> and <strong style="user-select: auto;">post[]</strong> respectively. The task is to construct the binary tree from these traversals.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 8
in[] = 4 8 2 5 1 6 3 7
post[] =8 4 5 2 6 7 3 1
<strong style="user-select: auto;">Output: </strong>1 2 4 8 5 3 6 7<strong style="user-select: auto;">
Explanation: </strong>For the given postorder and
inorder traversal of tree the&nbsp; resultant
binary tree will be
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  1
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; &nbsp;  \
&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;  3
&nbsp;&nbsp; /&nbsp; \      /  \
&nbsp; 4&nbsp;&nbsp;&nbsp; 5&nbsp;&nbsp;  6&nbsp;&nbsp;&nbsp; 7
&nbsp;&nbsp;&nbsp;\
&nbsp;&nbsp;&nbsp;&nbsp; 8</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
in[] = 9 5 2 3 4
post[] = 5 9 3 4 2
<strong style="user-select: auto;">Output: </strong>2 9 5 4 3<strong style="user-select: auto;">
Explanation: &nbsp;
</strong>the&nbsp; resultant binary tree will be
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;2
&nbsp; &nbsp; &nbsp; &nbsp; /&nbsp;  &nbsp; \
&nbsp; &nbsp; &nbsp;&nbsp; 9&nbsp; &nbsp; &nbsp;  4
       &nbsp;\     /
     &nbsp; &nbsp; 5   3</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything.&nbsp;Complete the function <strong style="user-select: auto;">buildTree() </strong>which takes the&nbsp;inorder, postorder traversals&nbsp;and the number of nodes in the tree as input parameters&nbsp;and returns the root node of the newly constructed Binary Tree.<br style="user-select: auto;">
<strong style="user-select: auto;">The generated output contains the&nbsp;preorder traversal of the constructed tree.</strong></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">3</sup><br style="user-select: auto;">
1 &lt;= in[i], post[i] &lt;= 10<sup style="user-select: auto;">3</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>