#include<stdio.h>
#include<string.h>
int main()
{
   int i;
   char kelime[50];
   printf("bir cumle giriniz: ");
   gets(kelime);
   for(i=0;i<strlen(kelime);i++)
   {
   	  if((kelime[i]>='A')&&(kelime[i]<='Z'))
   	  kelime[i]=kelime[i]+32; // b�y�k k�c�kler +32 k�c�k b�y�kleri -32
   }
   printf("yeni kelime : %s\n", kelime);
   return 0;

}

