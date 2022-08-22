#include<iostream>
using namespace std ;
void array(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void insertion(int arr[], int n, int pos,int x){

    
    if (pos >=n+1||pos==0)
    {
        cout<<"invalid"<<endl;
    }
    else
    {for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos-1]= x;
    n++;
    cout<<"new array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    }
} 
int main(){
    int n,pos,x;
    cout<<"enter the size of the element: "<<endl;
    cin>>n;
    int arr[n];
    array(arr , n ) ;
    cout<<"enter the inseting new element "<<endl;
    cin>>x;
    cout<<"enter the position "<<endl;
    cin>>pos;
   insertion(arr,n,pos,x);

    return 0;

}


