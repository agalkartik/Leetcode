class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0,j=0;
        int count = 0;
        int n = nums.size();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(nums[i]==nums[j] && i!=j && i<j){
                    count++;
                    continue;
                }
            }
        }
    return count;    
    }
};
