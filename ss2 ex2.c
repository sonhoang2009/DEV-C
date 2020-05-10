#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 

{
	char abc;
	printf("char=%c");
	scanf("%c",&abc);
	
	int xyz;
	printf("int=%d");
	scanf("%d",&xyz);
	
	float length;
	printf("float=%f");
	scanf("%f",&length);
	
	double area;
	printf("double area=%lf");
	scanf("%lf",&area);
	
	long liteyrs;
	printf("long liteyrs=%ld");
	scanf("%ld",&liteyrs);
	
	short arm;
	printf("short arm=%d");
	scanf("%d",&arm);
	
	printf("\n gia tri char ban vua nhap la: %c",abc);
	printf("\n gia tri int ban vua nhap la: %d",xyz);
	printf("\n gia tri float ban vua nhap la: %f",length);
	printf("\n gia tri double ban vua nhap la: %lf",area);
	printf("\n gia tri long ban vua nhap la: %ld",liteyrs);
	printf("\n gia tri short ban vua nhap la: %d",arm);
	
	
	
	return 0;
}
