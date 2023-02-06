/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Online C++ compiler to run C++ program online
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int binarysearch(int arr[],int n,int x)
{
     int left=0;
     int right=n;
   
    while(left<=right){
         int mid = (left+right)/2;
        if(arr[mid]==x){
            return mid;
       
            
        }
        else if(arr[mid]>x){
             right=mid-1;
        }
        else {
              left=mid+1;
        }
    }
    return -1;
}

int main() {
    int i,n,x;
    cout<<"Enter the size of the arrray:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(i=0;i<=n;i++){
        cin>>arr[i];
        
    }
    cout<<"Enter the key:";
    cin>>x;
 
    cout<<binarysearch(arr,n,x)<<endl;
 
    return 0;
}