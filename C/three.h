#include<stdio.h>
#include<stdlib.h>

int three() {
  FILE *fp;
char ch;
fp=freopen("threeWriteto.txt","w+",stdout);


while(1)
{
ch=getchar();
if(ch=='*')      //exit when * is pressed
exit(0);
putchar(ch);

}

fclose(fp);   //file closing
}
