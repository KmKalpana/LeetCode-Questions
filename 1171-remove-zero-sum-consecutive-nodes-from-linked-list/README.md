<h2><a href="https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/">1171. Remove Zero Sum Consecutive Nodes from Linked List</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">head</code> of a linked list, we repeatedly delete consecutive sequences of nodes that sum to <code style="user-select: auto;">0</code> until there are no such sequences.</p>

<p style="user-select: auto;">After doing so, return the head of the final linked list.&nbsp; You may return any such answer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;">(Note that in the examples below, all sequences are serializations of <code style="user-select: auto;">ListNode</code> objects.)</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,-3,3,1]
<strong style="user-select: auto;">Output:</strong> [3,1]
<strong style="user-select: auto;">Note:</strong> The answer [1,2,1] would also be accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,-3,4]
<strong style="user-select: auto;">Output:</strong> [1,2,4]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,-3,-2]
<strong style="user-select: auto;">Output:</strong> [1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The given linked list will contain between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">1000</code> nodes.</li>
	<li style="user-select: auto;">Each node in the linked list has <code style="user-select: auto;">-1000 &lt;= node.val &lt;= 1000</code>.</li>
</ul>
</div>