class Solution {
    public void mergeTwoParts(int[] arr) {
        int n = arr.length;

        int k = 0;
        while (k + 1 < n && arr[k] <= arr[k + 1]) {
            k++;
        }

    
        int i = 0, j = k + 1, idx = 0;
        int[] temp = new int[n];

        
        while (i <= k && j < n) {
            if (arr[i] <= arr[j]) {
                temp[idx++] = arr[i++];
            } else {
                temp[idx++] = arr[j++];
            }
        }

        while (i <= k) temp[idx++] = arr[i++];
        while (j < n) temp[idx++] = arr[j++];

        // Copy back
        for (int x = 0; x < n; x++) {
            arr[x] = temp[x];
        }
    }
}