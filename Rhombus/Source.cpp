#include<iostream>
using namespace std;

int main() {
	int num,row,outcld,incld,rstar,rspace,i=1;
	printf("\"When one\'s heart is broken, one shall seek for the rain\"\nSo, how much rain do you need? ");
	scanf_s("%d",&num);
	
	for (row = 1;row <= num / i;row++) {
		for (outcld = 1;outcld <= (num /2)-2 ;outcld++) printf("  ");
		printf("( ");
		for (incld = 1;incld <= num;incld++) printf("  ");
		printf(" )");
		printf("\n");
		i++;
	}
	for (row = 1;row <= num;row++) {
		for (rspace = 1;rspace <= num-row; rspace++) printf(" ");
		for (rstar = 1;rstar <= num; rstar++) printf("/ ");
		printf("\n");
	}
	printf("\n;)\n");

	return 0;
}