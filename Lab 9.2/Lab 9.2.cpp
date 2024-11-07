#include <iostream>
using namespace std;

int isSortedIncreasing;
int isSortedDecreasing;
int hasAdjacentDuplicates;

bool isSortedIncreasing(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}
bool isSortedDecreasing(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
}
bool hasAdjacentDuplicates(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            return true;
        }
    }
    return false;
}
