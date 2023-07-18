//https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
     if(s1.size()!=s2.size())
        return false;
        int p=-1;
        string s3= s1+s1;
        p=s3.find(s2);
        if(p>=0)
        return true;
        return false;
    }
};
