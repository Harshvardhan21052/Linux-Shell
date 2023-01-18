#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	if(strcmp(argv[0],"rm")==0){
		//printf("fork/exec call\n");
		if(argv[1][0]=='-'){
			//printf("option mode\n");
			if(argv[1][1]=='v'){
				int i = 2;
				while(argv[i]!=NULL){
					int rval = remove(argv[i]);
					if(rval == 0){
						printf("%s\n",argv[i]);
					}else{
						printf("Unsuccessfull\n");
					}
					i++;
				}
			}else if(argv[1][1]=='i'){
				int i = 2;
				while(argv[i]!=NULL){
					printf("Do you want to remove %s?\n",argv[i]);
					char c;
					scanf("%c",&c);
					if(c == 'y'){
						int rval = remove(argv[i]);
						if(rval == 0){
							printf("%s\n",argv[i]);
						}else{
							printf("Unsuccessfull\n");
						}
					}
					i++;
				}
			}else{
				printf("Enter a valid option");
			}
		}else{
			//printf("normal mode\n");
			int i = 1;
			while(argv[i]!=NULL){
				int rval = remove(argv[i]);
				if(rval != 0){
					printf("Unsuccessfull\n");
				}
				i++;
			}

		}

	}else{
		//printf("thread call\n");
		if(argv[2][0]=='-'){
			//printf("option mode\n");
			if(argv[2][1]=='v'){
				int i = 3;
				while(argv[i]!=NULL){
					int rval = remove(argv[i]);
					if(rval == 0){
						printf("%s\n",argv[i]);
					}else{
						printf("Unsuccessfull\n");
					}
					i++;
				}

			}else if(argv[2][1]=='i'){
				int i = 3;
				while(argv[i]!=NULL){
					printf("Do you want to remove %s?\n",argv[i]);
					char c;
					scanf("%c",&c);
					if(c == 'y'){
						int rval = remove(argv[i]);
						if(rval == 0){
							printf("%s\n",argv[i]);
						}else{
							printf("Unsuccessfull\n");
						}
					}
					i++;
				}

			}else{
				printf("Enter a valid option");
			}
		}else{
			//printf("normal mode\n");
			int i = 2;
			while(argv[i]!=NULL){
				int rval = remove(argv[i]);
				if(rval != 0){
					printf("Unsuccessfull\n");
				}
				i++;
			}

		}	

	}
	return 0;
}