

#include <stdio.h>  

#include <stdlib.h>  

 #include <string.h>  

    

 char kelime[50];  

int acilan[50]={0},harfsay=0,puan,yanlis=0,dogru=0;  

    

 void adam(){  

 if(dogru!=harfsay){ printf(" _\n");  

 printf("( )"); if(yanlis==0) printf("_ Bir sorun mu vardi?!\n");  

 if(yanlis==1) printf("_ Kuru iftira! Kesinlikle boyle bir suc islemedim!\n");  

 if(yanlis==2) printf("_ Ben masumum!\n");  

 if(yanlis==3) printf("_ Avukatimi istiyorum!\n");  

 if(yanlis==4) printf("_ Bir yanlislik yapiyorsunuz!\n");  

 if(yanlis==5) printf("_ Hayir! Bunu yapamazsiniz!\n");  

 if(yanlis==6) printf("_ Nerede bu devlet? Nerede bu millet?\n");  

 if(yanlis==7) printf("_ Yardim ediiin!!!\n");  

 if(yanlis==8) printf("_ Eshedu enla ilahe illallah...!\n");  

 

 printf(" |\n");  

 printf("/|\\\n");  

 printf(" |\n");  

 printf("/ \\\n\n");}  

 else{  

 printf(" _\n");  

 printf("( )"); printf(" _ Yasasin Kurtuldum!\n");  

 printf("\\|/\n");  

 printf(" |\n");  

 printf(" |\n");  

 printf("/ \\\n\n");}  

    

}  

    

void ekran(){  

 int i;  

 printf("---------< Adam Kurtarmaca v1.0 >---------\n");  

 printf("Puan: %d\n---------------------\n",puan-100*yanlis);  

adam();  

 printf("Kelime: ");  

 for(i=0;i<harfsay;i++){  

 if(acilan[i]==1) printf("%c ",kelime[i]);  

 if(acilan[i]==0) printf("_ ");}  

    

 printf("\n1. Harf gir\n2. Kelimeyi tahmin et\n3. Cik\n");  

}  

    

 int main()  

 {  

 char harf,tahmin[50];  

 int i,sec,flag;  

 system("color 3f");  

 printf("------------< Adam Kurtarmaca v1.0 >----------------\n\n| Adam asmaca oyununa farkli bir bakis acisi... |\n\n| Yapimci: HAKAN OZBEK |\n\n");  

 printf("=> Gizli kelimeyi girin(en fazla 50 karakter): "); gets(kelime);  

   

 while(kelime[harfsay]!='\0') harfsay++;  

 puan=harfsay*100+200;  

 for(1;1;1){  

 system("cls");  

 if(yanlis==9){ system("color 4d");  

 printf("\n- Rahmetliyi nasil bilirdiniz?\n- iyi bilirdik...\n");  

 printf("\nAdami kurtaramadiniz...\n");  

 system("pause");  

 return 0;  

 }  

 if(dogru==harfsay){  

printf("\nTebrikler! Kelimeyi Buldunuz!\n:::: Puaniniz: %d ::::\n",puan-100*yanlis);  

 adam();  

 system("pause"); return 0;  

 }  

 ekran();  

 fflush(stdin);  

 scanf("%d",&sec);  

 if(sec==1){ fflush(stdin);  

 printf("Harf: "); scanf("%c",&harf);  

 flag=0;  

 for(i=0;i<harfsay;i++){  

 if(harf==kelime[i]){ acilan[i]=1; dogru++; flag=1;}  

}  

 if(flag==0){ yanlis++; printf("Yanlis!\n"); system("pause");}  


 }  

 if(sec==2){  

 printf("Kelimeyi girin: "); fflush(stdin); gets(tahmin);  

 if(strcmp(tahmin,kelime)==0){  

 system("cls");  

 dogru=harfsay;  

 adam();  

 printf("\nTebrikler! Kelimeyi Buldunuz!\n:::: Puaniniz: %d ::::\n",puan-100*yanlis);  

 system("pause"); return 0;  

 }  

 else {printf("Yanlis tahmin!\n"); yanlis++; system("pause");}  

 }  

 if(sec==3){  

 return 0;  

 }  

 if(sec>3||sec<1) {printf("\nHatali secim yaptiniz.\n"); system("pause");}  

    

 }  

 return 0;  

 } 





