#include<iostream>
using namespace std;

int main()
{
    int nums[100];
    int n;
    cout<<"ENTER SIZE OF ARRAY";
    cin>>n;
    cout<<"ENTER ROTATED ARRAY";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int target;
    cout<<"ENTER TARGET WHICH U WANT TO SEARCH";
    cin>>target;

    int low=0;
    int ans=-1;
    int high=n-1;
    int mid;
    while(low<=high)
    {
     mid=(low+high)/2;
     if(nums[mid]==target)
     {
        ans= mid;
     }
      if(nums[mid]<target)
     {
        if(nums[high]<target)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
    else{
        if(nums[low]>target)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
     
     
    }
    cout<<"Index at:"<<ans;
    return 0;
}