<h2><a href="https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/">2134. Minimum Swaps to Group All 1's Together II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">swap</strong> is defined as taking two <strong style="user-select: auto;">distinct</strong> positions in an array and swapping the values in them.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">circular</strong> array is defined as an array where we consider the <strong style="user-select: auto;">first</strong> element and the <strong style="user-select: auto;">last</strong> element to be <strong style="user-select: auto;">adjacent</strong>.</p>

<p style="user-select: auto;">Given a <strong style="user-select: auto;">binary</strong> <strong style="user-select: auto;">circular</strong> array <code style="user-select: auto;">nums</code>, return <em style="user-select: auto;">the minimum number of swaps required to group all </em><code style="user-select: auto;">1</code><em style="user-select: auto;">'s present in the array together at <strong style="user-select: auto;">any location</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,0,1,1,0,0]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> Here are a few of the ways to group all the 1's together:
[0,<u style="user-select: auto;">0</u>,<u style="user-select: auto;">1</u>,1,1,0,0] using 1 swap.
[0,1,<u style="user-select: auto;">1</u>,1,<u style="user-select: auto;">0</u>,0,0] using 1 swap.
[1,1,0,0,0,0,1] using 2 swaps (using the circular property of the array).
There is no way to group all 1's together with 0 swaps.
Thus, the minimum number of swaps required is 1.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [0,1,1,1,0,0,1,1,0]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Here are a few of the ways to group all the 1's together:
[1,1,1,0,0,0,0,1,1] using 2 swaps (using the circular property of the array).
[1,1,1,1,1,0,0,0,0] using 2 swaps.
There is no way to group all 1's together with 0 or 1 swaps.
Thus, the minimum number of swaps required is 2.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,1,0,0,1]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> All the 1's are already grouped together due to the circular property of the array.
Thus, the minimum number of swaps required is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums[i]</code> is either <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>
</div>