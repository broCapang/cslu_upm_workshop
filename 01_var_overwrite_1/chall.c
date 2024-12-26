#include <stdio.h>

void vuln(){

	int admin = 0;
	char buf[16];
	printf("Enter your message: ");
	gets(buf);

	if (admin == 0 ){
		printf("Your message has been pass into the admin\n");

	}else{
		printf("Hello Admin\n");
		system("/bin/sh");
	}

	return;


}
int main(){
	vuln();
	return 0;

}

