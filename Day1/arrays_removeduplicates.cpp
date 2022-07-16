class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      //using two pointer approach where both pointers i & j starts from same index 1, i keeps increasing, j increases only if two indexes value differ
        int j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1])      
                nums[j++]=nums[i];    
        }
        return j;
    }
};
