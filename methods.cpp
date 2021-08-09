#include <bits/stdc++.h>
using namespace std;


// returns the sum of all the elements in an integer array
int sum_elements(int arr[], int len) {
    int sum = 0;
    for(int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

// returns the value of the smallest element in an integer array
int min_element(int arr[], int len) {
    int min_element = INT_MAX;
    for(int i = 0; i < len; i++) {
        if(min_element > arr[i]) {
            min_element = arr[i];
        }
    }

    return min_element;
}

// returns the value of the largest element in an integer array
int max_element(int arr[], int len) {
    int max_element = INT_MIN;
    for(int i = 0; i < len; i++) {
        if(max_element < arr[i]) {
            max_element = arr[i];
        }
    }

    return max_element;
}

// returns the index of the largest element in an integer array
int max_element_index(int arr[], int len) {
    int max = INT_MIN;
    int maxIndex = 0;

    for(int i = 0; i < len; i++) {
        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}

// returns the index of the first element in an integer array that is 
// greater than the target; returns -1 if no such index exists
int binary_search_g(int arr[], int len, int target) {

    sort(arr, arr + len);

    int low = 0;
    int high = len;

    while(low != high) {
        int mid = (low + high) / 2;

        if(arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    if(arr[low] <= target) {
        return -1;
    } else {
        return low;
    }
}