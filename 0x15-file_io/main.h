#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Helper functions in file 3-cp.c */
char *c_buffer(char *s);
void write_err(char *s, int to, int from);
void read_err(char *s, int to, int from);
void cl_file(int fd);

#endif
