/* My Logic. TC : O(n) SC : O(n). I couldnt solve it so this solution is derived from Neetcode,s logic
use a unordered map and store the sorted string as key and then its anagrams in values. The values will be stored in a vector.*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);  //used for faster IO operations.
        cin.tie(NULL);

       //we will create an unordered map where we will store every number inside the bucket after comparing its sorted part (iykyk)
        unordered_map<string,vector<string>>mp;
        int n = strs.size();
        string temp;

        for( int i=0 ; i<n ; i++)
        {
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp); //inserting the sorted key.
        }

           //Removing the key and taking the value part inside every key.
           vector<vector<string>>ans;

        for( auto i = mp.begin() ; i!=mp.end() ; i++)
           {
              ans.push_back(i -> second);  // this is how you retrieve the values from an unordered map. 
           }
        return ans;

    }
};

