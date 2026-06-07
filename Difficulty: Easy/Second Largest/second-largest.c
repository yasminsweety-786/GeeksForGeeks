int getSecondLargest(int *arr, int n) {
    // code here
    
    int L = INT_MIN,sec_L= INT_MIN;
    for( int i=0; i<n;i++){
        if(arr[i]>L ){
            sec_L= L;
            L=arr[i];
        }else if (arr[i]>sec_L && arr[i] !=L ){
            sec_L=arr[i];
        }
    }
    return (sec_L == INT_MIN)? -1: sec_L;
}
