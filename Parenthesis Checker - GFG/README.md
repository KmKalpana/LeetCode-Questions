# Parenthesis Checker
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an expression string <strong style="user-select: auto;">x</strong>. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.<br style="user-select: auto;">
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
{([])}
<strong style="user-select: auto;">Output</strong>: 
true
<strong style="user-select: auto;">Explanation</strong>: 
<span style="color: rgb(255, 0, 0); user-select: auto;">{</span> <span style="color: rgb(0, 255, 0); user-select: auto;">(</span> <span style="color: rgb(0, 0, 205); user-select: auto;">[</span> <span style="color: rgb(0, 0, 205); user-select: auto;">]</span> <span style="color: rgb(0, 255, 0); user-select: auto;">)</span> <span style="color: rgb(255, 0, 0); user-select: auto;">}.&nbsp;</span><span style="color: rgb(0, 0, 0); user-select: auto;">Same colored brackets can form 
balaced pairs, with 0 number of 
unbalanced bracket.</span>
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
()
<strong style="user-select: auto;">Output</strong>: 
true
<strong style="user-select: auto;">Explanation</strong>: 
<span style="color: rgb(0, 255, 0); user-select: auto;">()</span><span style="color: rgb(0, 0, 0); user-select: auto;">. Same bracket can form balanced pairs, 
and here only 1 type of bracket is 
present and in balanced way.</span></span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
([]
<strong style="user-select: auto;">Output</strong>: 
false
<strong style="user-select: auto;">Explanation</strong>: 
<span style="color: rgb(0, 255, 0); user-select: auto;">(</span><span style="color: rgb(0, 0, 205); user-select: auto;">[]</span>.<span style="color: rgb(0, 0, 0); user-select: auto;"> Here square bracket is balanced but 
the small bracket is not balanced and 
Hence , the output will be unbalanced.</span></span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a <strong style="user-select: auto;">function </strong>problem. You only need to complete the function <strong style="user-select: auto;">ispar()&nbsp;</strong>that takes a&nbsp;<strong style="user-select: auto;">string </strong>as a&nbsp;<strong style="user-select: auto;">parameter </strong>and returns a boolean value&nbsp;<strong style="user-select: auto;">true </strong>if <strong style="user-select: auto;">brackets </strong>are <strong style="user-select: auto;">balanced </strong>else <strong style="user-select: auto;">returns false</strong>. The <strong style="user-select: auto;">printing </strong>is done <strong style="user-select: auto;">automatically </strong>by the <strong style="user-select: auto;">driver code</strong>.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(|x|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auixilliary Space</strong>: O(|x|)</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ |x| ≤ </span><span style="font-size: 18px; user-select: auto;">32000</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note</strong>: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".</span></p>
</div>