#include <stdio.h>

int main(){
  int sig=0;
  for (int i=0;i<1000;i++){
	 if (i%3==0 || i%5==0){
		sig += i;
	 }
  }

  printf("%d\n",sig);

  return 0;
}




