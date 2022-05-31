

int getType(char c) {
    int idx = 0;
    
    switch (c) {
        case '(':
        idx = 0;
        break;
        case '{':
        idx = 1;
        break;
        case '[':
        idx = 2;
        break;
        case ')':
        idx = 3;
        break;
        case '}':
        idx = 4;
        break;
        case ']':
        idx = 5;
        break;
        default:
        break;          
    }    
    return idx;
}

bool isValid(char* s) {
    char paren[] = { '(', '{', '[', ')', '}', ']' };
    int len = strlen(s);
    char *valid = (char*)calloc(len, sizeof(char));
    int k = 0;
    
    if(s == NULL || len == 1) 
        return false;
    if (len == 0)
        return true;
    
    for (int i=0; i<len; i++) {
        int type = getType(s[i]);
        
        if (type < 3) {
            valid[k++] = s[i];
        } 
        else {
            if (k>0 && valid[k-1] == paren[type - 3]) {
                k--;
            } else {
                return false;
            }                
        }
    }
    return (k == 0) ? true: false; 
}

// 91 / 91 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 5.6 MB
