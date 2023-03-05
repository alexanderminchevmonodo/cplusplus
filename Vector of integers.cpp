#include <iostream>
#include <vector>
#include <thread>

using namespace std;


/*This code implements a multithreaded merge sort algorithm that sorts a vector of integers.
The merge function merges two subarrays of the vector using a standard merge algorithm, while the mergeSort function recursively splits the vector into subvectors and sorts them in parallel using two threads.
The main function initializes the vector and calls the mergeSort function to sort it, and then prints the sorted vector to the console.
*/

void merge(vector<int>& arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        thread t1(mergeSort, ref(arr), l, m);
        thread t2(mergeSort, ref(arr), m + 1, r);

        t1.join();
        t2.join();

        merge(arr, l, m, r);
    }
}

int main() {
    vector<int> arr = { 38, 27, 43, 3, 9, 82, 10 };
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

