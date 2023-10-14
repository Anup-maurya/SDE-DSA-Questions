#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int squareroot(vector<int> arr, int n, int key) {
  int s=0;
  int mid;
  int e=n-1;
  while(s<e){
      mid=s+(e-s)/2;
      if(arr[mid]*arr[mid]==key){
          return true;
      }
      if(arr[mid]*arr[mid]>key){
          e=mid;
      }
      else
          s=mid;
  }
  return 0;
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 64};
    int sqrtv = squareroot(arr, 8,9);
    cout << sqrtv;
    return 0;
}
