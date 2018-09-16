#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
//1
unsigned int t = 2500342132;
//2
char *tp = &t;
//3
printf("int in hex form: %x\n",t);
//printf("char %x\n",*tp);
//4
for(int x = 0; x < 4;x++){

  printf("individual bytes of int t: %hhx\n", *tp);

  tp++;
}//5a
for (int x =0; x<4;x++){
    *tp += 1;
    tp ++;
    printf("hex form for 5a %x\n", t);
    printf("decimal form for 5a %d\n", t);
}
//5b
for (int x =0; x<4;x++){
    *tp += 16;
    tp ++;
    printf("hex form for 5b %x\n", t);
    printf("decimal form for 5b %d\n", t);
}

return 0;
}
