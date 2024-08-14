#include<iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int i, int j){
for(int i = 0; i<3; i++){
    for(int j = 0;  j<4 ; j++){
        if(arr[i][j] == target);{
            return 1;
        }
    }
   }
   return 0;
}
int main(){
    int arr[3][4];
    for(int i = 0; i<3; i++){
    for(int j = 0;  j<4 ; j++){
        cin >> arr[i][j];
    }
   }
//int arr[3][4] = {{12,34,45,56}, {2,4,5,66}, {23,45,67,89}};
// for traversing the elements 
for (int i = 0; i<3; i++)
{
    for(int j = 0;  j<4 ; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
cout <<"Enter the number you want to search for ";
 int target ;
 cin >> target;
 if(ispresent(arr,target,3,4)) {
    cout << "found" << endl;
 }
    else{
        cout << "not found" << endl;
    }
 }
