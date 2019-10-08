#include <stdio.h>
int main() {
	//code
	float sp ,cp,l,p;
	printf("Enter the value of cost price  : ");
	scanf("%f",&cp);
	printf("enter the value of selling price : ");
	scanf("%f",&sp);
	if(sp<cp)
	{
	    l=cp-sp;
	    printf("loss of %f incurned",l);
	}
	else
	{
	    p=sp-cp;
	    printf("profit of %f made",p);
	}
	return 0;
}
