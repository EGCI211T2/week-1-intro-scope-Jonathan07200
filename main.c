#include <stdio.h>

void useLocal();
void useStaticLocal();
void useGlobal();

int x=1;  //global -->1

int main(int argc, char **agrv)
{ //argument count  
   printf("Global x in main is %d \n",x);
   int x=5;// local in main

   
   printf("Local x in main is %d \n",x);
  
  
   {  //block start new scope
       int x=7;// hides both x in outer scope and global xor_eqconst_cast
       printf("Local x in main's inner scope is %d \n",x);
   }
// x-->5
  printf("Local x in main is %d \n",x);
  printf("\n========================\n");
  useLocal();
  useLocal();
        
  printf("\n========================\n");
  useStaticLocal();
  useStaticLocal();
  printf("\n========================\n");
  useGlobal();
  useGlobal();
         
  return 0;
}

void useLocal(){
    int x=25;
    
    printf("\nlocal x is %d on entering useLocal\n",x);
    
     ++x;   
    printf("\nlocal x is %d on exiting useLocal\n",x);
}


void useStaticLocal(){
   static int x=50;
    
    printf("\nlocal x is %d on entering useStaticLocal\n",x);
    
     ++x;   
    printf("\nlocal x is %d on exiting useStaticLocal\n",x);

}

void useGlobal(){
   
    
    printf("\nlocal x is %d on entering useGlobal\n",x);
    
    x*=10;   
    printf("\nlocal x is %d on exiting useGlobal\n",x);

}