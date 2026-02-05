class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count=0;
        int answer=0;
        for(int i=0; i<nums.size(); i++){

            if(nums[i]==1) 
                count++;
            else count=0;

            answer = max(answer, count);
        }
        return answer;
        
    }
};