
/*n=1 ==> 1
  n=2 ==> 2
  n=3 ==> 3
  n=4 ==> 5
  n=5 ==> 8 */

//for each step the number of ways  = sum of ways of previous two steps 

int climbStairs(int n){
    int step1, step2;
    int i;
    
    if (n == 0 || n == 1 || n == 2){
        return n;
    }
    
    step1 = 1;
    step2 = 2;
    
    for (i = 3; i <= n; i++) {
        step2 = step1 + step2; //adding the number of ways of last two steps
        step1 = step2 - step1; //setting the value of step2 to step1. moving the pointer forward(incrementatiion of steps)
    }
    return step2;

}


// 45 / 45 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 5.7 MB
