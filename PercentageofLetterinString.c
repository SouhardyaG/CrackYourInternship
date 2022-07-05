int percentageLetter(char * s, char letter){
    int count  = 0;
    for(int i = 0 ; i < strlen(s); i++){
        if(s[i] == letter){
            count++;
        }
    }
    return (count * 100 / strlen(s));
}


// 86 / 86 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 5.5 MB
