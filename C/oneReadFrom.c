#include <stdio.h>

int one() {

  FILE *fp;

   fp = freopen("oneWriteto.txt", "w+", stdout);

   printf("Hello Hello");

   fclose(fp);
   fclose(fp);
}
