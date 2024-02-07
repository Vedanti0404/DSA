#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& arr, int start, int mid, int end) {
        vector<int> temp(end - start + 1);
        int left = start, right = mid + 1, index = 0;

        while (left <= mid && right <= end) {
            if (arr[left] <= arr[right]) {
                temp[index] = arr[left];
                index++;
                left++;
            } else {
                temp[index] = arr[right];
                index++;
                right++;
            }
        }
        
        while (left <= mid) {
            temp[index] = arr[left];
            index++;
            left++;
        }

        while (right <= end) {
            temp[index] = arr[right];
            index++;
            right++;
        }
        
        for (int i = 0; i < temp.size(); i++) {
            arr[start + i] = temp[i];
        }
    }

    void mergeSort(vector<int>& arr, int start, int end) {
        if (start >= end)
            return;
        
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    Solution obj;
    vector<int> sortedArray = obj.sortArray(nums);
    for (int num : sortedArray) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
