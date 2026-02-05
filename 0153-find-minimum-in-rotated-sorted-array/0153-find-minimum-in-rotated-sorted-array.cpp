class Solution {
public:
    int findMin(vector<int>& nums) {

        int  n= nums.size();

        int high =n-1;
        int low = 0;
        int answer= INT_MAX;

        while(low<=high){

            int mid= (low + high)/2;
//either side of mid would be definately sorted
// sorted wali side ka answer store karke unsorted wali side mave karo
            if(nums[mid] >= nums[low]){  //---->left part is sorted
                answer = min(answer, nums[low]);
                low = mid+1;
            }
            else                         //----> right part is sorted
             {   
                answer= min( answer, nums[mid]);
                high= mid-1;
             }
        }
        return answer;
        
    }
};