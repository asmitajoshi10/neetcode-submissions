class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0;
        int current = 0;
        int maxi = 0;
        for(int i = 0; i<n-1; i++){
            maxi = max(maxi, i + nums[i]);
            if(i==current){
                jumps++;
                current = maxi; 
            }    
        } return jumps; 
    }
};
