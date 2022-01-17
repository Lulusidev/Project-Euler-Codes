#include <stdio.h>
#include <math.h>
int main(){
    long n = 600851475143;
    for(int i=2;i<n;i++)
    {
	if(n%i==0){
	  for(int j=2;j<i/2;j++)
	  {
		if(n%i!=0){
		  printf("%i\n",j);
		}
	  }
	}
    }
    return 0;
}
