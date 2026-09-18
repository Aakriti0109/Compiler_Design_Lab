    //a)WAP to identify whether given string is keyword or not(only10 keywords)
    //b)WAP to identify whether given string is keyword or not in C(total 32 keywords of C) 
    //c) WAP to identify whether given string is keyword or not in C(without user string) 
    #include<stdio.h>
    #include<string.h> 
    int iskey(char*); 
    char keyword[10][7]={"for","if","else","do","while","break","switch","case","void","struct"}; 
    int main() { 
        int i,flag; 
        char ch,temp[10]; 
        printf("\nEnter string");  
        scanf("%s",temp);  
            if(iskey(temp))       
              printf("it is a keyword");       
                  else       
                  printf("it is not keyword");       
                  getch();       
                     }       
                     int iskey(char *temp) {
                             int flag=0,i;    
                              for(i=0;i<10;i++)     
                              {
                                     if(strcmp(keyword[i],temp)==0)     
                                     {    
                                         flag=1;    
                                          break;     
                                        }     
                                           }   
                                          return flag; 
                                        }