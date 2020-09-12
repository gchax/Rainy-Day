#include<stdio.h>

int main() {
	int num,row,air1,cloud,air2,raindrop,i=1;
	printf("\"When one\'s heart is broken, one shall seek for the rain\"\nSo, how much rain do you need? ");
	scanf_s("%d",&num);
	
	for (row = 1;row <= num / i;row++) {
		for (air1 = 1;air1 <= (num /2)-2 ;air1++) printf("  ");
		printf("( ");
		for (cloud = 1;cloud <= num;cloud++) printf("  ");
		printf(" )");
		printf("\n");
		i++;
	}
	for (row = 1;row <= num;row++) {
		for (air2 = 1;air2 <= num-row; air2++) printf(" ");
		for (raindrop = 1;raindrop <= num; raindrop++) printf("/ ");
		printf("\n");
	}
	printf("\n;)\n");

	return 0;
}
