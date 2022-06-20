# Activity Selection
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given <strong style="user-select: auto;">N</strong>&nbsp;activities with their start and finish day given in array <strong style="user-select: auto;">start[ ]</strong> and <strong style="user-select: auto;">end[ ]</strong>. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note :&nbsp;</strong>Duration of the activity includes both starting and ending day.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 2
start[] = {2, 1}
end[] = {2, 2}
<strong style="user-select: auto;">Output: 
</strong>1<strong style="user-select: auto;">
Explanation:</strong>
A person can perform only one of the
given activities.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}
<strong style="user-select: auto;">Output: 
</strong>3<strong style="user-select: auto;">
Explanation:
</strong>A person can perform activities 1, 2
and 4.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task :</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <em style="user-select: auto;"><strong style="user-select: auto;">activityselection()</strong></em>&nbsp;which takes array&nbsp;<strong style="user-select: auto;">start[ ],</strong>&nbsp;array <strong style="user-select: auto;">end[ ]</strong> and integer&nbsp;<strong style="user-select: auto;">N</strong>&nbsp;as input parameters&nbsp;and returns&nbsp;the maximum number of activities that can be done.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong> : O(N * Log(N))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space </strong>: O(N)</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤&nbsp;2*10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤&nbsp;start[i] ≤&nbsp;end[i] ≤&nbsp;10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>