


typedef struct {
    int size;
    int* queue;
    int current;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *q  = (MyQueue*)malloc(sizeof(MyQueue));
    q -> size = 10;
    q -> current = -1;
    q -> queue = malloc(10 * sizeof(int));
    return q;
}

void myQueuePush(MyQueue* obj, int x) {
    obj ->  current++;
    if(obj -> current >= obj->size){
        int *new = malloc(sizeof(int) * 2 * obj->size);
        memcpy(new, obj, sizeof(int) * obj -> size);
        free(obj);
        obj = new;
        obj -> size *= 2;
    }
    obj -> queue[obj -> current] = x;
}

int myQueuePop(MyQueue* obj) {
    int element = obj -> queue[0];
    for(int i = 0; i < obj -> current; i++){
        obj -> queue[i] = obj -> queue[i+1];
    }
    obj -> current -= 1;
    return element;
}

int myQueuePeek(MyQueue* obj) {
    return obj -> queue[0];
}

bool myQueueEmpty(MyQueue* obj) {
    if(obj -> current == -1){
        return true;
    }
    return false;
}

void myQueueFree(MyQueue* obj) {
    free(obj -> queue);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/



// 22 / 22 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 6.1 MB
