#include <iostream>
using namespace std;
int countGreaterOrEqual(int nums[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] >= x) {
            count++;
        }
    }
    return count;
}

int findSpecialX(int nums[], int n) {
    int left = 0, right = n;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int count = countGreaterOrEqual(nums, n, mid);

        if (count == mid) {
            return mid;
        } else if (count < mid) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    int nums[] = {3, 5, 6, 7, 8}; // Example array
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findSpecialX(nums, n);
    if (result != -1) {
        cout << "The special number is " << result << std::endl;
    } else {
        cout << "The array is not special." << std::endl;
    }

    return 0;
}
