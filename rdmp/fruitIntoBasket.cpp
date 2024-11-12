//I first tried to do this using set but it wont work.
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int l = 0;
       int r = 0;
       int n = fruits.size();
       set<int>basket;
       int maxFruits = 0;
       while(r<n) 
       {
        basket.insert(fruits[r]);
        if(basket.size()==2 || basket.size()==1)
        {
          maxFruits = max(maxFruits,(r-l+1));
          r++;
        }
        else if(basket.size()>2)
        {
            basket.erase(fruits[l]);
            l=r-1;
            r++;
        }
       }
       return maxFruits;
    }
};

//Now in the working solution we will use Unordered map in this.
