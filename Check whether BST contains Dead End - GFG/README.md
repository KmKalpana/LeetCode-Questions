# Check whether BST contains Dead End
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Given a&nbsp;<a href="http://quiz.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/" target="_blank" style="user-select: auto;">Binary search Tree</a>&nbsp;that contains positive integer values greater then 0. The task is to complete the function <strong style="user-select: auto;">isDeadEnd</strong> which returns true if&nbsp;the BST contains a dead end else returns false. Here Dead End means, we are not able to insert any element after that node.</span></p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Examples:</span></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Input :   
&nbsp;              8
             /   \ 
           5      9
         /  \     
        2    7 
       /
      1     
          
Output : Yes
Explanation : Node "1" is the dead End because after that 
&nbsp;             we cant insert any element.       

</span></pre>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Input :     
&nbsp;             8
            /   \ 
           7     10
         /      /   \
        2      9     13

Output : Yes
Explanation : We can't insert any element at 
              node 9.  </span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
The first line of the input contains an integer 'T' denoting&nbsp;the number of test cases. Then 'T' test cases follow. Each test case consists of three&nbsp;lines.&nbsp;First line of each test case contains an integer N denoting the no of nodes of the BST&nbsp;. Second line of each test case consists of 'N' space separated integers denoting the elements of the BST. These elements are inserted into BST in the given order.<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
The output for each test case will be 1 if the BST contains a dead end else 0.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=T&lt;=100<br style="user-select: auto;">
1&lt;=N&lt;=200</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example(To be used only for expected output):</strong><br style="user-select: auto;">
<strong style="user-select: auto;">Input:</strong><br style="user-select: auto;">
2<br style="user-select: auto;">
6<br style="user-select: auto;">
8 5 9 7 2 1<br style="user-select: auto;">
6<br style="user-select: auto;">
8 7 10 9 13 2<br style="user-select: auto;">
<strong style="user-select: auto;">Output:</strong><br style="user-select: auto;">
1<br style="user-select: auto;">
1</span></p>
 <p style="user-select: auto;"></p>
            </div>