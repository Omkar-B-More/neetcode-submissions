class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        long long int p1,p2;
        sort(nums.begin(),nums.end());
        p1=(nums[nums.size()-1]*nums[nums.size()-2]);
        p2=(nums[0]*nums[1]);
        return p1-p2;
    }
};