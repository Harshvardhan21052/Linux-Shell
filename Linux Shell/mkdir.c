#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	if(strcmp(argv[0],"mkdir")==0){
		//printf("fork/exec call\n");
		if(argv[1][0]=='-'){
			//printf("option mode\n");
			if(argv[1][1]=='v'){
				int i = 2;
				while(argv[i]!=NULL){
					int rval = mkdir(argv[i],0777);
					if(rval == 0){
						printf("%s\n",argv[i]);
					}else{
						printf("Unsuccessfull");
					}
					i++;
				}
				exit(0);
			}else{
				printf("Enter a valid option");
			}
		}else{
			int i = 1;
			while(argv[i]!=NULL){
				int rval = mkdir(argv[i],0777);
				if(rval != 0){
					printf("Unsuccessfull");
				}
				i++;
			}
			exit(0);
		}

	}else{
		//printf("thread call\n");
		if(argv[2][0]=='-'){
			//printf("option mode\n");
			if(argv[2][1]=='v'){
				int i = 3;
				while(argv[i]!=NULL){
					int rval = mkdir(argv[i],0777);
					if(rval == 0){
						printf("%s\n",argv[i]);
					}else{
						printf("Unsuccessfull");
					}
					i++;
				}
				exit(0);
			}else{
				printf("Enter a valid option");
			}
		}else{
			int i = 2;
			while(argv[i]!=NULL){
				int rval = mkdir(argv[i],0777);
				if(rval != 0){
					printf("Unsuccessfull");
				}
				i++;
			}
			exit(0);	
		}
	}
	return 0;
}