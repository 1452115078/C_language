#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
    FILE* pFile;
    long size;
    pFile = fopen("myfile.txt", "wb");
    if (pFile == NULL) perror("Error opening file");
    else
    {
        fputs("hello", pFile);
        fseek(pFile, 0, SEEK_END);   // non-portable
        size = ftell(pFile);
        printf("Size of myfile.txt: %ld bytes.\n", size);
        rewind(pFile);
        fseek(pFile, 3, SEEK_CUR);   // non-portable
        size = ftell(pFile);
        printf("Size of myfile.txt: %ld bytes.\n", size);
        fclose(pFile);

    }
    return 0;
}