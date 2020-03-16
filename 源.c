#include<stdio.h>
#include<stdlib.h>

struct bits
{
	unsigned char ch1 : 1;
	unsigned char ch2 : 1;
	unsigned char ch3 : 1;
	unsigned char ch4 : 1;
	unsigned char ch5 : 1;
	unsigned char ch6 : 1;
	unsigned char ch7 : 1;
	unsigned char ch8 : 1;
};
int main()
{
	double data = 1;
	int lenth = 8;
	struct bits* p = &data;
	printf("%p\n", &data);
	while (lenth--)
	{
		printf("%d%d%d%d %d%d%d%d ",
			(p + lenth)->ch8,
			(p + lenth)->ch7,
			(p + lenth)->ch6,
			(p + lenth)->ch5,
			(p + lenth)->ch4,
			(p + lenth)->ch3,
			(p + lenth)->ch2,
			(p + lenth)->ch1);
	}


}