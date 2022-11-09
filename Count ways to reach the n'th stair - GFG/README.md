# Count ways to reach the n'th stair
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There are<strong style="user-select: auto;"> n</strong> stairs, a person standing at the bottom wants to reach the top. The person can climb either <strong style="user-select: auto;">1 stair or 2 stairs at a time</strong>. Count the number of ways, the person can reach the top (<strong style="user-select: auto;">order does matter</strong>).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 4
<strong style="user-select: auto;">Output: </strong>5<strong style="user-select: auto;">
Explanation:
</strong>You can reach 4th stair in 5 ways.</span> 
<span style="font-size: 18px; user-select: auto;">Way 1: Climb 2 stairs at a time. </span>
<span style="font-size: 18px; user-select: auto;">Way 2: Climb 1 stair at a time.</span>
<span style="font-size: 18px; user-select: auto;">Way 3: Climb 2 stairs, then 1 stair
and then 1 stair.</span>
<span style="font-size: 18px; user-select: auto;">Way 4: Climb 1 stair, then 2 stairs
then 1 stair.</span>
<span style="font-size: 18px; user-select: auto;">Way 5: Climb 1 stair, then 1 stair and
then 2 stairs.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 10
<strong style="user-select: auto;">Output: </strong>89 
<strong style="user-select: auto;">Explanation: </strong>
There are 89 ways to reach the 10th stair.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function&nbsp;<strong style="user-select: auto;">countWays()</strong>&nbsp;which takes the top stair number m as input parameters&nbsp;and returns the answer&nbsp;<strong style="user-select: auto;">% 10^9+7</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space</strong>: O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n ≤ 10<sup style="user-select: auto;">4</sup></span></p>
</div>