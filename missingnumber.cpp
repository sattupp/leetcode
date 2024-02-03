#include<iostream>
#include<vector>
using namespace std;

int missingnumber(vector<int>nums){
  int sum=0;
  int n=nums.size();
  for(int index=0;index<n;index++){
  sum=sum+nums[index];
  }
int totalsum=((n)*(n+1))/2; //is formula ke wjh se humein sum 0 to n milra hai agr hum 2 to n nikalne ka try krnge to ans might change 
int ans=totalsum-sum;
return ans;

} 


int main(){
  vector<int>nums;

  int n;
  cin>>n; //size of array nums

  for(int i=0;i<n;i++){

  int d;
  cin>>d;
  nums.push_back(d);

  }

 cout<< missingnumber(nums);

}