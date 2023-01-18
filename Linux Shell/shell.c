#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void systemcall(char* cmd){
	system(cmd);
	return;
}

int main(){
	system("clear"); 
	char input[200];
	char* splitted[400];
	while(1){
		printf("hi ");
		char c;
		scanf("%c",&c);
		int i =0;
		while(c!= '\n'){
			input[i] = c;
			scanf("%c",&c);
			i++;
		}
		input[i] = '\0';
    	i = 0; // for main string
    	int j = 1; // for splitted array,j= number of elements in splitted array
    	splitted[0] = input;
    	while(input[i]!= '\0'){
      		if(input[i] == ' '){
        		input[i] = '\0';
        		splitted[j] = input+i+1;
        		j++;
        		i++;
      		}else{
        		i++;
      		}
    	}
    	splitted[j] = NULL;
    	j++;
    	if(strcmp(splitted[0],"cd")==0){
    		char cwd[200];
    		int rval = chdir(splitted[1]);
    		if(rval == 0){
    			printf("%s\n",getcwd(cwd,200));
    		}else if (rval == -1){
    			printf("Error\n");
    		}	

    	}else if(strcmp(splitted[0],"mkdir")==0){
    		
    		if(strcmp(splitted[j-2],"&t")==0){
    			pthread_t t;
    			char a[1000] = "/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/mkdir";
    			for(int x=0;x<j-2;x++){
    				strcat(a," ");
    				strcat(a,splitted[x]);
    			}
    			pthread_create(&t,NULL, systemcall,a);
    			pthread_join(t,NULL);
    		}else{
    			int rc = fork();
    			if(rc<0){
    				printf("Fork Failed");
    			}else if(rc == 0){
    				//printf("IN CHILD\n");
    				execvp("/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/mkdir",splitted);
    			}else{
    				wait(NULL);
    				//printf("Back in parent\n");
    			}
    		}

    	}else if(strcmp(splitted[0],"echo")==0){
    		if(splitted[1][0]=='-'){
    			if(splitted[1][1]=='n'){
    				for(int k=2;k<j-2;k++){
    					printf("%s ",splitted[k]);
    				}
    				printf("%s",splitted[j-2]);

    			}else if(strcmp(splitted[1],"--help")==0){
    				printf("--help\n");
    			}
    			else{
    				printf("Invalid option\n");
    			}
    		}else{
    			for(int k=1;k<j-2;k++){
    				printf("%s ",splitted[k]);
    			}
    			printf("%s\n",splitted[j-2]);
    		}

    	}else if(strcmp(splitted[0],"pwd")==0){
    		if(splitted[1]!=NULL){
    			if(strcmp(splitted[1],"-L")!=0){
    				printf("Invalid Option\n");
    				continue;
    			}
    		}
    		char cwd[200];
    		printf("%s\n",getcwd(cwd,200));

    	}else if(strcmp(splitted[0],"ls")==0){

    		if(strcmp(splitted[j-2],"&t")==0){
    			pthread_t t;
    			char a[1000] = "/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/ls";
    			for(int x=0;x<j-2;x++){
    				strcat(a," ");
    				strcat(a,splitted[x]);
    			}
    			pthread_create(&t,NULL, systemcall,a);
    			pthread_join(t,NULL);

    		}else{
    			int rc = fork();
    			if(rc<0){
    				printf("Fork Failed");
    			}else if(rc == 0){
    				//printf("IN CHILD\n");
    				execvp("/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/ls",splitted);
    			}else{
    				wait(NULL);
    				//printf("Back in parent\n");
    			}
    		}

    	}else if(strcmp(splitted[0],"cat")==0){
    		
    		if(strcmp(splitted[j-2],"&t")==0){
    			pthread_t t;
    			char a[1000] = "/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/cat";
    			for(int x=0;x<j-2;x++){
    				strcat(a," ");
    				strcat(a,splitted[x]);
    			}
    			pthread_create(&t,NULL, systemcall,a);
    			pthread_join(t,NULL);

    		}else{
    			int rc = fork();
    			
    			if(rc<0){
    				printf("Fork Failed");
    			}else if(rc == 0){
    				//printf("IN CHILD\n");
    				execvp("/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/cat",splitted);
    			}else{
    				wait(NULL);
    				//printf("Back in parent\n");
    			}
    		}

    	}else if(strcmp(splitted[0],"date")==0){
    		
    		if(strcmp(splitted[j-2],"&t")==0){
    			pthread_t t;
    			char a[1000] = "/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/date";
    			for(int x=0;x<j-2;x++){
    				strcat(a," ");
    				strcat(a,splitted[x]);
    			}
    			pthread_create(&t,NULL, systemcall,a);
    			pthread_join(t,NULL);

    		}else{
    			int rc = fork();
    			
    			if(rc<0){
    				printf("Fork Failed");
    			}else if(rc == 0){
    				//printf("IN CHILD\n");
    				execvp("/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/date",splitted);
    			}else{
    				wait(NULL);
    				//printf("Back in parent\n");
    			}
    		}

    	}else if(strcmp(splitted[0],"rm")==0){
    		
    		if(strcmp(splitted[j-2],"&t")==0){
    			pthread_t t;
    			char a[1000] = "/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/rm";
    			for(int x=0;x<j-2;x++){
    				strcat(a," ");
    				strcat(a,splitted[x]);
    			}
    			pthread_create(&t,NULL, systemcall,a);
    			pthread_join(t,NULL);

    		}else{
    			int rc = fork();
    			if(rc<0){
    				printf("Fork Failed");
    			}else if(rc == 0){
    				//printf("IN CHILD\n");
    				//execl("/Users/harshvardhan/desktop/harshvardhan/College assgn,projects,books/sem3/Operating Systems/Assignment 1/rm","rm","2.txt",NULL);
    				execvp("/Users/harshvardhan/desktop/harshvardhan/College_assgn,projects,books/sem3/Operating_Systems/Assignment_1/rm",splitted);
    			}else{
    				wait(NULL);
    				//printf("Back in parent\n");
    			}
    		}

    	}else{
    		printf("Enter a valid command!\n");
    	}

    	for(int clr=0;clr<100;clr++){
    		input[i] = 'a';
    	}


	}
	return 0;
}