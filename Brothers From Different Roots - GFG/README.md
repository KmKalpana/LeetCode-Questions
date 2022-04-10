# Brothers From Different Roots
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two BSTs containing N<strong style="user-select: auto;">1</strong>&nbsp;and N<strong style="user-select: auto;">2</strong>&nbsp;distinct nodes respectively and given a value&nbsp;<strong style="user-select: auto;">x</strong>. Your task is to complete the function <strong style="user-select: auto;">countPairs()</strong>, that returns the&nbsp;count of all pairs from both the BSTs whose sum is equal to&nbsp;<strong style="user-select: auto;">x</strong>.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
<strong style="user-select: auto;">BST1:</strong>
&nbsp;      5
     /   \
&nbsp;   3     7
&nbsp;  / \   / \
  2   4 6   8

<strong style="user-select: auto;">BST2:</strong>
&nbsp;      10
&nbsp;    /    \
&nbsp;   6      15
&nbsp;  / \    /  \
&nbsp; 3   8  11   18

<strong style="user-select: auto;">x</strong> = 16
<strong style="user-select: auto;">Output:
</strong>3
<strong style="user-select: auto;">Explanation:
</strong>The pairs are: <strong style="user-select: auto;">(5, 11), (6, 10)</strong> and <strong style="user-select: auto;">(8, 8)</strong></span><span style="font-size: 18px; user-select: auto;">
</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
BST1:</strong>
  1
   \
    3
   /
  2
<strong style="user-select: auto;">BST2:
&nbsp;   </strong>3
&nbsp;  / \
&nbsp; 2   4
 /     
1

<strong style="user-select: auto;">x</strong> = 4
<strong style="user-select: auto;">Output:
</strong>3
<strong style="user-select: auto;">Explanation:</strong>
The pairs are: <strong style="user-select: auto;">(2, 2), (3, 1)</strong> and <strong style="user-select: auto;">(1, 3)</strong>
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">countPairs()</strong>, which takes 2 BST's as parameter in form of <strong style="user-select: auto;">root1</strong> and <strong style="user-select: auto;">root2</strong> and the integer <strong style="user-select: auto;">x</strong>,&nbsp;that returns the&nbsp;count of all pairs from both the BSTs whose sum is equal to&nbsp;<strong style="user-select: auto;">x</strong>.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ Number of nodes ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ Data of a node ≤ 10<sup style="user-select: auto;">6</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>