#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[3][3];
    for(int i = 0; i<3; i++){
    for(int j = 0;  j<3 ; j++){
        cin >> arr[i][j];
    }
   }
   for (int i = 0; i<3; i++){
    for(int j = 0;  j<3 ; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
int totalsum = 0;
int maxi = INT_MIN;
for(int i = 0; i<3; i++){
    int sum = 0;
    for(int j = 0;  j<3 ; j++){
        sum = sum +arr[i][j];
        if(sum>maxi){
            maxi = sum;
        }
    }
    totalsum = totalsum +sum;
    cout << "the sum of "<< i <<" th row is "<< sum << endl;
   }
     cout << " The largest row sum is " << maxi;
     cout << "The total sum is " << totalsum;
}