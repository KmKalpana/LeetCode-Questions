# Check whether K-th bit is set or not
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a number <strong style="user-select: auto;">N </strong>and a bit number <strong style="user-select: auto;">K</strong>, check if <strong style="user-select: auto;">K<sup style="user-select: auto;">th</sup></strong> bit of N is <strong style="user-select: auto;">set or not</strong>. A bit is called set if it is 1. Position of set bit&nbsp;'1' should be <strong style="user-select: auto;">indexed starting with 0</strong>&nbsp;from <strong style="user-select: auto;">LSB </strong>side in&nbsp;binary representation of the number.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 4, K = 0
<strong style="user-select: auto;">Output</strong>: No
<strong style="user-select: auto;">Explanation</strong>: Binary representation of 4 is 100, 
in which 0<sup style="user-select: auto;">th</sup> bit from LSB is not set. 
So, return false.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 4, K = 2
<strong style="user-select: auto;">Output</strong>: Yes
<strong style="user-select: auto;">Explanation</strong>: Binary representation of 4 is 100, 
in which 2<sup style="user-select: auto;">nd</sup> bit from LSB is set. 
So, return true.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 3:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: N = 500, K = 3
<strong style="user-select: auto;">Output</strong>: No
<strong style="user-select: auto;">Explanation</strong>: Binary representation of 500&nbsp;is 
111110100, in which 3rd bit from LSB is not set. 
So, return false.</span></pre>

<div style="user-select: auto;"><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your task:</span></strong></div>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You don't have to read input or print anything. Your task is&nbsp;to complete the <strong style="user-select: auto;">function checkKthbit </strong>that takes <strong style="user-select: auto;">n and k as parameters</strong> and <strong style="user-select: auto;">returns </strong>either <strong style="user-select: auto;">true </strong>(if kth bit is set) or <strong style="user-select: auto;">false</strong>(if kth bit is not set).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(LogN).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
0 ≤ K ≤ floor(log<sub style="user-select: auto;">2</sub>(N) + 1)</span></div>
</div>