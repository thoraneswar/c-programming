#include <stdio.h>
#include<string.h>
int main() {
     char str[10]="geeks";
     printf("%d",strlen(str));//string length

     char str1[20]="hello";
     char str2[10]="world";
     strcat(str1,str2);//combining strings  // no & in scanf in strings
     printf("%s",str1);

     char strr1[20]="hello world";
     char strr2[20];
     strcpy(strr2,strr1);// copying strings
     printf("%s\n",strr2);
      
     char str11[10]="hello";
     char str22[10]="hello";
     char str33[10]="hi";
     printf ("%d\n",strcmp(str11,str22));// checking equal strings,, if equal it prints 0
     printf("%d\n",strcmp(str22,str33));
     
     char strr33[100]="learning,c,programming,is,fun";
     char *token=strtok(strr33,",");
      while (token!=NULL)
      {
        printf("%s\n",token);
        token=strtok(NULL,",");
      }



      const char text[100]="learning c programming is fun!";
      const char search[100]="programming";
      char *result;
      result = strstr(text,search);
      printf("%s",result);
      if (result!=NULL)
       {
          printf ("substring found\n");
          printf ("the matched text and every after it: '%s'\n",result);
       }
       else
         printf("substring not found\n");



       char name[30];
       printf("enter name") ;
       fgets (name,sizeof (name), stdin);
       printf ("name:");
       puts(name); 
    return 0;
}