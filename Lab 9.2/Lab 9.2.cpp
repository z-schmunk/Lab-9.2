#include <iostream>
using namespace std;

int isSortedIncreasing;
int isSortedDecreasing;
int hasAdjacentDuplicates;
int hasDuplicates;

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
bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}