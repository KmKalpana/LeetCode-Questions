# Coin Change
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an integer&nbsp;array <strong style="user-select: auto;">coins[ ] of size N&nbsp;</strong>representing different denominations of currency and an integer <strong style="user-select: auto;">sum</strong>, find the number of ways you can make <strong style="user-select: auto;">sum</strong> by using different combinations from coins[ ]. &nbsp;<br style="user-select: auto;">
Note: Assume that you have an infinite supply of each type of coin.&nbsp; </span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
sum = 4 , 
N = 3
coins[] = {1,2,3}
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation</strong>: Four Possible ways are:
{1,1,1,1},{1,1,2},{2,2},{1,3}.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
Sum = 10 , 
N = 4
coins[] ={2,5,3,6}
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation</strong>: Five Possible ways are:
{2,2,2,2,2}, {2,2,3,3}, {2,2,6}, {2,3,5} 
and {5,5}.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">count()&nbsp;</strong>which accepts an array coins<strong style="user-select: auto;">[ ] its size N&nbsp;and sum</strong>&nbsp;as input parameters and returns the number of ways to make change for given sum of money.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(sum*N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(sum)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= sum, N&nbsp;&lt;= 10<sup style="user-select: auto;">3</sup></span></p>
</div>