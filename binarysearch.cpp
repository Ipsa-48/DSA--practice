#include<iostream>
using namespace std;
int main(){
    int n,i,key,arr[100];
    cout<<"Enter number of elements"<<endl;
    cin>>n;
cout<<"Enter "<<n <<"elements in sorted order"<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter the element to be searched"<<endl;
cin>>key;
int first=0,last=n-1,mid;
while(first<=last){
    mid=(first+last)/2;
    if(arr[mid]<key){
        first=mid+1;
    }
    else if(arr[mid]==key){
        cout<<"Element found at position"<<mid+1<<endl;
        break;
    }
    else{
        last=mid-1;
    }
}
if(first>last)
    cout<<"Element not found"<<endl;

return 0;
}