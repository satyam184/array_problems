#include<iostream>
using namespace std;
void sum_of_array(int arr[],int num,int sum=0){
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];

    }
    cout<<"sum of array is: ";
    for(int i=0;i<num;i++){
        sum=sum+arr[i];
       
    }
     cout<<sum;
}
int main(){
    int num;
    cout<<"enter the size of the array ";
    cin>>num;
    int arr[num];
    
    sum_of_array(arr ,num);

    return 0;
}