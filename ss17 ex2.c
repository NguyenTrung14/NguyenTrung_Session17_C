#include<stdio.h>
#include<ctype.h>
#include<string.h>

int index;
int select;
char text[10000];
int a, b;

int main(){
	char *text=(int*)malloc(1000*sizeof(int));
	do{
		printf("\n \n \t \tMENU \n1. Nhap vao chuoi \n2. In ra chuoi \n3. Dem so luong chu cai trong chuoi va in ra \n4. Dem so luong chu so trong chuoi va in ra \n5. Dem so luong ki tu dac biet trong chuoi va in ra \n6. Thoat \n");
		scanf("%d", &select);
		while((getchar()) != '\n');
		switch(select){
			case 1:
				fgets(text,10000,stdin);
				break;
			case 2:
				fgets(text,10000,stdin);
				fputs(text,stdout);
				break;
			case 3:
				a=0;
				fgets(text,10000,stdin);
				for(int i=0;i<strlen(text)-1;i++){
					if(isalpha(text[i])){
						a++;
					}
				}
				printf("So luong chu cai la : %d\n",a);
				break;
			case 4:
				a=0;
				fgets(text,10000,stdin);
				for(int i=0;i<strlen(text)-1;i++){
					if(isdigit(text[i])){
						a++;
					}
				}
				printf("So luong chu so la : %d\n",a);
				break;
			case 5:
				a=0;
				b=0;
				fgets(text,10000,stdin);
				for(int i=0;i<strlen(text)-1;i++){
					if(isalpha(text[i])){
						a++;
					} else if(isdigit(text[i])){
						a++;
					} else{
						b++;
					}
				}
				printf("So luong ki tu dac biet la : %d\n",b);
				break;
			case 6:
				break;
			default:
				printf("Lua chon khong hop le ");
		}
	} while(select!=6);
	return 0;
}
