#include <stdio.h>
#include <stdlib.h>

#define KEY 4123L
#define PERM 00666

int main(){

	int id;

	if((id = semget((KEY, 1,0 )) < 0){
		perror("már nem létezik a szemafor");
		exit(-1);


	}

	if(semctl(id, 0, IPC_RMID, 0) < 0){
		perror("nem sikerült törölni");
		exit(-1);
	}

	puts("A szemafort megszüntettük\n");
	exit(0);
}