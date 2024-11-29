#include<stdio.h>
int main(){
	int i,j;
	int sum=0; 
	int arr[2][2]={{1,3}, 
	             {3,4}};
	for (i=0; i<2;i++){
		for(j=0;j<2;j++){
			sum=sum + arr[i][j]; 
		} 
	} 
		printf("tong cac phan tu co trong mang la %d  ",sum);		 
	return 0; 
}
