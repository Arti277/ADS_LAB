#include<iostream>
using  namespace std;
void merge(int low , int high, int mid,int arr[] ){
     int temp[high-low+1];
     int i=low, j=mid+1;
     int k=0;
     int z=0;
     while(i<=mid && j<=high){
        if(arr[i]!=0 && arr[j]!=0)
        {
        if(arr[i]>arr[j]){
            temp[k]=arr[j];
            j++;
        }
        else{
            temp[k]=arr[i];
            i++;
        }
        k++;
     }
     else{
        if(arr[i]!=0)
        {
            temp[k++]=arr[i++];
            
        }
        else{
            temp[k++]=arr[j++];
        }
     }
    }
    
     while(i<=mid){
         temp[k++]=arr[i++];
     }
     while(j<=high){
         temp[k++]=arr[j++];
     }
     k=0;
     for(int l=low;l<=high;l++){
          arr[l]=temp[k++];
     }
}
void devide(int low, int high, int arr[]){
      int mid;
      if(low<high){
         mid=(low+high)/2;
         devide(low, mid, arr);
         devide(mid+1,high,arr);
         merge(low,high,mid,arr);
      }
}
int main(){
      int n;
      cout<<"enter the size of the array\n";
      cin>>n;
      int arr[n];
      cout<<"enter the elements\n";
      for(int i=0; i<n;i++){
         cin>>arr[i];
        
        }
        devide(0,n-1,arr);
        cout<<"sorted array is: \n";
        for(int i=0;i<n;i++){
             cout<<arr[i]<<"\t"<<endl;
        }
        return 0;
}