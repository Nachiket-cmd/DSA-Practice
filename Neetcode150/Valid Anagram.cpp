//My Solution TC- O(n) SC- O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int> res1;
        unordered_map<char,int>res2;
        for(int i=0;i<s.size();i++)
        {
            if(res1.find(s[i])!=res1.end())
            {
                res1[s[i]]++;
            }
            res1.insert({s[i],1});
        }
        for(int i=0;i<t.size();i++)
        {
            if(res2.find(t[i])!=res2.end())
            {
                res2[t[i]]++;
            }
            res2.insert({t[i],1});
        }
        if(res1 == res2)
        {
            return true;
        }
        return false;
    }
};

//Neetcode Logic
/* The first logic is exactly similar to mine.
  In the second logic, if we want to solve the question without taking extra space in O(1) SC, what we can do is sort both the strings and compare them with each other.*/

