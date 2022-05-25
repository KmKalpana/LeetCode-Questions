# Subset Sum Problem
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array of non-negative integers, and a value <em style="user-select: auto;">sum</em>, determine if there is a subset of the given set with sum equal to given <em style="user-select: auto;">sum</em>.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong></span>:
<span style="font-size: 18px; user-select: auto;">N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
<strong style="user-select: auto;">Output:</strong>&nbsp;1&nbsp;
<strong style="user-select: auto;">Explanation</strong>: Here there exists a subset with
sum = 9, 4+3+2 = 9.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong></span>:
<span style="font-size: 18px; user-select: auto;">N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 30
<strong style="user-select: auto;">Output:</strong>&nbsp;0&nbsp;
<strong style="user-select: auto;">Explanation</strong>: There is no subset with sum 30.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">isSubsetSum()</strong>&nbsp;which takes the array arr[], its size N<strong style="user-select: auto;">&nbsp;</strong>and an integer <strong style="user-select: auto;">sum </strong>as input parameters&nbsp;and returns boolean value true if there exists a subset with given sum and false otherwise.<br style="user-select: auto;">
The driver code itself prints 1, if returned value is true and prints 0 if returned value is false.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(sum*N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(sum*N)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 100</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1&lt;= arr[i] &lt;= 100<br style="user-select: auto;">
1&lt;= sum &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>