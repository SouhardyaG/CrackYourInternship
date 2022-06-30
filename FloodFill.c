

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void solveRecursively(int** image, int imageSize, int* imageColSize, int x, int y, int newColor, int originalColor){
    if(x >= 0 && x < imageSize && y >= 0 && y < imageColSize[x] && image[x][y] == originalColor){
        image[x][y] = newColor; 
        solveRecursively(image, imageSize, imageColSize, x - 1, y, newColor, originalColor); 
        solveRecursively(image, imageSize, imageColSize, x + 1, y, newColor, originalColor); 
        solveRecursively(image, imageSize, imageColSize, x, y + 1, newColor, originalColor); 
        solveRecursively(image, imageSize, imageColSize, x, y - 1, newColor, originalColor); 
    }
}
int** floodFill(int** image, int imageSize, int* imageColSize, 
                int sr, int sc, int newColor, 
                int* returnSize, int** returnColumnSizes){
    /* copy the size of the row */ 
    *returnSize = imageSize; 
    
    /* copy the size of colums */ 
    *returnColumnSizes = (int*)malloc(sizeof(int) * *returnSize); 
    for(int i = 0; i < *returnSize; i++){
        //printf("%d\n", imageColSize[0]);
        (*returnColumnSizes)[i] = imageColSize[0];
    }
    
    //if newColor == Original Color
    if(newColor == image[sr][sc]) 
        return image; 
    
    solveRecursively(image, imageSize, imageColSize, sr, sc, newColor, image[sr][sc]);

    return image; 
    
}


// 277 / 277 test cases passed.
// Status: Accepted
// Runtime: 44 ms
// Memory Usage: 8.3 MB
