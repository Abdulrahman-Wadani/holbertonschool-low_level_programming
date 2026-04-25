#ifndef MAIN_H

#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_98(const char *filename);
void error_99(const char *filename);
void error_100(int fd);

#endif /* main.h */
