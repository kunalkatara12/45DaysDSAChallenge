/*
Link: https://practice.geeksforgeeks.org/problems/subset-sums2234/1
Problem: Subset Sums
Level: Medium
Statement: Given a list arr of N integers, print sums of all subsets in it.

Example 1:

Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then
Sum = 2+3 = 5.
Example 2:

Input:
N = 3
arr = {5, 2, 1}
Output:
0 1 2 3 5 6 7 8
Your Task:
You don't need to read input or print anything. Your task is to complete the function subsetSums() which takes a list/vector and an integer N as an input parameter and return the list/vector of all the subset sums.

Expected Time Complexity: O(2N)
Expected Auxiliary Space: O(2N)

Constraints:
1 <= N <= 15
0 <= arr[i] <= 104
*/

#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &res, vector<int> arr, int n, int sum, int i)
{
    if (i == n)
    {
        res.push_back(sum);
        return;
    }
    helper(res, arr, n, sum + arr[i], i + 1);//pick
    helper(res, arr, n, sum, i + 1);//not pick
}
vector<int> subsetSums(vector<int> arr, int n)
{
    vector<int> res;
    int sum = 0, i = 0;

    helper(res, arr, n, sum, i);
    sort(res.begin(), res.end());
    return res;
}