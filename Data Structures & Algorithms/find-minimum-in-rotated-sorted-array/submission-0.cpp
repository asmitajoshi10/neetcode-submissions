class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int tina = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i]<tina){
                tina = nums[i];
            }
        } return tina; 
    }
};
