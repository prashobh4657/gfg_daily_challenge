// Question Link : https://practice.geeksforgeeks.org/problems/finding-profession3834/1

/*
Approach 1 : Using exactly same concept/observation of Leetcode question kth symbol in grammar : https://leetcode.com/problems/k-th-symbol-in-grammar/
See Submission : 2022-06-24 06:44:59	RunTime Error	Cpp	4/10004
 ==> Logically this submission is correct;

 But for testcase like : 90129249 89439592
 Here we can't calculate that pow(2,level-1) ==> out of INT range (even long long will fail) hence this submission gave run-time error;


Approach 2 : See method 1 in this article : https://www.geeksforgeeks.org/find-profession-in-a-hypothetical-special-situation/
See Submission : 2022-06-24 07:14:21	RunTime Error	Cpp	4/10004
 ==> Logically this submission is correct;
 But for larger testcases
 (actually that larger testcase just go like   (9000000000004,4)==>(9000000000003,4)==>(9000000000002,2)==>(9000000000001,1)==>(9000000000000,1)==>(899999999999,1)===> (untill level becomes,1) (Position will be 1 as (1+1)/2=1) (But we know pos=1 is always 'e' hence don't upto level-1);
See Submission : 2022-06-24 07:21:46	Correct	Cpp	10004/10004
 ==> Just put a condition like this if(pos==1)return 'e' (No need to go upto level=1); (Important optimisation) for testcases like : (for this test case : 970889615 201184807)



Approach 3 : See method 2 in this article :  https://www.geeksforgeeks.org/find-profession-in-a-hypothetical-special-situation/
(Excepted time complexity (O(logn) approach);
   V.important observation,
 ==> Read carefully : Level input isn’t necessary (if we ignore max position limit) because first elements are same.
     The result is based on count of 1’s in binary representation of position minus one.
     If count of 1’s is even then result is Engineer, else then Doctor.

Level 1: E
Level 2: ED          ==> position = 1 = (1 bit)   , position = 2 = 10
Level 3: EDDE        ==>  001,010,011,100
Level 4: EDDEDEED
Level 5: EDDEDEEDDEEDEDDE

See Submission : 2022-06-24 07:35:38	Correct	Cpp	10004/10004 
*/
