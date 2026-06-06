// Return 1 if found, else 0. Update res in-place.
int subarraySum(int* arr, int n, int target, int* res) {
    // code here
      int left = 0, right = 0;
    long long sum = 0;

    while (right < n) {
        sum += arr[right];

        // Shrink window if sum exceeds target
        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        // Check if sum matches target
        if (sum == target) {
            res[0] = left + 1;   // 1-based index
            res[1] = right + 1;  // 1-based index
            return 1;
        }

        right++;
    }

    // No subarray found
    res[0] = -1;
    return 0;
    
}