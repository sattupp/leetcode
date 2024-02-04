//input:10,20,30,40,50,60  k=2(means 2 shift)
//output:50,60,10,20,30,40

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n); 
        for(int index=0;index<n;index++){
            int newIndex=(index+k)%n; 
            ans[newIndex]=nums[index]; 
        }
        nums=ans; 
};
