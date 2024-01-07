#include<iostream>
#include<math.h>

using namespace std;

class Number_List{
    private:
     int *arr;
     int size;
     int mini;
     int maxi;

    public:
    Number_List(){
        mini = INT_MAX;
        maxi = INT_MIN;
    }
      void initializeArray(int n){
        arr = new int[n];
        cout<<"Enter elements of array : "<<endl;
        size = n;
        for(int i = 0;i<n;i++){
            cout<<i<<"->";
            cin>>arr[i];
        }
      }

      void sortArray(){
        cout<<"Original Array"<<endl;
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" "; 
        }
        cout<<endl;
        for(int i = 0;i<size;i++){
            for(int j = 0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }

        cout<<"Sorted Array"<<endl;
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" "; 
        }
        cout<<endl;

      }
      void Min(){
       
        for(int i = 0;i<size;i++)mini = min(mini,arr[i]);
        cout<<"Minimum : "<<mini<<endl;
      }
      void Max(){
       
        for(int i = 0;i<size;i++)maxi = max(maxi,arr[i]);
         cout<<"Maximum : "<<maxi<<endl;
      }
};

int main(){
    Number_List nb;
     int n;
     cout<<"Enter value of (n) : ";
     cin>>n;
    nb.initializeArray(n);
    nb.sortArray();
    nb.Min();
    nb.Max();
    
}