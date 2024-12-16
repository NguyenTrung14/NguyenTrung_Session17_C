#include<stdio.h>
int main(){
	int select;
    int arr[10000];
    int index;
    int a, x;
    int number[10000];
	do{
		printf("\n \n \t \tMENU \n1. Nhap vao so phan tu va tung phan tu \n2. In ra cac phan tu la so chan \n3. In ra cac phan tu la so nguyen to \n4. Dao nguoc mang \n5. Sap xep mang \n   1,Tang dan \n   2,Giam dan \n6. Nhap vao mot phan tu va tim kiem phan tu trong mang \n7. Thoat \n");
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
				a=0;
				for(int i=0;i<index;i++){
					if(arr[i]%2==0){
						printf("%d\t",arr[i]);
						a=1;
					}
				}
				if(a==0){
					printf("Mang khong chua so chan \n");
				}
				break;
			case 3:
				a=0;
				for(int i=0;i<index;i++){
					if((arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0 && arr[i]!=1 ) || arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7);
					printf("%d\t",arr[i]);
					a=1;
				}
				if(a==0){
					printf("Mang khong chua so nguyen to \n");
				}
				break;
			case 4:
				printf("Mang ban dau la : \n");
				for(int i=0;i<index;i++){
					printf("%d\t", arr[i]);
				}
				for(int j=0;j<index;j++){
					number[index-1-j]=arr[j];
				}
				printf("\nMang dao nguoc la : \n");
				for(int i=0;i<index;i++){
					printf("%d\t", number[i]);
				}
				break;
			case 5:
				printf("Moi ban chon : ");
				scanf("%d", &a);
				if(a==1){
					for(int i=0;i<index-1;i++){
						for(int j=0;j<index-1-i;j++){
							if(arr[i]>arr[i+1]){
								int temp;
			                    temp=arr[j];
			                    arr[j]=arr[j+1];
			                    arr[j+1]=temp;
							}
						}
					}
					printf("Mang sau khi duoc sap xep la : \n");
					for(int i=0;i<index;i++){
						printf("%d\t",arr[i]);
					}
				} else if(a==2){
					for(int i=0;i<index-1;i++){
						for(int j=0;j<index-1-i;j++){
							if(arr[i]<arr[i+1]){
								int temp;
			                    temp=arr[j];
			                    arr[j]=arr[j+1];
			                    arr[j+1]=temp;
							}
						}
					}
					printf("Mang sau khi duoc sap xep la : \n");
					for(int i=0;i<index;i++){
						printf("%d\t",arr[i]);
					}
				} else{
					printf("Lua chon khong hop le \n");
				}
				break;
			case 6:
				printf("Moi ban nhap phan tu muon tim kiem : ");
				scanf("%d", &x);
				a=0;
				for(int i=0;i<index;i++){
					if(arr[i]==x){
						a=1;
						printf("%d nam o vi tri %d trong mang \n",x ,i);
					}
				}
				if(a==0){
					printf("Phan tu khong nam trong mang \n");
				}
				break;
			case 7:
				break;
			default:
				printf("Lua chon khong hop le \n");
		}
	} while (select != 7);
	return 0;
}
