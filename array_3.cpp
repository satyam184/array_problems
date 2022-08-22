#include<iostream>
using namespace std;
void input_elements(int arr[],int num)
{
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];

    }
}
void read_elements(int arr[],int num)
{
    cout<<"Elements in array are: "<<endl;
    
    for(int i=0;i<num;i++)
    {
         cout<<arr[i]<<"\t";
    }
   
}
int main(){
    int num;
    
    
    cout<<"enter the size of the elements "<<endl;
    cin>>num; 
    int arr[num];       
    input_elements(arr,num);
    read_elements(arr,num);
    return 0;
}