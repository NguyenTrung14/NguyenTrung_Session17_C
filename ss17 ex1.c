#include<stdio.h>
void menu2(int index, int arr[]){
	printf("Gia tri cua mang la : \n");
	for(int i=0;i<index;i++){
		printf("%d\t", arr[i]);
	}
}
void menu4(int index, int arr[]){
	int total = 0;
	for(int i =0;i<index;i++){
		total += arr[i];
	}
	printf("Tong cac phan tu trong mang la : %d\n",total);
}
void menu5(int index, int arr[]){
	int max=arr[0];
	for(int i =0;i<index;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la : %d\n",max);
}
int main(){
	int select;
    int arr[10000];
    int index;
	do{
		printf("\n \n \t \tMENU \n1. Nhap vao so phan tu va tung phan tu \n2. Hien thi cac phan tu trong mang \n3. Tinh do dai mang \n4. Tinh tong cac phan tu trong mang \n5. Hien thi phan tu lon nhat \n6. Thoat \n \n \n");
		scanf("%d", &select);
		printf("Moi ban nhap vao so phan tu : ");
	    scanf("%d", &index);
	    for(int i=0;i<index;i++){
			printf("Moi ban nhap gia tri arr[%d] : ",i);
			scanf("%d", &arr[i]);
	    }
		switch(select){
			case 1:
				continue;
			case 2:
				menu2(index,arr);
				break;
			case 3:
				printf("Do dai cua mang la : %d\n",index);
				break;
			case 4:
				menu4(index,arr);
				break;
			case 5:
				menu5(index,arr);
				break;
			case 6:
				break;
			default:
				printf("Lua chon khong hop le \n");
		}
	} while(select != 6);
	return 0;
}
