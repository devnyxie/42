#include <unistd.h>
#include <string.h>

int main(void){
	const char *message = "Hello World!\n";
	write(1, message, strlen(message));
	return 0;
}
