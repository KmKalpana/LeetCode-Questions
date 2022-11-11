# Knapsack with Duplicate Items
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a set of <strong style="user-select: auto;">N</strong> items, each with a weight and a value, represented by the array <strong style="user-select: auto;">w[]</strong>&nbsp;and&nbsp;<strong style="user-select: auto;">val[]</strong>&nbsp;respectively.&nbsp;Also, a knapsack with weight limit <strong style="user-select: auto;">W</strong>.<br style="user-select: auto;">
The task is to fill the knapsack in such a way that we can get the maximum profit. Return the maximum profit.<br style="user-select: auto;">
Note: Each item can be taken any number of times.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 2, W = 3
val[] = {1, 1}
wt[] = {2, 1}
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> 
1.Pick the 2nd element thrice.
2.Total profit = 1 + 1 + 1 = 3. Also the total 
 &nbsp;weight = 1 + 1 + 1  = 3 which is &lt;= W.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 4, W = 8
val[] = {1, 4, 5, 7}
wt[] = {1, 3, 4, 5}
<strong style="user-select: auto;">Output:</strong> 11
<strong style="user-select: auto;">Explanation:</strong> The optimal choice is to 
pick the 2nd and 4th element.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input&nbsp;or print anything. Your task is to complete the function <strong style="user-select: auto;">knapSack()</strong> which takes the values N, W and the arrays val[] and wt[] as input parameters and returns the maximum possible&nbsp;value.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N*W)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space: </strong>O(W)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N, W ≤ 1000<br style="user-select: auto;">
1 ≤ val[i], wt[i] ≤ 100</span></p>
</div>