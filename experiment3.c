//WAP to count total number of Keywords. 
#include<stdio.h> 
#include<string.h> 
#define NUM_KEYWORDS 32
 int i; 
const char *keywords[NUM_KEYWORDS]=
     { "auto","break","case","char","const","continue","default","do","double","else","enum","extern","flo at","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch ","typedef","union","unsigned","void","volatile","while"};
     
     int is_keyword(const char *word)
          { int i; 
            for(i=0;i<NUM_KEYWORDS;i++)
                { if(strcmp(word,keywords[i])==0) 
                    return 1; }
                     return 0; } 
                     int count_keywords(FILE *file) { 
                        char word[100]; 
                        int count=0; 
                        while(fscanf(file,"%99s",word)==1)
                        { 
                            int len=strlen(word);
                             if(ispunct(word[len-1]))
                             
                             { 
                                word[len-1]='\0';
                             } if(is_keyword(word))
                              {
                                 count++; }
                                 }
                                  return count; 
                                } 
                                int main() { 
                                    char filename[100]; 
                                    FILE *file;
                                     printf("enter the filename:"); 
                                     scanf("%99s",filename); 
                                     file=fopen(filename,"r"); 
                                     if(file==NULL)
                                     { 
                                        printf("could not open file %s\n",filename); 
                                        return 1;
                                     }
                                      printf("total numbers of keywords: %d\n",count_keywords(file));
                                       fclose(file); 
                                       return 0;
                                     } 