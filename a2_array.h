#ifndef _A2_ARRAY_H_
#define _A2_ARRAY_H_

struct a2_obj;
struct a2_array;

struct a2_array* a2_array_new();
void a2_array_free(struct a2_array* array_p);
inline struct a2_obj* a2_array_add(struct a2_array* array_p, struct a2_obj* obj);

#endif