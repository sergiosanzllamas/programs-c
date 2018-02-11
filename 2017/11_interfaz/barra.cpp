#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>




int main(){
printf("Cargando \n");
for(int i=0; i<=100; i++){
sleep(1);
fprintf(stderr, "\r");
 for(int progre=0; progre<=i; progre++)
fprintf(stderr, "=");
fprintf(stderr, "%i%%", i);
}
fprintf(stderr, "\n\nDone.");

return EXIT_SUCCESS;
}
