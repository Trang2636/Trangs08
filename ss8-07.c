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
	} 
	 		sum = sum + arr[i][i];
			  
		 }
printf("tong cua truc chinh la %d\n ",sum ); 
	
printf("tong cac phan tu trong mang la %d",all);	
	
	return 0; 
} 
