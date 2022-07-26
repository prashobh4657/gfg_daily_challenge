#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

int solution2(node *head) // Using O(1) space;
{
    // https://www.geeksforgeeks.org/length-longest-palindrome-list-linked-list-using-o1-extra-space/
    // Very good implementation;
    // I understood but write to write by yourself then submit to practice link given below in this cpp file;
}
int isPalindrome(vector<int> a, int i, int j, vector<vector<int>> &dp) // Taken from leetcode;
{
    if (i >= j)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (a[i] == a[j])
        return dp[i][j] = isPalindrome(a, i + 1, j - 1, dp);

    return dp[i][j] = 0;
}
int longestPalindrome(vector<int> a) // Taken from leetcode;
{
    int n = a.size();
    int mx = 0;
    string ans;
    vector<vector<int>> dp(n, vector<int>(n, -1)); // dp[i][j] denotes whether subarray from i to j is palindrome or not;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (isPalindrome(a, i, j, dp))
            {
                if (j - i + 1 > mx)
                {
                    mx = j - i + 1;
                    // ans = a.substr(i, j - i + 1);
                }
            }
        }
    }
    // return ans;
    return mx;
}
int solution1(node *head) // Using extra Space;  (Using idea of Leetcode question = Longest palindromic substring);
{
    vector<int> p;
    node *temp = head;
    while (temp != NULL)
    {
        p.push_back(temp->data);
        temp = temp->next;
    }
    return longestPalindrome(p);
}
int32_t main()
{
    fio;
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << longestPalindrome(a) << endl; // Here just passing array a to directly longestPalindrome (also you can create linkedlist using array "a" then pass it to function solution1);
        t--;
    }
    return 0;
}

// Concepts :
/* Longest Palindromic Substring/Subarray : https://leetcode.com/problems/longest-palindromic-substring/ */

// GFG Practice Link : https://practice.geeksforgeeks.org/problems/length-of-longest-palindrome-in-linked-list/1
// See Submission (Using extra space) : 2022-07-26 09:07:42	Correct	cpp	101 / 101	View 