
#include<stdio.h>
#include<conio.h>

void eksilterekYazdir(char *, int);

main()
{
      char kelime[]= {'y','a','z','i','l','i','m'};   // kelimemizi 'computer' seçiyoruz
      int boy=7;
      printf("\n\n");
      
      eksilterekYazdir(kelime, boy);  // eksilterek yazdýrmak için kelime adlý dizimizi ve boyutunu
                                                    // fonksiyona yolluyoruz 
      
      
      getch();
}

void eksilterekYazdir(char *kelime, int boy)  
{
     int i,j,k;
     for(i=0;i<=boy;i++)  // ilk döngümüz satýr sayýmýzý belirtiyor
     {      
                       printf("\n");
                       printf("    ");
                      for(j=i;j<boy;j++)  // kelimenin ilk harflerinden birer tane eksilterek yazdýrmak için kurulmuþ döngüdür
                      {                  // i her seferinde arttýkça dizinin diðer harfleri yazdýrýlýr
                                         // örneðin : ilk seferde 'computer'
                                         //        ikinci seferde 'omputer' 
                                         //        üçüncü seferde 'mputer' olacak
                                         
                                         printf("%c", *(kelime+j));  // kelime[j]
                      }
                             
                      for(k=0;k<i;k++)  // kelimenin ilk harflerini sona eklemek için kurulmuþ döngüdür
                      {              // örneðin : 
                            //   ilk seferde 'computer'
                         //   ikinci seferde 'omputer' in ardýndan,k<i olacaðýnda kelime[0] dizisinin ilk harfi olan 'c' sona yazdýrýlýr 
                          // üçüncü seferde 'mputer' in ardýndan k<i olacaðýnda kelime[0] ve kelime[1] dizisinin 
                                                     //ilk harfleri olan 'c' ve 'o' sona yazdýrýlýr 
                                         
                           printf("%c", *(kelime+k));   // kelime[k] 
                           
                      }
                                           
                      printf("\n");
     }     
}
