#include<stdio.h>
int main(){
/*	int a=10;
	int *p;
	p=&a;
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",++*p);*/
	
/*	int a=10,b=10;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("%d",*p1+*p2);*/
	
/*	int *ptr,y=456;
	ptr=&y;
	printf("%d\n",*&*&*ptr);
	return 0;*/
	
	int a=10;
	int *p,**p1;
	p=&a;;
	p1=&p;
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%p\n",&p);
	printf("%p\n",p1);
	printf("%d\n",*(&a));
	printf("%d\n",*p);
	printf("%d\n",*(&p));
	printf("%d\n",**p1);
}
