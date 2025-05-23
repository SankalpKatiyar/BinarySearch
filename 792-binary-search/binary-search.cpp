class Solution {
public:
    int search(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size()-1;
        while(start<=end){
            int mid = (start+ end)/2;
            if(arr[mid]<target){
                start = mid+1;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};