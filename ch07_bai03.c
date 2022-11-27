// Nhập bốn số, sắp xếp theo thứ tự từ lớn tới nhỏ và từ nhỏ tới lớn theo menu sau:
// 1. Từ lớn tới nhỏ
// 2. Từ nhỏ tới lớn
// 3. Kết thúc
// Mời bạn cho thao tác (1..3)
#include <stdio.h>
#include <math.h>
int main () {

	float a, b, c, d;
	int e;
	printf("Moi nhap lan luot 4 so a, b, c, d: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("Moi ban chon thao tac: \n1. Tu lon toi nho \n2. Tu nho toi lon \n3. Ket thuc\n");
	scanf("%d", &e);
    printf("\nThao tac ban chon: %d", e);
	// max = a;
	// min = c;
	if (e == 1)
	{
		if(a>b) 
	{
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a>c)
    {   
    	a=a+c;
        c=a-c;
        a=a-c; 
    }
    	if(a>d)
	{	
		a=a+d;
        d=a-d;
        a=a-d;
    }
    	if(b>c)
    {   
    	b=b+c;
        c=b-c;
        b=b-c;
    }
    	if(b>d)
    {   
    	b=b+d;
        d=b-d;
        b=b-d;
    }
    	if(c>d)
    {   
    	c=c+d;
        d=c-d;
        c=c-d;
    }    
    	printf("\nDay sap xep tang dan la: %f, %f, %f, %f",a,b,c,d);
	}

	if (e == 2)
	{
		if(a>b) 
	{
        a=a+b;
        b=a-b;
        a=a-b;
    }
        // printf("a = %.2f", a);
   		if(a>c)
    {   
    	a=a+c;
        c=a-c;
        a=a-c; 
    }
    	if(a>d)
	{	
		a=a+d;
        d=a-d;
        a=a-d;
    }
    	if(b>c)
    {   
    	b=b+c;
        c=b-c;
        b=b-c;
    }
    	if(b>d)
    {   
    	b=b+d;
        d=b-d;
        b=b-d;
    }
    	if(c>d)
    {   
    	c=c+d;
        d=c-d;
        c=c-d;
    }    
    	printf("\nDay sap xep giam dan la: %.2f, %.2f, %.2f, %.2f",d,c,b,a);
	}
	if (e == 3)
	{ 
		printf("\nKet thuc");
	}
}