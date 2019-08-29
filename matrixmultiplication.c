# include<stdio.h>
int main(){
	int a[20][20], m,n,i,j,k,l,b[20][20],mul, mult[20][20],t;
	printf("enter the size of first matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of first matrix\n");
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
}
printf("enter the size for second matrix\n");
scanf("%d%d",&k,&l);
printf("enter the elements for second matrix\n");
for(i=0;i<k;i++){
	for(j=0;j<l;j++){
		scanf("%d",&b[i][j]);
	}
}
if(n!=k){
	printf("the multiplication is not valid\n");
}
else{
	printf("the multiplication is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			for(t=0;t<k;t++){
				mul=mul+a[i][t]*b[t][j];
			}
			mult[i][j]=mul;
			mul=0;
		}
	}

for(i=0;i<m;i++){
	for(j=0;j<l;j++){
		printf("%d\t",mult[i][j]);
	}
	printf("\n");
}
}
return 0;
}
