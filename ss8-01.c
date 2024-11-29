#include<stdio.h>
int main(){
	int i, j ; 
	int arr[2][3]={{1,2,3},
	               {4,5,6}};
	for(i=1;i>=0;i--){
		for(j=2;j>=0;j--){
			printf ("arr[%d][%d]=%d\n",i,j , arr[i][j]); 
		} 
	} 
			
	
	
	
	return 0; 
} 
