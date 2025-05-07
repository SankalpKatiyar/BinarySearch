class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0 , right = m*n-1;
        while(left <= right){
            int mid = left + (right - mid)/2;
            if(matrix[mid/n][mid%n]== target) return true;
            else if(matrix[mid/n][mid%n] > target) right = mid -1 ;
            else left = mid +1;
        }
        return false;
    }
};