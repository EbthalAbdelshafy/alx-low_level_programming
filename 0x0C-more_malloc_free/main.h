#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int find_len(char *str);
char *create_xarrays(int size);
char *iterate_zeroes(char *str);
void add_nums(char *final_prod, char *next_prod, int next_len);

#endif
