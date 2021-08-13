#include "dhyey.h"
int quit() {
	newScreen();
	char ans[5];
	printf("ARE YOU SURE YOU WANT TO QUIT? : ");
	scanf("%s",ans);
	if (tolower(ans[0])=='y'){		// to covert the first letter of input to lowercase
		printf("\n\nTHANK YOU\n\n");
        exit(0);
	} else {
        return 0;
	}
}