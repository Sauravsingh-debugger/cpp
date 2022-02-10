#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    double sum=0;
    double average;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
            sum=sum+arr[i];
    }
    average=sum/n;
    cout<<"average of"<<n<<" no is"<<average;
    
    return 0;
}