#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i]; }
        for(int j=0;j<n-1;j++){
            for(int f=j+1;f<n;f++){
                if(arr[j]>arr[f]){
                    arr[j]=arr[f]^arr[j];
                    arr[f]=arr[f]^arr[j];
                    arr[j]=arr[f]^arr[j];
                }
            }
        } 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "; }
            cout<<endl;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k-1]=arr[k];
                }
                
                n--;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k-1]=arr[k];
                }
                
                n--;
            }
        }
    }
      for(int i=0;i<n;i++){
        cout<<arr[i];
      }
        t--;
    }
    return 0;
}
