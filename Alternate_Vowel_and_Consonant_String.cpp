// Question Link : https://practice.geeksforgeeks.org/problems/alternate-vowel-and-consonant-string2939/1
// Submission 1 : 2022-12-04 11:54:34	Time Limit Exceeded	cpp	1016 / 1023
    /*
    ==> Vowel, consonant are strings all characters which are vowel,consonant in the string s respectively.
    ==> Space complexity : O(v+c) = O(n) where v=vowel.size() and c=consonant.size();
    ==> Time complexity : O(nlogn) (Sorting of both vowel,consonant strings);
    */
// Submission 2 : 2022-12-04 12:38:34	Correct	cpp	1023 / 1023
   /*
    ==> See the way in which vowel and consonant string constructed (using frequency array). (The constructed strings are already sorted);
        After construction of vowel and consonant string rest of the code is same in both submissions.
    ==> Space complexity : O(2*26);
    ==> Time complexity : O(n);
   */
