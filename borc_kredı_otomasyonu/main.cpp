//Borç-Kredi Otomasyonu  

//HAKAN ÖZBEK

    

#include <stdio.h>  

#include <stdlib.h>  

 #include <math.h>  

    

int main()  

 {  

 long vade;  

 float taksit,faiz,borc,anapara,taksitcarpan,anaparacarpan;  

 int islem,i;  

 system("color 2A");  

 printf(".::<< Borc-Kredi Otomasyonu v1.0 Beta >>::.\nYapimci: HAKAN ÖZBEK\n");  

    

 for(1;1;1){  

 printf("\n--|| Islem Menusu ||--\n1.Vade Hesaplama\n2.Taksit Hesaplama\n3.Cikis\n----------------------\n");  

 scanf("%d",&islem);  

if(islem!=1&&islem!=2&&islem!=3) printf("\nHata: Gecersiz secim yaptiniz. Lutfen 1 veya 2 girin.\n");  

    

 if(islem==1){  

 printf("Anapara (YTL): "); scanf("%f",&anapara);  

 printf("Aylik taksit miktari (YTL): "); scanf("%f",&taksit);  

 printf("Aylik faiz yuzdesi : "); scanf("%f",&faiz);  

 if(taksit<=anapara*(faiz/100)){  

 printf("\nUyari: Odeme tutari %.0f ytl den fazla olmalidir.\n",(anapara*(faiz/100)));  

 system("pause");  

 return 0;  

 }  

 borc=anapara;  

 vade=0;  

 while(borc>0){  

 borc=borc*(faiz/100)+borc-taksit;  

 vade++;  

 }  

 printf("\nToplam taksit sayisi: %ld\n",vade);  

 printf("Son ay odenecek tutar: %.1f YTL\n",taksit+borc);  

 }  

    

 if(islem==2){  

printf("Anapara (YTL): "); scanf("%f",&anapara);  

 printf("Faiz Yuzdesi : "); scanf("%f",&faiz);  

 printf("Taksit Sayisi: "); scanf("%d",&vade);  

    

 anaparacarpan=pow((1+faiz/100),vade);  

 taksitcarpan=0;  

 for(i=0;i<vade;i++) taksitcarpan+=pow((1+faiz/100),i-1);  

    

 taksit=anapara*anaparacarpan/taksitcarpan;  

    

 printf("Taksit tutari: %.2lf YTL\n",taksit);  

    

 }  

 if(islem==3){  

 return 0;  

 }  

    

 }  
system("PAUSE");
    return EXIT_SUCCESS;
 
}
