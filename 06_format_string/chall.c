#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

  char buf[64];
  char password[16];
  char *p_ptr = password;
  char entered_password[16];
  
  FILE *file = fopen("password.txt", "r");
  if (file == NULL) {
    printf("password.txt is missing!\n");
    exit(0);
  }
  
  fgets(password, sizeof(password), file);
  
  while(1) {
    printf("> ");
    fgets(buf, sizeof(buf), stdin);
    if (strcmp(buf, "\n") == 0) {
	    break;
    }
    
    printf(buf);

  }
  printf("Enter password: ");
  fgets(entered_password, sizeof(entered_password), stdin);

  size_t len = strlen(entered_password);
  if (len > 0 && entered_password[len - 1] == '\n') {
	  entered_password[len - 1] = '\0';
  }

  if (strcmp(entered_password, password) == 0) {
	  printf("Access granted!\n");
  } else {
	  printf("Access denied!\n");
  }
  return 0;
}
