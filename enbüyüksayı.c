#include <stdio.h>

int main() {
   int array[] = {1, 5, 9, 3, 2};  // Örnek bir dizi
   int size = sizeof(array) / sizeof(array[0]);  // Dizinin boyutunu hesapla
   int max = array[0];  // Başlangıçta en büyük sayıyı ilk eleman olarak ayarla

   // Dizi boyunca döngü
   for (int i = 1; i < size; i++) {
      if (array[i] > max) {
         max = array[i];  // Daha büyük bir sayı bulunduğunda max değerini güncelle
      }
   }

   printf("En büyük sayı: %d\n", max);

   return 0;