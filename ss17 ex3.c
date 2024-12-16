#include<stdio.h>
#include<string.h>
#include<ctype.h>

int select;
//char text1[10000];
//char text2[10000];
int a;


int main(){
	char *text1=(int*)malloc(1000*sizeof(int));
	char *text2=(int*)malloc(1000*sizeof(int));
	do{
		printf("\n \n \t \tMENU \n1. Nhap vao chuoi \n2. In ra chuoi dao nguoc \n3. Dem so luong tu trong chuoi \n4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau \n5. In hoa tat ca chu cai trong chuoi \n6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau \n7. Thoat \n");
		scanf("%d", &select);
		while((getchar()) != '\n');
		switch(select){
			case 1:
				fgets(text1,10000,stdin);
				break;
			case 2:
				fgets(text1,10000,stdin);
				for(int i=0;i<strlen(text1)-1;i++){
					text2[strlen(text1)-i-1]=text1[i];
				}
				for(int i=0;i<strlen(text1);i++){
					printf("%c \n", text2[i]);
				}
				break;
			case 3:
				fgets(text1,10000,stdin);
				a=1;
				for(int i=0;i<strlen(text1)-1;i++){
					if(isblank(text1[i])){
						a++;
					}
				}
				printf("So luong tu trong chuoi la : %d\n",a);
				break;
			case 4:
				fgets(text1,10000,stdin);
				printf("Moi ban nhap mot chuoi khac : \n");
				fgets(text2,10000,stdin);
				if(strlen(text1)==strlen(text2)){
					printf("Hai chuoi bang nhau \n");
				} else if(strlen(text1)>strlen(text2)){
					printf("Chuoi ban dau dai hon\n");
				} else{
					printf("Chuoi ban dau ngan hon\n");
				}
				break;
			case 5:
				fgets(text1,10000,stdin);
				for(int i=0;i<strlen(text1)-1;i++){
					if(isalpha(text1[i])){
						toupper(text1[i]);
					}
				}
				fputs(text1,stdout);
				break;
			case 6:
				fgets(text1,10000,stdin);
				printf("Moi ban nhap mot chuoi khac : \n");
				fgets(text2,10000,stdin);
				strcat(text1,text2);
				fputs(text1,stdout);
				break;
			case 7:
				break;
			default:
				printf("Lua chon khong hop le ");
		}
		
	} while (select != 7);
	return 0;
}
