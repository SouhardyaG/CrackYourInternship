int majorityElement(const int* A, int n1) {
    int count = 1;
    int index = 0;
    int i;
    for(i = 0; i < n1; i++){
        if(A[index] == A[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            index = i;
            count = 1;
    }
    }
    return A[index];
}

// 43 / 43 test cases passed.
// Status: Accepted
// Runtime: 25 ms
// Memory Usage: 8 MB
