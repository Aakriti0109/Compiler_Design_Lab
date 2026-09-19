//Count total occurrence of each character in program  
#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;      
    int c, count[26] = {0};      
    char ch;      
    fp = fopen("hello.txt","r");     
    if (fp == NULL) {          
           printf("File not found\n");          
                 return 0;      }      
                 
                 while ((ch = fgetc(fp)) != EOF) {
                              if (ch >= 'a' && ch <= 'z') {              
                                count[ch - 'a']++;          }

                                 else if (ch >= 'A' && ch <= 'Z') {        
                                     count[ch - 'A']++;          
                                          }    
                                      }     
                                       fclose(fp);    
                                        for (c = 0; c < 26; c++) {          
                                            printf("%c occurs %d times in the file\n", c + 'a', count[c]);     
                                                         }   
                                                         
                                                         return 0; 
                                                         }   