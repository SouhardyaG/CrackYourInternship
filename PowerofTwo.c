//O(logn)

bool isPowerOfTwo(int n){
    if(n == 0){
        return false;
    }
    while(n != 1){
        if(n % 2 != 0){
            return false;
        }
        n /= 2;
    }
    return true;
}

// 1108 / 1108 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 5.7 MB


//O(1)

bool isPowerOfTwo(int n){    
   if(n==0){
    return false;
   }
   return (ceil(log2(n)) == floor(log2(n)));
}

// 1108 / 1108 test cases passed.
// Status: Accepted
// Runtime: 5 ms
// Memory Usage: 5.6 MB
