class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;

        i= 0;
        j= nums.size()-1;
        vector<pair<int,int>> A;

        for(int a=0; a<nums.size(); a++)
        {
            A.push_back({nums[a],a});
        }
        
        std::sort(A.begin(), A.end());

        while(i<j)
        {
            int cur= A[i].first + A[j].first;
            if(cur == target)
            {
                
                return {min(A[i].second,A[j].second),
                max(A[i].second,A[j].second)};
            }
            else if(cur > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {};
    }
};
