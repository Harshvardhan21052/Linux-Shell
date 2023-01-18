#include<stdio.h>
#include<time.h>

int main(int argc, char* argv[])
{
    time_t datentime; 
    time(&datentime);
    printf("%s", ctime(&datentime));
    return 0;
}