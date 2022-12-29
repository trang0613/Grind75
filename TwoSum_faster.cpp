//time complexity O(n)
//instead of the second for loop, we use an unordered map containing keys - the numbers in array, and values - the indexes of the numbers

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int size = nums.size();
        unordered_map<int,int> umap; //using unordered map

        for(int i = 0; i < size; i++){
            umap[nums[i]]=i;
        }

        for(int i = 0; i < size; i++){
            int num = target - nums[i]; 
            
            //if num is found in map, return result
            if (umap.find(num) != umap.end()){
                if(umap[num] != i){ //need this condition to make sure we don't return the same index in the result vector
                    result.push_back(umap[num]);
                    result.push_back(i);
                    break;
                }
            }        
        }

        

        return result;
    }
};
