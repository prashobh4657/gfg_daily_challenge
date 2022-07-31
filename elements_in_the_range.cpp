// https://practice.geeksforgeeks.org/problems/elements-in-the-range2834/1 
// See Submission : 2022-07-31 09:06:05	Correct	cpp	530 / 530	View (Approach 2 as per article);
/*
See Article : https://www.geeksforgeeks.org/check-if-an-array-contains-all-elements-of-a-given-range/ 
3 approaches discussed.

Approach 3 (Time:O(n), Space:O(1)) : 
==>Algorithm
 Let range=B-A;
 1. do a linear traversal of the array. If element a[i]>=A and a[i]<=B then 
 if (arr[i]-A)>0
 arr[arr[i]-A]=arr[arr[i]-A]*-1;
 2. Now traverse from i=0 to i=range;
 if(a[i]>0)return false;
 else count++;
 if(count!=(range+1))return false;
 return true;
*/  //also submit using approach 3 later (i understood (tricky appraoch)
