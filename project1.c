#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

//Lab 1
//Max Forbang and Martin Quezada
//This work abides by the JMU Honor Code.

int main(int argc, char *argv[]) {
	
	//stores two file name parameters
	char *inputFile = argv[0];
	char *mapFile = argv[1];
		
	
	//opens input file
	int inputFD	= open(argv[0], O_RDONLY);
	if (inputFD == -1) {
		printf("Opening of file %s failed: %s\n", argv[0], strerror(errno));
		exit(1);
	}
	
	
}

	//Possible way to store fd's and avoid inefficient solution: 
	//(not sure if a struct is what we have to use, PA just mentions holding fd's and their associated names in some kind of data structure)
	
// struct FileDescriptors {
	// int fd;
	// char name[12];
// }
