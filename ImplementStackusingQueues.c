
#define LENGTH 100

typedef struct {
    int *queue1, *queue2;
    int front1, front2, rear1, rear2;
} MyStack;

// update front1, rear1, front2, rear2 value 
int updateQueueIndexValue(int index){
	if (index == LENGTH - 1){
		index = 0;
	}
	else{
		index++;
	}
	return index;
}

MyStack* myStackCreate() {
    
    MyStack* stack = (MyStack*)malloc(sizeof(MyStack));
    int* queue1 = (int*)malloc(sizeof(int) * LENGTH);
    int* queue2 = (int*)malloc(sizeof(int) * LENGTH);
    stack->queue1 = queue1;
    stack->queue2 = queue2;
    stack->front1 = 1;
    stack->front2 = 1;
    stack->rear1 = 0;
    stack->rear2 = 0;
    return stack;
}

void myStackPush(MyStack* obj, int x) {
    if(obj->front1 - obj->rear1 != 1){
        obj->rear1 = updateQueueIndexValue(obj->rear1);
        obj->queue1[obj->rear1] = x;
    }
    else{
        obj->rear2 = updateQueueIndexValue(obj->rear2);
        obj->queue2[obj->rear2] =x;
    }
}

int myStackPop(MyStack* obj) {
    if(obj->front1 - obj->rear1 != 1){
        while(obj->front1 - obj->rear1 != 0){
            obj->rear2 = updateQueueIndexValue(obj->rear2);
            obj->queue2[obj->rear2] = obj->queue1[(obj->front1)];
            obj->front1 = updateQueueIndexValue(obj->front1);
        }
        int a = obj->queue1[(obj->front1)];
        obj->front1 = updateQueueIndexValue(obj->front1);
        return a;
    }
    else{
        if(obj->front2 - obj->rear2 != 1){
            while(obj->front2 - obj->rear2 != 0){
                obj->rear1 = updateQueueIndexValue(obj->rear1);
                obj->queue1[obj->rear1] = obj->queue2[obj->front2];
                obj->front2 = updateQueueIndexValue(obj->front2);
            }
            int b = obj->queue2[obj->front2];
            obj->front2 = updateQueueIndexValue(obj->front2);
            return b;
        }
    }
    return 0;
}

int myStackTop(MyStack* obj) {
    if(obj->front1 - obj->rear1 != 1){
        while(obj->front1 - obj->rear1 != 0){
            obj->rear2 = updateQueueIndexValue(obj->rear2);
            obj->queue2[obj->rear2] = obj->queue1[obj -> front1];
            obj->front1 = updateQueueIndexValue(obj->front1);
        }
        int a = obj->queue1[(obj->front1)];
        obj->rear2 = updateQueueIndexValue(obj->rear2);
        obj->queue2[obj->rear2] = obj->queue1[(obj->front1)];
        obj->front1 = updateQueueIndexValue(obj->front1);
        return a;
    }
    else{
        if(obj->front2 - obj->rear2 != 1){
            while(obj->front2 - obj->rear2 != 0){
                obj->rear1 = updateQueueIndexValue(obj->rear1);
                obj->queue1[obj->rear1] = obj->queue2[obj->front2];
                obj->front2 = updateQueueIndexValue(obj->front2);
            }
            int b = obj->queue2[(obj->front2)];
            obj->rear1 = updateQueueIndexValue(obj->rear1);
            obj->queue1[obj->rear1] = obj->queue2[obj->front2];
            obj->front2 = updateQueueIndexValue(obj->front2);
            return b;
        }
    }
    return 0;
}

bool myStackEmpty(MyStack* obj) {
    if(obj){
        if((obj->front1 - obj->rear1) && (obj->front2 - obj->rear2)){
            return true;
        }
        return false;
    }
    return true;
}

void myStackFree(MyStack* obj) {
    if(obj){
        if(obj->queue1){
            free(obj->queue1);
        }
        if(obj->queue2){
            free(obj->queue2);
        }
        obj->front1 = 1;
        obj->rear1 = 0;
        obj->front2 = 1;
        obj->rear2 =0;
        
        free(obj);
    }
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/

// 16 / 16 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 5.8 MB
