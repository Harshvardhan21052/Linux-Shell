#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	if(strcmp(argv[0],"cat")==0){
		//printf("fork/exec call\n");
		if(argv[1][0]=='-'){
			//printf("option mode\n");
			if(argv[1][1]=='n'){
				FILE* f;
				int i = 2;
				char currchar;
				while(argv[i]!=NULL){
				int lno = 2;
				printf("1 ");
				f = fopen(argv[i],"r");
				if(f == NULL){
					printf("Could not open file\n");
					i++;
					continue;
				}else{
					currchar = getc(f);
					while(currchar!=EOF){
						printf("%c",currchar);
						if(currchar == '\n'){
						printf("%d ",lno);
						lno++;
					}
					currchar = getc(f);
				}
			}
			fclose(f);
			i++;
		}
	
			}else if(argv[1][1]=='e'){
				FILE* f;
				int i = 2;
				char currchar;
				while(argv[i]!=NULL){
				f = fopen(argv[i],"r");
				if(f == NULL){
				printf("Could not open file\n");
				i++;
				continue;
				}else{
				currchar = getc(f);
				while(currchar!=EOF){
					if(currchar == '\n'){
						printf("$");
					}
					printf("%c",currchar);
					currchar = getc(f);
				}
			}
			fclose(f);
			i++;
		    }

			}else{
				printf("Enter a valid option");
			}
		}else{
			//printf("normal mode\n");
			FILE* f;
			int i = 1;
			char currchar;
			while(argv[i]!=NULL){
			f = fopen(argv[i],"r");
			if(f == NULL){
				printf("Could not open file\n");
				i++;
				continue;
			}else{
				currchar = getc(f);
				while(currchar!=EOF){
					printf("%c",currchar);
					currchar = getc(f);
				}
			}
			fclose(f);
			i++;
			}

		}

	}else{
		//printf("thread call\n");
		if(argv[2][0]=='-'){
			//printf("option mode\n");
			if(argv[2][1]=='n'){
				FILE* f;
				int i = 3;
				char currchar;
				while(argv[i]!=NULL){
				int lno = 2;
				printf("1 ");
				f = fopen(argv[i],"r");
				if(f == NULL){
					printf("Could not open file\n");
					i++;
					continue;
				}else{
					currchar = getc(f);
					while(currchar!=EOF){
						printf("%c",currchar);
						if(currchar == '\n'){
						printf("%d ",lno);
						lno++;
					}
					currchar = getc(f);
				}
			}
			fclose(f);
			i++;
		}

			}else if(argv[2][1]=='e'){
				FILE* f;
				int i = 3;
				char currchar;
				while(argv[i]!=NULL){
				f = fopen(argv[i],"r");
				if(f == NULL){
				printf("Could not open file\n");
				i++;
				continue;
				}else{
				currchar = getc(f);
				while(currchar!=EOF){
					if(currchar == '\n'){
						printf("$");
					}
					printf("%c",currchar);
					currchar = getc(f);
				}
			}
			fclose(f);
			i++;
		    }

			}else{
				printf("Enter a valid option");
			}
		}else{
			//printf("normal mode\n");
			FILE* f;
			int i = 2;
			char currchar;
			while(argv[i]!=NULL){
			f = fopen(argv[i],"r");
			if(f == NULL){
				printf("Could not open file\n");
				i++;
				continue;
			}else{
				currchar = getc(f);
				while(currchar!=EOF){
					printf("%c",currchar);
					currchar = getc(f);
				}
			}
			fclose(f);
			i++;
			}

		}	

	}

	return 0;
}
	
