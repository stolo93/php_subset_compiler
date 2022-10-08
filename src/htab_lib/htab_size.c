//htab_size.c                                                                  
//Riešenie IJC-DU2, príklad b), 19.4.2022
//Autor: Jozef Michal Bukas, FIT
//Preložené: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
//Popis: Súbor v ktorom sa nachádza funkcie htab_size a htab_bucket_count pre úlohu b)
// 
#include <stdio.h>

#include "htab.h"
#include "htab_struct.h"

/** Function which returns size of table 
 *
 *  @param t table whose size we want
 *  @return size of table or -1 if t is invalid pointer
 ***/
size_t htab_size(const htab_t * t){

    if(!t){
        fprintf(stderr,"Table isn't valid pointer\n");
        return -1;
    }

    return t->size;
}

/** Function which returns bucket count of table 
 *
 *  @param t table whose bucket count we want
 *  @return bucket count of table or -1 if t is invalid pointer
 ***/
size_t htab_bucket_count(const htab_t * t){

    if(!t){
        fprintf(stderr,"Table isn't valid pointer\n");
        return -1;
    }
    return t->arr_size;
}