// SPDX-License-Identifier: BSD-3-Clause

#include <internal/mm/mem_list.h>
#include <internal/types.h>
#include <internal/essentials.h>
#include <sys/mman.h>
#include <string.h>
#include <stdlib.h>

void *malloc(size_t size)
{
	/* TODO: Implement malloc(). */
	int total_size = size + sizeof(size);
	int *ptr = mmap(0, total_size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, 0, 0);
	*ptr = total_size;
	
	return ptr + 1;
}

void *calloc(size_t nmemb, size_t size)
{
	/* TODO: Implement calloc(). */
	void *ptr = malloc(nmemb * size);

	if (ptr) {
		memset(ptr, 0, nmemb * size);
	}

	return ptr;		
}

void free(void *ptr)
{
	/* TODO: Implement free(). */
	int *plen = (int*)ptr - 1;
    int len = *plen;                  
    
    munmap( (void*)plen, len );
}

void *realloc(void *ptr, size_t size)
{
	/* TODO: Implement realloc(). */
	void *new_ptr = malloc(size);
	
	if (new_ptr) {
		memcpy(new_ptr, ptr, size);
		free(ptr);
	}

	return new_ptr;
}

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
	/* TODO: Implement reallocarray(). */
	return realloc(ptr, nmemb * size);
}
