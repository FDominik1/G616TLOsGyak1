#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

int main(int argc, char **argv)
{
	int pid;

	if(argc < 1)
	{
		perror("nincs kinek");
		exit(1);
	}

	pid = atoi(argv[1]);
	kill(pid, SIGTERM;
}
