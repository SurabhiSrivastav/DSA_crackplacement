class Solution {
public:
     void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void moveZeroes(vector<int>& nums) {
        int j=0;
       
        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                swap(&nums[i], &nums[j]);   
                j++;
            }     
        }
        
    }
};
