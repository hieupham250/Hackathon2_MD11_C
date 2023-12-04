#include<stdio.h> 
#include<string.h>
#include <stdbool.h>

struct todo{
	int id;
	char startDate[50];
	char endDate[50];
	char content[100];
	bool status;
};

void displayTodo(struct todo arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("ID: %d\t",arr[i].id);
		printf("Ngay bat dau: %s\t",arr[i].startDate);
		printf("Ngay ket thuc: %s\t",arr[i].endDate);
		printf("Noi dung: %s\t",arr[i].content);
		if(arr[i].status==1){
			printf("Trang thai: Hoan thanh\n");
		}else{
			printf("Trang thai: Chua hoan thanh\n");
		}
	}
}

int main(){
	int i,j;
	int index = 2;
	int count;
	struct todo todoList[2] ={
		{1,"4/12/2023","5/12/2023","di hoc, lam viec nha",1},
		{2,"6/12/2023","7/12/2023","di du lich",0}
	};
	do{
		printf("********************MENU********************\n");
		printf("1. In toan bo danh sach todo.\n");
		printf("2. Them moi todo.\n");
		printf("3. Cap nhat thong tin trong todo.\n");
		printf("4. Xoa mot todo\n");
		printf("5. Sap xep todo.\n");
		printf("6. Tim kiem todo.\n");
		printf("7. Tim kiem va in cac thong tin trong todo.");
		printf("8. Thoat.\n");
		int choice;
		printf("Chon chuc nang: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				displayTodo(todoList,index);
				break;
			case 4:
				count=0;
				int delete_id;
				printf("Nhap ID can xoa: ");
				scanf("%d",&delete_id);
				for (i=0;i<index;i++) {
                    if (todoList[i].id == delete_id)
                    for (j=i;j<index-1;j++){
                    	todoList[i] = todoList[i+1];	
                    	count=1;
					}
                }
                if(count==0){
    				printf("khong tim thay\n");
				}
                index--;
                break;
		}
	}
	while(1==1);
	return 0;
}

