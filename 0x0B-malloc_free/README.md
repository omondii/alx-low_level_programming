- The malloc function allocates a specific number of bytes in memory and
  returns a pointer to the allocated memory. This memory, has read andwrite
  permissions.
- The malloc prototype is void *malloc(size_t size);
	where void * - a pointer to the type of your choice.
	size - is the number of bytes you need to allocate
	ie:  str = malloc(sizeof(char) * 3);
- Here, we use malloc to create a 3 byte allocated space in memory and fill
  this space with characters.
- The use of the sizeof operator is important as the size of
  different data types varies according to the machine in use.
- Always use the sizeof operator for better portability

This repository covers the malloc function. Each file perfoms a specific
     function