#include <stdio.h>
#include <stdlib.h>

int Factorielle(int n){
 int f=1,i;
 for(i=1;i<n+1;i++){
    f=f*i;
 }
 return f ;
}

int main()
{
    int x ,factoriel;
     printf ("sasir un nombre:");
     scanf  ( "%d",&x);
     factoriel= Factorielle(x);
     printf ("%d",factoriel);

    return 0;
}
