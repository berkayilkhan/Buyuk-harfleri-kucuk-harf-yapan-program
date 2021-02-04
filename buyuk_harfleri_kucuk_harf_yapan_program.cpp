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
   	  kelime[i]=kelime[i]+32; // büyük kücükler +32 kücük büyükleri -32
   }
   printf("yeni kelime : %s\n", kelime);
   return 0;

}

