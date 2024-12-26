#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vuln(){
    int pass = 0x12345678;
    char buffer[32];
    printf("Enter message: ");
    gets(buffer);
    if(pass == 0x13371337){
        printf("good job!!\n");
        printf("%04x\n", pass);
    }
    else{
        printf("%04x\n", pass);
        printf("...\n");
    }
}

int main(){
    vuln();
    return 0;
}
