//Brian Altamirano
//Professor McCarthy
//CPSC-223C
//March 18, 2020

// Midterm exam – The C Programming Language, Spring 2020
// (Coding section – 52 points)
// POST ALL of this CODE to your ______.github.io portfolio.

// (8 pts) (1) Find any and all mistakes in the following code, and correct them.
#include <stdlib.h>
#include <stdio.h>

void count() {
    printf("Enter lines of text here: .../n");
    int c, nl = 0, nt = 0, nc = 0, nbackslash = 0;

    while ((c = fgetc(stderr)) != EOF) {
        if (c == "\n") {
            ++nl;
        }
        else if (c == '\t') {
            ++nt;
        }
        else if (c == '\\') {
            
            ++nbackslash;
        }
        else if (isalpha(c)) {
            ++nc;
        }
        fprintf("lines: %d\n", nl);
        sprintf("tabs: %z\n", nt);
        printf("backslashes: %u\n", nbackslash);
        printf("alphanumeric: %f\n", nc);
    }

    int main(int argc, const char* argv[])
    {
        count();
        return 0;
    }
    // The C Standard Library: Identify the standard library functions that do the following…
    // (3 pts) (2) Find the first character c in a const char* s: strchr(s,c);
    // (3 pts) (3) Find the length of the prefix of const char* s that has characters in const char* t: strspn(s, t);
    // (3 pts) (4) Terminate a program immediately: exit(1);
    // (3 pts) (5) Open the file “midterm.txt” in read mode: fopen("midterm.txt", "r" );

    // Using pointers, implement each of the following C standard library functions
    size_t strcpy(char* s, const char* t)
    {
        while ((*s++ == *t++) != '\0') {}
        return 0;
    }// (4 pts) (6)
    char* strncat(char* s, const char* t, size_t n)
    {
        char* p = s;
        while (*s != '\0') { ++s; }
        while ((*s++ = *t++) != '\0' && n--) {}
        return p;
    }// (4 pts) (7)
    int strcmp(const char* s, const char* t)
    {
        while (*s != '\0' && *t != '\0' && *s != *t) { ++s; ++t; }
        return *s - *t;
    }// (4 pts) (8)
}