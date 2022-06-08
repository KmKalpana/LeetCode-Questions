# Zero Sum Subarrays
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an array arr[] of size n. Find&nbsp;the total count of sub-arrays having their sum equal to 0.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 6
arr[] = {0,0,5,5,0,0}
<strong style="user-select: auto;">Output: </strong>6<strong style="user-select: auto;">
Explanation: </strong>The 6 subarrays are 
[0], [0], [0], [0], [0,0], and [0,0].</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 10
arr[] = {6,-1,-3,4,-2,2,4,6,-12,-7}
<strong style="user-select: auto;">Output: </strong>4<strong style="user-select: auto;">
Explanation: </strong>The 4 subarrays are [-1&nbsp;-3&nbsp;4]
[-2&nbsp;2], [2&nbsp;4&nbsp;6&nbsp;-12], and [-1&nbsp;-3&nbsp;4&nbsp;-2&nbsp;2]</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything.&nbsp;Complete the<strong style="user-select: auto;"> </strong>function <strong style="user-select: auto;">findSubarray()</strong>&nbsp;that takes the&nbsp;array arr&nbsp;and its size n&nbsp;as input parameters<strong style="user-select: auto;">&nbsp;</strong>and returns the total number of sub-arrays with 0 sum.&nbsp;</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(n)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints: &nbsp; &nbsp;</strong><br style="user-select: auto;">
1&lt;= n &lt;= 10<sup style="user-select: auto;">7</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">10</sup> &lt;= arr<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">10</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>