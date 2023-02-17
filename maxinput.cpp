#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int ar[n];
        int arr[100000];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n-1;i++){
            if(ar[i]==ar[i+1]){
                count++;
          }
          else if(ar[i]!=ar[i+1]){
            count=0;
          }
          arr[i]=count;
          
        }
        int max=0;
        for(int i=0;i<n-2;i++){
        for(int k=1;k<n-1;k++){
            if(arr[i]<arr[k]){
                max=arr[k];
            }
        }
        }

        cout<<max+1;
        t--;
    }
}