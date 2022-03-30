# Vertical Traversal of Binary Tree
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.<br style="user-select: auto;">
If there are multiple nodes passing through a vertical line, then they should be printed as they appear in <strong style="user-select: auto;">level order</strong> traversal of the tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
           1
         /   \
       2       3
     /   \   /   \
   4      5 6      7
              \      \
               8      9           
</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong>
4 2 1 5 6 3 8 7 9 
<strong style="user-select: auto;">Explanation:</strong></span>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/ScreenShot2021-05-28at3-1622541589.png" class="img-responsive" style="user-select: auto;">
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
&nbsp;      </strong>1
 &nbsp; &nbsp;/&nbsp;&nbsp;&nbsp; \
 &nbsp; 2&nbsp; &nbsp; &nbsp;  3
 /&nbsp;&nbsp;  \&nbsp; &nbsp; &nbsp;&nbsp;\
4&nbsp; &nbsp;  &nbsp;5&nbsp; &nbsp;  &nbsp;6
<strong style="user-select: auto;">Output: </strong>4 2 1 5 3 6<strong style="user-select: auto;">
</strong></span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">verticalOrder()&nbsp;</strong>which takes the root node as input parameter and returns an array containing&nbsp;the vertical order traversal of the tree from the leftmost to the rightmost level. If 2 nodes lie in the same vertical level, they should be printed in the order they appear in the level order traversal of the tree.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Number of nodes &lt;= 3*10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>