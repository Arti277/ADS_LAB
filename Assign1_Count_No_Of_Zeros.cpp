#include<iostream>
using namespace std;

int main()
{
    int id;
    int n ,low=0;
    int high,mid;
    int nums[10];

    cout<<"ENTER THE SIZE:"<<endl;
    cin>>n;
     id=n;
     
    cout<<"ENTER THE ONE'S AND ZEROES IN THE IT:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    high=n-1;
    while(low<=high)
    {  
        
        mid=(low+high)/2;
        if(nums[mid]==0)
        {  id=mid;
            high=mid-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==0)
            { 
             id=mid;
             break;

            }
            else{
                low=mid+1;
            }
            
        }
        break;

    }
    else{
        low=mid+1;
    }
    }
    int z=n-id;
    cout<<"total no of zeros:"<<z;

    return 0;


}