#include<iostream>
using namespace std;
void insert_beg(int arr[], int &n);
void insert_end(int arr[], int &n);
void insert_random(int arr[], int &n);
void display(int arr[], int n);
int main(){
    int arr[50],n,x,choice=0;
    cout<<"enter the size of an aray "<<endl;
    cin>>n;
    cout<<"Enter the elements of an array "<<endl;

    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    cout<<endl<<"Choose one option from following list:"<<endl;
    cout<<endl<<" 1. Insert in beginning \n 2. Insert at last\n 3. Insert at random position\n 4. Traverse \n 5. Exit"<< endl;
     while(choice!=5)
 {
     cout<<endl<< "Enter your choice: ";
 cin>>choice;
  switch(choice){
            case 1:
                insert_beg(arr,n);
            break;
            case 2:
                insert_end(arr,n);
             break;
              case 3:
                insert_random(arr,n);
              break;
             case 4:
             display(arr,n);
             break; 
           case 5:
            exit(0);
              break;
 default:
           cout<<"Please enter valid choice: ";
}
 }
 return 0;
}
void insert_beg(int arr[],int &n){
    int x;
    cout<<"Enter the element you want to insert at the beginning "<<endl;
    cin>>x;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    n++;
}
void insert_end(int arr[],int &n){
    int x;
    cout<<"Enter the element you want to insert at the end "<<endl;
    cin>>x;
    arr[n]=x;
    n++;
    
}
void display(int arr[],int n){
    
    cout<<"the elements of an array are "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insert_random(int arr[],int &n){
    int pos,x;
    cout<<"Enter the position where you want to insert the element "<<endl;
    cin>>pos;
    cout<<"Enter the element you want to insert at the random position "<<endl;
    cin>>x;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    n++;
}