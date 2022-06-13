/*
Question Link : https://practice.geeksforgeeks.org/problems/string-formation-from-substring2734/1

==> Approach 1 : Brute force (TLE)
    Submission : 2022-06-13 18:37:04	Time Limit Exceeded

       ->In that substring size should be < s.size() (If substring = string then that is not acceptable)
       ->create all substring of size i (first i characters)
       ->Check if this substring appended p.size() times then will it make string s or not.
==> Approach 2 : Little optimisation (Accepted)
    Submission : 2022-06-13 18:44:16	Correct
       ->Checking only if p.size() is divisible by s.size();

==> Approach 3 : https://www.geeksforgeeks.org/find-given-string-can-represented-substring-iterating-substring-n-times/
(approach 3 i haven't coded till now) (later code by this approach also and submit on gfg and update this file )
*/