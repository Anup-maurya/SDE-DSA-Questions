#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int findpivot(vector<int> arr, int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e) {
        

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return s;
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 9,1, 2, 3};
    int pivot = findpivot(arr, 8);
    cout << pivot;
    return 0;
}
