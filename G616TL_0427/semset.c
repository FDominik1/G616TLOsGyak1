#include <stdio.h>
#include <stdlib.h>

#define KEY 4123L
#define PERM 00666

int main(){
int id;
struct sembuf up[1] = {0, 1, SEM_UNDO};
struck sembuf down[1] = {0, -1, SEM_UNDO};
	if((id = semget(KEY, 1, 0)) < 0){
		perror("még nem létezik szemafor.");
		exit(-1);
	}

	puts(" itt fut a nem kritikus szakasz");

	semop(id, down, 1);
	puts(" Itt fut a kritikus szakasz");
	semop(id, up, 1);

	puts("itt ismét a nem kritikus szakasz fut");

	exit(0);
}
