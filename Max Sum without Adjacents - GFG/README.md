# Max Sum without Adjacents
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">Arr&nbsp;</strong>of size <strong style="user-select: auto;">N</strong>&nbsp;containing&nbsp;positive integers. Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
Arr[] = {5, 5, 10, 100, 10, 5}
<strong style="user-select: auto;">Output:</strong> 110
<strong style="user-select: auto;">Explanation:</strong> If you take indices 0, 3
and 5, then Arr[0]+Arr[3]+Arr[5] =
5+100+5 = 110.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
Arr[] = {3, 2, 7, 10}
<strong style="user-select: auto;">Output:</strong> 13
<strong style="user-select: auto;">Explanation: </strong>3 and 10 forms a non
continuous  subsequence with maximum
sum.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findMaxSum()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong style="user-select: auto;">arr&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">n</strong><strong style="user-select: auto;">&nbsp;</strong>as parameters and returns an integer denoting the answer.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 ≤ Arr<sub style="user-select: auto;">i</sub> ≤ 10<sup style="user-select: auto;">7</sup></span></p>
</div>