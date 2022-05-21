<h2><a href="https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/">1464. Maximum Product of Two Elements in an Array</a></h2><h3>Easy</h3><hr><div style="user-select: auto;">Given the array of integers <code style="user-select: auto;">nums</code>, you will choose two different indices <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> of that array. <em style="user-select: auto;">Return the maximum value of</em> <code style="user-select: auto;">(nums[i]-1)*(nums[j]-1)</code>.
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,4,5,2]
<strong style="user-select: auto;">Output:</strong> 12 
<strong style="user-select: auto;">Explanation:</strong> If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,5,4,5]
<strong style="user-select: auto;">Output:</strong> 16
<strong style="user-select: auto;">Explanation:</strong> Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,7]
<strong style="user-select: auto;">Output:</strong> 12
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10^3</code></li>
</ul>
</div>