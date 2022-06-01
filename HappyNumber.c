bool isHappy(int n){
    int sum = 0;
    int temp = n;
    while(temp != 0){
        int rem = temp % 10;
        temp = temp/10;
        sum += (rem * rem);
    }
    if(sum==1||sum==7)
            return true;
        else if(sum<10)
            return false;
        else
            return isHappy(sum);
    
}

// 404 / 404 test cases passed.
// Status: Accepted
// Runtime: 7 ms
// Memory Usage: 5.6 MB
