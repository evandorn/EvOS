#include <stdlib.h>
#include <stdio.h>

#define MALLOC_MINSIZE 16
#define PAGESIZE 4096

struct malloc_header {
  unsigned long size:31;
  unsigned long used:1;
} __attribute__((packed));

extern char *b_heap;
extern char *e_heap;

char *b_heap = 0;
char *e_heap = 0;

void* sbrk(int increment);

void* malloc(unsigned long size) {
  unsigned long real_size;
  unsigned long i;
  struct malloc_header *bl, *newbl;

  real_size = sizeof(struct malloc_header) + size;
  if((i = real_size % MALLOC_MINSIZE)) {
    real_size = real_size - i + MALLOC_MINSIZE;
  }

  if(b_heap == 0) {
    if((b_heap 
  }
}
