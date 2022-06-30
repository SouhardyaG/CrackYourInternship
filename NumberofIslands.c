
void countIslandHelper(char** grid, int i, int j, int gridSize, int* gridColSize){
     if(i < 0 || j < 0 || i >= gridSize || j >= gridColSize[i] || grid[i][j] == '0'){
        return;
    }
    grid[i][j] = '0';
    countIslandHelper(grid, i+1, j, gridSize, gridColSize);
    countIslandHelper(grid, i-1, j, gridSize, gridColSize);
    countIslandHelper(grid, i, j-1, gridSize, gridColSize);
    countIslandHelper(grid, i, j+1, gridSize, gridColSize);
}


int numIslands(char** grid, int gridSize, int* gridColSize){
    int i, j;
   int count = 0;
    for( i = 0 ; i < gridSize; i++){
        for( j = 0; j < *gridColSize; j++){
            if(grid[i][j] == '1'){
                countIslandHelper(grid, i , j, gridSize, gridColSize);
                count++;
            }
        }
    }
    return count;
}

// 49 / 49 test cases passed.
// Status: Accepted
// Runtime: 36 ms
// Memory Usage: 9.1 MB
