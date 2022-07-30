<h2><a href="https://leetcode.com/problems/word-subsets/">916. Word Subsets</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two string arrays <code style="user-select: auto;">words1</code> and <code style="user-select: auto;">words2</code>.</p>

<p style="user-select: auto;">A string <code style="user-select: auto;">b</code> is a <strong style="user-select: auto;">subset</strong> of string <code style="user-select: auto;">a</code> if every letter in <code style="user-select: auto;">b</code> occurs in <code style="user-select: auto;">a</code> including multiplicity.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">"wrr"</code> is a subset of <code style="user-select: auto;">"warrior"</code> but is not a subset of <code style="user-select: auto;">"world"</code>.</li>
</ul>

<p style="user-select: auto;">A string <code style="user-select: auto;">a</code> from <code style="user-select: auto;">words1</code> is <strong style="user-select: auto;">universal</strong> if for every string <code style="user-select: auto;">b</code> in <code style="user-select: auto;">words2</code>, <code style="user-select: auto;">b</code> is a subset of <code style="user-select: auto;">a</code>.</p>

<p style="user-select: auto;">Return an array of all the <strong style="user-select: auto;">universal</strong> strings in <code style="user-select: auto;">words1</code>. You may return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["e","o"]
<strong style="user-select: auto;">Output:</strong> ["facebook","google","leetcode"]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> words1 = ["amazon","apple","facebook","google","leetcode"], words2 = ["l","e"]
<strong style="user-select: auto;">Output:</strong> ["apple","google","leetcode"]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words1.length, words2.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words1[i].length, words2[i].length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words1[i]</code> and <code style="user-select: auto;">words2[i]</code> consist only of lowercase English letters.</li>
	<li style="user-select: auto;">All the strings of <code style="user-select: auto;">words1</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>