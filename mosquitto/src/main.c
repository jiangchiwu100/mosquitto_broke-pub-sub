#include <stdlib.h>
#include <stdio.h>

int main (int argc, char* argv[])
{
	printf("mosquitto start!\r\n");
	system("./mosquitto -v");
	printf("Done\r\n");
	exit(0);
}
