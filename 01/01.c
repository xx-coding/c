#include <stdio.h>
#define PRAISE "你真是太棒了!"

int main(int argc, char *argv[]) {
		char website[20];
		printf("你最喜欢的网站是什么?\n");
		scanf("%s",website);
		printf("Oh,你最喜欢的网站是.%s, %s",website, PRAISE); 
		return 0;
}
