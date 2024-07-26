class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sumlocal=nums[0];
        int sumglobal=nums[0];
        for(int i=1;i<nums.size();i++){
            sumlocal=max(nums[i],nums[i]+sumlocal);

            if(sumlocal>sumglobal){
            sumglobal=sumlocal;
        }
        }
        


        return sumglobal;
    }
};
