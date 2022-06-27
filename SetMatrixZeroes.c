
typedef struct node{
        int x;
        int y;
        struct node *next;
    }node;

node* tail = NULL;
node* head = NULL;

void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int i, j;
    for (i=0;i<matrixSize;i++){
        for(j=0;j<*matrixColSize;j++){
            if(matrix[i][j] == 0){
                node* new = malloc(sizeof(node));
                new -> x = i;
                new -> y = j;
                if(head){
                    tail -> next = new;
                    tail = new;
                    tail -> next = NULL;
                }
                else{
                    tail = new;
                    head = new;
                    tail -> next = NULL;
                }
            }
        }
    }
    while(head){
        int k;
        for(k = 0 ; k < *matrixColSize; k++){
            matrix[head->x][k] = 0;
        }
        for( k = 0 ; k < matrixSize; k++){
            matrix[k][head->y] = 0;
        }
        node* temp = head; 
        head = head -> next;
        free(temp);
    }
}


// 164 / 164 test cases passed.
// Status: Accepted
// Runtime: 47 ms
// Memory Usage: 11 MB
