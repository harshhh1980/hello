#include <iostream>
using namespace std;

int duplicate(int arr[],int n){
  while(arr[0]!=arr[arr[0]]){
    swap(arr[0],arr[arr[0]]);
  }
  return arr[0] ;
}
int main() {
  int arr[10] ={1,2,3,4,3};
  cout<< duplicate(arr,5)<<endl;;
}