#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wait(int seconds)
{
  clock_t endwait;
  endwait = clock () + seconds * CLK_TCK;
  while (clock() < endwait) {}
}


int main(void)
{
    int i;

       char cmd[250], h1[15], h2[15];
       printf("\n\n\tDIGITE O IP: ");
       scanf(" %[^\n]",h1);
	printf("\n");
       printf("\n\n\tDIGITE O SEGUNDO IP: ");
       scanf(" %[^\n]",h2);
	   printf("\n");	
       for ( ; ; ){
    	printf("%s","                IP 1 STATUS \n");
       sprintf(cmd,"ping -n 1 %s",h1);
        system(cmd);

        wait(2);

        sprintf(cmd,"cls");
        system(cmd);
		printf("%s","                IP 2 STATUS \n");
        sprintf(cmd,"ping -n 1 %s",h2);
        system(cmd);

        wait(4);

        sprintf(cmd,"cls");
        system(cmd);


       }


      system("pause");
       return 0;

}

 

