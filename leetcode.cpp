#include<bits/stdc++.h>
using namespace std;

 int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int s=0, e=n-1;
        int mid=e-(e-s)/2;
        

        while(s<=e){
            if((mid==0 || nums[mid-1]<=nums[mid]) && (mid == n-1 || nums[mid]>=nums[mid+1])  )
            return mid;

            if(mid>0 && nums[mid-1]>nums[mid]) e=mid-1;
            else s=mid+1;

            mid=e-(e-s)/2;
        }
        return mid;
    }

    int main(){
        int n;
        cout<<"enter n"<<endl;
        cin>>n;
        vector<int> v(n,0);
        cout<<"enter"<<endl;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
int ans = findPeakElement(v);
cout<<ans;
    }