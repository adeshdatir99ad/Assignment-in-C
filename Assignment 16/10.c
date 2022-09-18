// 10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
#include<stdbool.h>

#define R 4
#define C 4

// Function that returns index of row
// with maximum number of 1s.
int rowWithMax1s(bool mat[R][C]) {
	int indexOfRowWithMax1s = -1 ;
	int maxCount = 0 ;
	
	// Visit each row.
	// Count number of 1s.
	/* If count is more that the maxCount then update the maxCount
	and store the index of current row in indexOfRowWithMax1s variable. */
	for(int i = 0 ; i < R ; i++){
		int count = 0 ;
		for(int j = 0 ; j < C ; j++ ){
			if(mat[i][j] == 1){
				count++ ;
			}
		}
		if(count > maxCount){
			maxCount = count ;
			indexOfRowWithMax1s = i ;
		}
	}
	
	return indexOfRowWithMax1s ;
}

// Driver Code
int main()
{
	bool mat[R][C] = { {0, 0, 0, 1},
					{0, 1, 1, 1},
					{1, 1, 1, 1},
					{0, 0, 0, 0}};

	int indexOfRowWithMax1s = rowWithMax1s(mat);
	printf("Index of row with maximum 1s is %d",indexOfRowWithMax1s);
	return 0;
}


