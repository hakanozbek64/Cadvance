
#include<stdio.h>
#include<conio.h>

void eksilterekYazdir(char *, int);

main()
{
      char kelime[]= {'y','a','z','i','l','i','m'};   // kelimemizi 'computer' se�iyoruz
      int boy=7;
      printf("\n\n");
      
      eksilterekYazdir(kelime, boy);  // eksilterek yazd�rmak i�in kelime adl� dizimizi ve boyutunu
                                                    // fonksiyona yolluyoruz 
      
      
      getch();
}

void eksilterekYazdir(char *kelime, int boy)  
{
     int i,j,k;
     for(i=0;i<=boy;i++)  // ilk d�ng�m�z sat�r say�m�z� belirtiyor
     {      
                       printf("\n");
                       printf("    ");
                      for(j=i;j<boy;j++)  // kelimenin ilk harflerinden birer tane eksilterek yazd�rmak i�in kurulmu� d�ng�d�r
                      {                  // i her seferinde artt�k�a dizinin di�er harfleri yazd�r�l�r
                                         // �rne�in : ilk seferde 'computer'
                                         //        ikinci seferde 'omputer' 
                                         //        ���nc� seferde 'mputer' olacak
                                         
                                         printf("%c", *(kelime+j));  // kelime[j]
                      }
                             
                      for(k=0;k<i;k++)  // kelimenin ilk harflerini sona eklemek i�in kurulmu� d�ng�d�r
                      {              // �rne�in : 
                            //   ilk seferde 'computer'
                         //   ikinci seferde 'omputer' in ard�ndan,k<i olaca��nda kelime[0] dizisinin ilk harfi olan 'c' sona yazd�r�l�r 
                          // ���nc� seferde 'mputer' in ard�ndan k<i olaca��nda kelime[0] ve kelime[1] dizisinin 
                                                     //ilk harfleri olan 'c' ve 'o' sona yazd�r�l�r 
                                         
                           printf("%c", *(kelime+k));   // kelime[k] 
                           
                      }
                                           
                      printf("\n");
     }     
}
