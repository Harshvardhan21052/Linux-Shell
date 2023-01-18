#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	if(strcmp(argv[argc-1],"ls")==0){
		//printf("HELLO FROM NORMAL ls\n");
		struct dirent* cdir;
		DIR *dir = opendir(".");
		while((cdir = readdir(dir))!=NULL){
			if(cdir->d_name[0]!='.'){
				printf("%s ",cdir->d_name);
			}
		}
		printf("\n");
	}else{
		if(argv[argc-1][0]=='-'){
		if(strcmp(argv[argc-1],"-a")==0){
			struct dirent* cdir;
			DIR *dir = opendir(".");
			while((cdir = readdir(dir))!=NULL){
				printf("%s ",cdir->d_name);	
		}
		printf("\n");
				
		}else if(strcmp(argv[argc-1],"-i")==0){
			struct dirent* cdir;
			DIR *dir = opendir(".");
			while((cdir = readdir(dir))!=NULL){
				if(cdir->d_name[0]!='.'){
					printf("%llu %s ",cdir->d_ino,cdir->d_name);
				}
			}
			printf("\n");
		}else{
			printf("Enter a valid option");
			exit(0);
		}
	}
	}	
	
	return 0;
}
