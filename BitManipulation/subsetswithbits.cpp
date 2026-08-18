//78.Subsets

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int m=(1<<n);//power of two with left shift
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){//runs 2^n -1 times 
            vector<int>t;
            for(int j=0;j<n;j++){//n times
                if((i>>j)%2==1)t.push_back(nums[j]);//when bit is zero skips else adds
            }
            ans.push_back(t);
        }
        return ans;
    }
};
