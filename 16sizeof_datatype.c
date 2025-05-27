#include<stdio.h>
int main()
{
	unsigned a;
	signed b;
	long c;
	short d;
	int e;
	float f;
	double g;
	char h;
	
	//size of question mostly asking for aptitude because of question is tricky /confusing thats why we need to know about that
	
	printf("\nsize of unsigned data type=%d",sizeof(a));
	printf("\nsize of signed data type=%d",sizeof(b));
	printf("\nsize of long data type=%d",sizeof(c));
	printf("\nsize of short data type=%d",sizeof(d));
	printf("\nsize of int data type=%d",sizeof(e));
	printf("\nsize of float data type=%d",sizeof(f));
	printf("\nsize of double data type=%d",sizeof(g));
	printf("\nsize of character data type=%d",sizeof(h));
}
