/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();

        k = k % l;

        vector<int> rotated(l);

        for(int i = 0; i < l; i++){
            rotated[(i+k)%l] = nums[i];
        }

        for(int i =0; i<l; i++){
            nums[i] = rotated[i];
        }
    }
};
*/