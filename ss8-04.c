#include<stdio.h>
int main(){
	int max,i,j ;
	int arr[2][3]= {{1,2,3},
	               {2,5,3}};
	 for(i=0;i<2;i++){
	 	for(j=0;j<3;j++){
	 		arr[0][0] = max ;
			 if (max < arr[i][j]){
			 	max=arr[i][j] ;
			 } 
		 } 
	 } 
				   printf("so lon nhat trong mang la %d ",max); 
	
	
	
	return 0; 
} 
