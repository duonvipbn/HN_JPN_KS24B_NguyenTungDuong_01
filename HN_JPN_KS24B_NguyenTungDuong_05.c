#include <stdio.h>

int main(){
	int n, rows, cols;
	int arr[100][100];
	do{
		printf("MENU\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("4. In ra cac phan tu nam tren duong cheo chinh\n");
		printf("5. In ra cac phan tu nam tren duong cheo phu\n");
		printf("6. Sap xep duong cheo chinh theo thu tu tang dan\n");
		printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
		printf("8. Thoat khoi chuong trinh\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &n);
		
		switch(n){
			
			case 1:
				printf("nhap so cot[0; 100]: ");
				scanf("%d", &rows);
				
				printf("nhap so hang[0; 100]: ");
				scanf("%d", &cols);
				
				if(rows > 0 && cols > 0 && rows < 100 && cols < 100){
					for(int i = 0; i < rows; i++){
						for(int j = 0; j < cols; j++){
							printf("arr[%d][%d]=", i, j);
							scanf("%d", &arr[i][j]);	
						}
					}
					
				}else{
					printf("nhap lai so cot so hang\n");
				}
				break;
			case 2:
				if(rows > 0 && cols > 0 && rows < 100 && cols < 100){
					for(int i = 0; i < rows; i++){
						for(int j = 0; j < cols; j++){
							printf("%d ", arr[i][j]);	
						}
						printf("\n");
					}
					
				}else{
					printf("nhap lai so cot so hang\n");
				}
				break;
			case 3:
				if(rows > 0 && cols > 0 && rows < 100 && cols < 100){
					int tong = 0;

					for(int i = 0; i < cols; i++){
						tong += arr[0][i];
						printf("%d ",arr[0][i]);	
					}

					for(int i = 0; i < cols; i++){
						tong += arr[rows-1][i];
						printf("%d ",arr[rows-1][i]);	
					}

					for(int i = 1; i < rows-1; i++){
						tong += arr[i][0];
						printf("%d ",arr[i][0]);	
					}

					for(int i = 1; i < rows-1; i++){
						tong += arr[i][cols-1];
						printf("%d ",arr[i][cols-1]);	
					}
					printf("\nTong: %d\n", tong);
					
				}else{
					printf("nhap lai so cot so hang\n");
				}
				break;
			case 4:
				if(rows > 0 && cols > 0 && rows < 100 && cols < 100 && cols == rows){
					for(int i = 0; i < rows; i++){
						printf("%d ", arr[i][i]);
					}
					printf("\n");
				}else{
					printf("nhap lai so cot so hang(so cot = so hang)\n");
				}	
				
				break;
			case 5:
				if(rows > 0 && cols > 0 && rows < 100 && cols < 100 && cols == rows){
					for(int i = 0; i < rows; i++){
						printf("%d ", arr[i][rows-1-i]);
					}
					printf("\n");
				}else{
					printf("nhap lai so cot so hang(so cot = so hang)\n");
				}	
				
				break;
			case 6:
				if(rows > 0 && cols > 0 && rows < 100 && cols < 100 && cols == rows){
					for(int i = 0; i < rows-1; i++){
						for(int j = 0; j < rows-1-i; j++){
							if(arr[j][j]>arr[j+1][j+1]){
								int temp = arr[j][j];
								arr[j][j] = arr[j+1][j+1];
								arr[j+1][j+1] = temp;
							}
						}
					}
					printf("da doi vi chi phan tu tren duong treo theo thu tu tang dan\n");
				}else{
					printf("nhap lai so cot so hang(so cot = so hang)\n");
				}	
				
				break;	
			case 7:
				if(rows > 0 && cols > 0 && rows < 100 && cols < 100){
					int nhap;
					printf("nhap mot phan tu muon tim: ");
					scanf("%d", &nhap);
					
					for(int i = 0; i < rows; i++){
						for(int j = 0; j < cols; j++){
							if(arr[i][j]==nhap){
								printf("vi tri phan tu %d nam trong arr[%d][%d]", arr[i][j], i, j);
								break;
							}	
						}
					}
				}else{
					printf("nhap lai so cot so hang\n");
				}	
				break;	
			case 8:
				printf("thoat\n");
					
				break;	
			default:
			
				break;
					
			
		}	
	}while(n!=8);	
	
 		
 	return 0;
}
