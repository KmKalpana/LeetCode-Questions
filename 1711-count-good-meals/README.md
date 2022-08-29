<h2><a href="https://leetcode.com/problems/count-good-meals/">1711. Count Good Meals</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A <strong style="user-select: auto;">good meal</strong> is a meal that contains <strong style="user-select: auto;">exactly two different food items</strong> with a sum of deliciousness equal to a power of two.</p>

<p style="user-select: auto;">You can pick <strong style="user-select: auto;">any</strong> two different foods to make a good meal.</p>

<p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">deliciousness</code> where <code style="user-select: auto;">deliciousness[i]</code> is the deliciousness of the <code style="user-select: auto;">i<sup style="user-select: auto;">​​​​​​th</sup>​​​​</code>​​​​ item of food, return <em style="user-select: auto;">the number of different <strong style="user-select: auto;">good meals</strong> you can make from this list modulo</em> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">Note that items with different indices are considered different even if they have the same deliciousness value.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> deliciousness = [1,3,5,7,9]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation: </strong>The good meals are (1,3), (1,7), (3,5) and, (7,9).
Their respective sums are 4, 8, 8, and 16, all of which are powers of 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> deliciousness = [1,1,1,3,3,3,7]
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation: </strong>The good meals are (1,1) with 3 ways, (1,3) with 9 ways, and (1,7) with 3 ways.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= deliciousness.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= deliciousness[i] &lt;= 2<sup style="user-select: auto;">20</sup></code></li>
</ul>
</div>