class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = m*n-1; 
        while(left<=right){
            int mid = left + (right-left)/2;
            int midElement = matrix[mid/m][mid%m];
            if(midElement==target){
                return true;
            } if(midElement>target){
                right = mid-1;
            }if(midElement<target){
                left = mid+1;
            } 
        } return false;
    }
};
