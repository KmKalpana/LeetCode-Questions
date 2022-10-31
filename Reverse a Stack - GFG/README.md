# Reverse a Stack
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given a stack <strong style="user-select: auto;">St</strong>. You have to reverse the stack using recursion.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">St = {3,2,1,7,6}</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">{6,7,1,2,3}</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:</span></strong>
<span style="font-size: 18px; user-select: auto;">St = {4,3,9,6}</span>
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Output:</span></strong>
<span style="font-size: 18px; user-select: auto;">{6,9,3,4}</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">Reverse()</strong>&nbsp;which takes the stack&nbsp;<strong style="user-select: auto;">St</strong><strong style="user-select: auto;">&nbsp;</strong>as input&nbsp;and returns the reversed stack.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= size of the stack &lt;= 10<sup style="user-select: auto;">4</sup></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">-10</span><sup style="user-select: auto;">9</sup><span style="font-size: 18px; user-select: auto;"> &lt;= Each element of the stack &lt;= 10</span><sup style="user-select: auto;">9</sup><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Sum of N over all test cases doesn't exceeds 10</span><sup style="user-select: auto;">6</sup><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Array may contain duplicate elements.&nbsp;</span></p>
</div>