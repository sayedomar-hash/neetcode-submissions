class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> a;
        for(int i: nums)
        {
            if(a.count(i))
            {
                return true;
            }
            a.insert(i);
        }

        return false;
    }
};