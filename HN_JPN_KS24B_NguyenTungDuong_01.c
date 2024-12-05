#include<stdio.h>

int main(){
	int n, cols, tongSoHoanHao, tongCacSoHoanHao, max, maxSec, newElement, newIndex;
	int arr[100];
	do{
		printf("MENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang\n");
		printf("3. Dem so luong cac so hoan hao co trong mang\n");
		printf("4. Tim gia tri nho thu 2 trong mang\n");
		printf("5. Them mot phan tu vao vi tri dau tien trong mang\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan (Selection sort)\n");
		printf("8. Tim kiem phan tu trong mang, phan tu tim kiem do nguoi dung nhap vao. Su dung thuat toan Binary search\n");
		
		printf("11. Thoat\n");
		printf("Chon: ");
		scanf("%d", &n);
		
		switch(n){
			case 1:
				printf("Nhap so phan tu muon them vao mang trong khoan [0; 100]: ");
				scanf("%d", &cols);
				if(cols >= 0 && cols <= 100){
					for(int i = 0; i < cols; i++){
						printf("arr[%d]=", i);
						scanf("%d", &arr[i]);
					}
				}else{
					printf("So phan tu them vao mang sai\n");	
				}
				break;
			case 2:
				for(int i = 0; i < cols; i++){
						printf("arr[%d] = %d, ", i, arr[i]);
				}
				printf("\n");
				break;
			case 3:
				tongSoHoanHao = 0;
				tongCacSoHoanHao = 0;
				for(int i = 0; i < cols; i++){
					for(int j = 1; j < arr[i]; j++){
						if(arr[i] % j == 0){
							tongSoHoanHao += j;
						}
					}
					if(tongSoHoanHao != 0 && tongSoHoanHao == arr[i]){
						tongCacSoHoanHao++;
					}
				}
				printf("So luong cac so hoan hao co trong mang la: %d\n", tongCacSoHoanHao);
				break;	
			case 4:
				max = 0;
				maxSec = 0;
				for(int i = 0; i < cols; i++){
					if(max < arr[i]){
						max = arr[i];
					}
				}
				for(int i = 0; i < cols; i++){
					if(arr[i] != max){
						if(maxSec < arr[i]){
							maxSec = arr[i];							
						}
					}
				}
				printf("Gia tri nho thu 2 trong mang la: %d\n", maxSec);
				break;
			case 5:
				printf("nhap so phan tu muon them: ");
				scanf("%d", &newElement);
				cols++;
				for(int i = cols-1; i >= 0; i--){
					arr[i+1] = arr[i];
				}
				arr[0] = newElement;
				
				break;	
			case 6:
				printf("Nhap vi tri muon xoa: ");
				scanf("%d", &newIndex);
				if(newIndex >= cols){
					
				}else{
					cols --;
					for(int i = newIndex; i < cols; i++){
						arr[i] = arr[i+1];
					}	
				}
				break;
				
			case 7:
				for (int i = 0; i < cols - 1; i++){
					int min = i;
					for(int j = i + 1; j < cols; j++){
						if(arr[j] > arr[min]){
							min = j;
						}
					}
					int temp = arr[min];
					arr[min] = arr[i];
					arr[i] = temp;
				}
				break;
			case 8:
			
				break;
				
			case 11:
				printf("Thoat");
				break;							
			default:
				
				break;	
		}
	}while(n != 11);
	return 0;
}
