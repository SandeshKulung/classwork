#include<stdio.h>
struct store{
	char storename[100];
	int number[3];
};
int main(){
	struct store a[10];
	int count,i,j,total,nexttotal[3],star;
	printf("enter the number of stores of xyz company\n");
	scanf("%d",&count);
	for(i=0;i<count;i++){
		printf("enter the name of stores\n");
		getchar();
		gets(a[i].storename);
		printf("enter the entries for %s from sunday to friday\n",a[i].storename);
		for(j=0;j<6;j++){
						scanf("%d",&a[j].number[i]);
		}
		
	}
	printf("store name  sunday  monday  tuesday  wednesday  thursday  friday\n");
	for(i=0;i<count;i++){
		printf("%s\t",a[i].storename);
		total=0;
		for(j=0;j<6;j++){
			printf("  %d\t",a[j].number[i]);
			total=total+a[j].number[i];
		}
		nexttotal[i]=total;
		printf("\n");
	}
	for(i=0;i<count;i++){
		star=nexttotal[i]/10;
		printf("%s=",a[i].storename);
		for(j=0;j<star;j++){
			printf("*");
		}
		printf("\n");
	}
}
