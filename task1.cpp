#include <iostream>
#include <vector>
using namespace std;

vector<int> index_finding(int arr[], int n, int key) {
    vector<int> indices;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Test Cases

    // Multiple coccurences
    int arr1[] = {1, 3, 4, 3, 4, 6, 3};
    vector<int> reult1 = index_finding(arr1, sizeof(arr1), 3);
    cout << "Indices of 3: ";
    for (int i=0;i<reult1.size();i++) 
    cout << reult1[i] << " ";
    cout << endl;

   // Key not found
    int arr2[] = {0, 2, 9, 10, 12, 13};
    vector<int> result2 = index_finding(arr2, sizeof(arr2), 25);
    cout << "Indices of 25: ";
   for(int i=0;i<result2.size();i++)
    cout << result2[i] << " ";
    cout<<endl;

   // Empty array
    int arr3[] = {};
    vector<int> result3 = index_finding(arr3, sizeof(arr3), 5);
    cout << "Indices of 5: ";
    for (int i=0;i<result3.size();i++)
    cout << result3[i] << " ";
    cout<<endl;

    return 0;
}