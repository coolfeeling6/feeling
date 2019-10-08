#include <stdio.h>
int main() {
	//code
	float sp ,cp,l,p;
	printf("enter the value of cost price and selling price : ");
	scanf("%f %f ",cp,sp);
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
