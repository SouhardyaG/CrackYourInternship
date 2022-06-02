bool isPalindrome(int x){
    long int original = x;
    long int reversed = 0;
    while (x > 0) {
        int remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }
  
if (original == reversed){
  return true;
}
else{
  return false;
}
  
// 11510 / 11510 test cases passed.
// Status: Accepted
// Runtime: 7 ms
// Memory Usage: 5.8 MB
