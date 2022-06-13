void removeBackspaces(char* S){
    int start = 0;
    for(int i = 0; S[i] != '\0'; i++)
    {
        if(S[i] != '#')
        {
            S[start++] = S[i];
        }
        else if(S[i]  == '#' && start > 0)
            start--;
    }
    S[start] = '\0';
}
bool backspaceCompare(char * s, char * t){
    removeBackspaces(s);
    removeBackspaces(t);
    
     if(strcmp(s,t) == 0){
         return true;
    }
    return false;
}

// 114 / 114 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 5.6 MB
