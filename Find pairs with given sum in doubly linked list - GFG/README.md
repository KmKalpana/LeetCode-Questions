# Find pairs with given sum in doubly linked list
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in a doubly-linked list whose sum is equal to given value <strong style="user-select: auto;">target</strong>.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:  </strong></span>
<span style="font-size: 18px; user-select: auto;">1 &lt;-&gt; 2 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 8 &lt;-&gt; 9</span>
<span style="font-size: 18px; user-select: auto;">target = 7</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output: </strong>(1, 6), (2,5)</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation: </strong>We can see that there are two pairs </span>
<span style="font-size: 18px; user-select: auto;">(1, 6) and (2,5) with sum 7.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input: </span></strong>
<span style="font-size: 18px; user-select: auto;">1 &lt;-&gt; 5 &lt;-&gt; 6</span>
<span style="font-size: 18px; user-select: auto;">target = 6</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output: </span></strong><span style="font-size: 18px; user-select: auto;">(1,5)
<strong style="user-select: auto;">Explanation: </strong>We can see that there is one pairs </span> <span style="font-size: 18px; user-select: auto;">(1, 5) with sum 6.
</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findPairsWithGivenSum()&nbsp;</strong>which takes head node of the doubly linked list and an integer target&nbsp;as input parameter and returns an array of pairs. If there is no such pair&nbsp;return&nbsp;empty array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= target&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup></span></p>
</div>