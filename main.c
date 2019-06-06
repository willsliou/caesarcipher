/*
  Title: Caesar Cipher
  Description: This program takes in plain text and creates a cipher of that text. 
  
  How to use: Please enter plain type to encrypt: apples
              The ciphered text is (with key shift: 1): bqqmft
  
  Review: Suppose letter; a = 0, b = 1, c = 2, d = 3, e = 4
          key = 1 (aka. key shift)
          ((int)letter + key) mod 26 ==> cast, return ciphered letter as number, cipherValue
                                     ==> (char)cipherValue = '[some letter]'
          Demo: 'a' in apples --> a = (0 + 1) mod 26
          
          
  Notes: 
  A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
  a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z
  ASCII 'a'= 97, 'b'= 98, 'c'= 99, 'd'= 100
  
*/

#include<stdio.h>// fget(), stdin macro
#include<string.h>// stringlen()
#include<stdlib.h>

// Define Caesar Cipher Function
void caesarCipher(char * plainText, int key);

int main(void){
  int key = 1;
  char plainText[101];
  
  // Ask user 
  printf("Enter plain text to encrypt: ");
  // Get input, store in plainText variable
  fgets(plainText, sizeof(plainText, stdin); 
  
  // Print cipher text
  printf("The ciphered text is: ");
  void caesarCipher(plainText, key);
  
  //system("pause") comment out if using macOS
}

  
void caesarCipher(char * plainText, int key){
  int i=0;
  int cypherValue;
  char cypher;
  
  while(plainText[i]!= '\0' && strlen(plainText)-1 > i) {// '\0' is enter char
    cypherValue = ((int)plainText[i] -97 + key) % 26 + 97 // ASCII - 'a'=97
    cypher = (char)(cypherValue);
    
    // Print characters
    printf("%c", cypher); 
    i++;
  }
  // New line cuz OCD
  printf("\n");
}
