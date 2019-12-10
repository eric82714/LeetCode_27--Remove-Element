class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int tmp = 0;
        int len = nums.size();
        
        for(int i = 0; i < len; i++){
            if(nums[i-tmp] == val){
                nums.erase(nums.begin() + (i-tmp));
                tmp++;
            }
        }
        return nums.size();
    }
};
