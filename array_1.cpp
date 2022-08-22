#include<iostream>
using namespace std;

void input(int arr[],int num)
{
    
    
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

}
void negative_element(int arr[],int num)
{
    cout<<"negative elements are: ";

    for(int i=0;i<num;i++){
        if(arr[i]<0){
            cout<<arr[i];

        }

    }
}
int main(){
    cout<<"enter the size of the array ";
    int num;
    cin>>num;
    int arr[num];
    input(arr,num);
    negative_element(arr,num);
    
    return 0;

}