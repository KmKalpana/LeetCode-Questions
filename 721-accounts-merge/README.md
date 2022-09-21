<h2><a href="https://leetcode.com/problems/accounts-merge/">721. Accounts Merge</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a list of <code style="user-select: auto;">accounts</code> where each element <code style="user-select: auto;">accounts[i]</code> is a list of strings, where the first element <code style="user-select: auto;">accounts[i][0]</code> is a name, and the rest of the elements are <strong style="user-select: auto;">emails</strong> representing emails of the account.</p>

<p style="user-select: auto;">Now, we would like to merge these accounts. Two accounts definitely belong to the same person if there is some common email to both accounts. Note that even if two accounts have the same name, they may belong to different people as people could have the same name. A person can have any number of accounts initially, but all of their accounts definitely have the same name.</p>

<p style="user-select: auto;">After merging the accounts, return the accounts in the following format: the first element of each account is the name, and the rest of the elements are emails <strong style="user-select: auto;">in sorted order</strong>. The accounts themselves can be returned in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> accounts = [["John","johnsmith@mail.com","john_newyork@mail.com"],["John","johnsmith@mail.com","john00@mail.com"],["Mary","mary@mail.com"],["John","johnnybravo@mail.com"]]
<strong style="user-select: auto;">Output:</strong> [["John","john00@mail.com","john_newyork@mail.com","johnsmith@mail.com"],["Mary","mary@mail.com"],["John","johnnybravo@mail.com"]]
<strong style="user-select: auto;">Explanation:</strong>
The first and second John's are the same person as they have the common email "johnsmith@mail.com".
The third John and Mary are different people as none of their email addresses are used by other accounts.
We could return these lists in any order, for example the answer [['Mary', 'mary@mail.com'], ['John', 'johnnybravo@mail.com'], 
['John', 'john00@mail.com', 'john_newyork@mail.com', 'johnsmith@mail.com']] would still be accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> accounts = [["Gabe","Gabe0@m.co","Gabe3@m.co","Gabe1@m.co"],["Kevin","Kevin3@m.co","Kevin5@m.co","Kevin0@m.co"],["Ethan","Ethan5@m.co","Ethan4@m.co","Ethan0@m.co"],["Hanzo","Hanzo3@m.co","Hanzo1@m.co","Hanzo0@m.co"],["Fern","Fern5@m.co","Fern1@m.co","Fern0@m.co"]]
<strong style="user-select: auto;">Output:</strong> [["Ethan","Ethan0@m.co","Ethan4@m.co","Ethan5@m.co"],["Gabe","Gabe0@m.co","Gabe1@m.co","Gabe3@m.co"],["Hanzo","Hanzo0@m.co","Hanzo1@m.co","Hanzo3@m.co"],["Kevin","Kevin0@m.co","Kevin3@m.co","Kevin5@m.co"],["Fern","Fern0@m.co","Fern1@m.co","Fern5@m.co"]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= accounts.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= accounts[i].length &lt;= 10</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= accounts[i][j].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">accounts[i][0]</code> consists of English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">accounts[i][j] (for j &gt; 0)</code> is a valid email.</li>
</ul>
</div>