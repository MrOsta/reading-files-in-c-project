#include <stdio.h>
#include <stdlib.h>

int main()
{
   
   /*Mr Osta.*/
// var //
char lines[255];
char filename[255];
int choosetype;
char * filetype;
char filecontent[255];
// questions //
printf("Hello! Welcome to my program, This is program about a files in c.\n");

printf("\n \n === \t === \t === \t === \n");
while(1){
printf("\n First: Type The File Name With a type (.txt) : ");
scanf("%s",&filename);
printf("\n \n === \t === \t === \t === \n");
printf("\n Secound: Okay Good!, Please Change The shortcuts Mode:");

printf("\n [1] Writing File \n [2] Reading File \n [3] Append File");

printf("\n [?] : ");
scanf("%d",&choosetype);
if (choosetype == 1){
filetype = "w";
break;
}
else if (choosetype == 2){
filetype = "r";
break;
}

else if (choosetype == 3){
filetype = "a";
break;
}
else{
printf("? STOP TROLLING PLEASE !");
}
}
printf("\n \n === \t === \t === \t === \n");
printf("File Name : %s",filename);
printf("\nFile Mode : %s",filetype);

if (filetype == "r"){
FILE * text_read = fopen(filename, filetype);

if (text_read == NULL){
printf("\n \n === \t === \t === \t === \n");

perror("error!");
printf("\n \n === \t === \t === \t === \n");

exit(1);
}
printf("\n \n === \t === \t === \t === \n");
printf("FILE CONTENT: \n ");
fscanf(text_read,"%[^\n]",lines);
printf("\n %s",lines);
printf("\n \n === \t === \t === \t === \n");

fclose(text_read);
}

else{
printf("\n \n === \t === \t === \t === \n");
printf("Whats Content you want? : ");
scanf("%s",filecontent);
if(filecontent == NULL) {
   /* error */
printf("ERROR ");
}
FILE * Text = fopen(filename,filetype);
if(Text == NULL) {
   /* error handling */
   exit(1);
}
fprintf(Text,"%s",filecontent);
printf("\n \n === \t === \t === \t === \n");

printf("\n \nSuccess Work!\n \n");
fclose(Text);
   /*Mr Osta.*/

}
return 0;
}
