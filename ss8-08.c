#include<stdio.h>
int main(){
	int i,j ;
	int sum =0 ; 
	int all=0; 
	int arr[2][2]={{1,2},
	             {3,4}};
	 for (i=0;i<2;i++){
	 for(j=0;j<2;j++){
	all=all + arr[i][j] ;  
	} }
	for (i = 0; i < 2; i++){
        for (j = 2-1; j >= 0; j--){
        	//tinh tong cac phan tu tren duong cheo phu
        	if(i + j == 2 - 1){
				sum += arr[i][j];
			}}	
	 		
			  
		 }
printf("tong cua truc phu la %d\n ",sum ); 
	
printf("tong cac phan tu trong mang la %d",all);	
	
	return 0; 
} 
