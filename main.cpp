

//Can you write a program in C (not C++) that reads arbitrary data from standard input and writes it to a file, please? 
//By arbitrary data, we mean that we don’t want to put any limitations or restrictions whatsoever on the data a user provides via standard input. 

/*
Assumption 1 --> I am assuming that we do not need to create a new file for each run instead it will be appended to the same file
*/

/*
Return Value - 
return -1 --> Encountered Error while creating/opening a file
return -2 --> Error in while Writing the file
return -3 --> When the input is Empty
*/

#include <stdio.h>
#include <stdlib.h>
size_t  MAX_SIZE = 1080;
int WriteToFile()
{
    FILE *pFile;
    FILE *pStdIn;

    pFile = fopen("Info.txt","a");
    if(pFile == NULL)
    {
        printf("Encountered error while opening/creating the file\n");
        return -1; // Encountered error while opening or creating file
    }
    pStdIn = stdin;  // Assigning the Standard input directly to file pointer.
    int c;
    // Read Character by Character and save it to the file
    while (EOF != (c = fgetc(pStdIn))) {
         fputc(c, pFile);
      }

    fclose(pFile);
    return 1;
}
int main() 
{
 // first check if any data is given . If no data is given , do not process further
 int nRet = -1;
 nRet =WriteToFile();

 return nRet;
 
  
}
