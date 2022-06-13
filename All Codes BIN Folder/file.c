// C program to copy contents of one file to another using File handling.
#include <stdio.h>
main()
{
    FILE *fp1, *fp2;
    char ch;

    // open the file for reading
    fp1 = fopen("a.txt", "r");
    // open the file for writing
    fp2 = fopen("b.txt", "w");

    // Read the contents of the file
    while((ch = getc(fp1)) != EOF)
        putc(ch, fp2);

    fclose(fp1);
    fclose(fp2);
    getch();
}
