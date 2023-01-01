class Solution {
public:
    int search(vector<int>& nums, int target) {
        int r = nums.size()-1;
        int l = 0;
        
        while(l<=r){
            if(nums[(l+r)/2]>target){
                r=(l+r)/2-1;
            }
            else if(nums[(l+r)/2]<target){
                l=(l+r)/2+1;
            }
            else{
                return (l+r)/2;
            }
        }
 
        return -1;
    }
};
