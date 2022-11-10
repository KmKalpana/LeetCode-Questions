# 0 - 1 Knapsack Problem
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given weights and values of <strong style="user-select: auto;">N</strong> items, put these items in a knapsack of capacity <strong style="user-select: auto;">W</strong> to get the maximum total value in the knapsack. Note that we have only <strong style="user-select: auto;">one quantity of each item</strong>.<br style="user-select: auto;">
In other words, given two integer arrays <strong style="user-select: auto;">val[0..N-1]</strong> and <strong style="user-select: auto;">wt[0..N-1]</strong> which represent values and weights associated with <strong style="user-select: auto;">N</strong> items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of <strong style="user-select: auto;">val[]</strong> such that sum of the weights of this subset is smaller than or equal to <strong style="user-select: auto;">W.</strong> You cannot break an item, <strong style="user-select: auto;">either pick the complete item or dont pick it (0-1 property)</strong>.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
<strong style="user-select: auto;">Output: </strong>3</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">N = 3
W = 3
values[] = {1,2,3}
weight[] = {4,5,6}
<strong style="user-select: auto;">Output: </strong>0</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function&nbsp;<strong style="user-select: auto;">knapSack()</strong>&nbsp;which takes maximum capacity W, weight array wt[], value array val[], and the number of items n as a parameter and returns the&nbsp;<strong style="user-select: auto;">maximum possible</strong>&nbsp;value you can get.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*W).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N*W)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ N ≤ 1000</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ W ≤ 1000</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ wt[i] ≤ 1000</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ v[i] ≤ 1000</span></p>
</div>