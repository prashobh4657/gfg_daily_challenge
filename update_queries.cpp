// GFG Link : https://practice.geeksforgeeks.org/problems/a6528c893d4ab645ec6e0690c7982748385099c8/1
// Just see latest submission;
/*
Refer : Array manipulation (Hackerrank);
But this question is little different than that one.  (This is advanced version of that question);

In that question if query is [L,R,x] then we set a[L]=x and a[R+1]=-x so that we take prefix sum then a[L] to a[R] has effect of x and from R+1 onwards no effect of x.
Here consider for a[i] there is 32 bit array.
Let query [L,R,x]; then we can set a[L]=x (by updating proper bits in binary vector of a[L]) but we can't nullify its effect at a[R+1];


like if a[L][2] (2 means 3rd bit) = 1 then what should be the bit at a[R+1][2] to nullify this effect.
if 1 then 1|1=1 and if 1|0=1  (if we take prefix xor);

We will make that 32 bit array of type int and actually store count. And because of that we can nullfiy that effect.
a[L][3]=2 (here 3 means 4th bit, here 2 means 2 times this position is set)
a[R+1][3]=-1 (here -1 denotes unset or negative number will denote unset)(even zero also);
*/