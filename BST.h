#ifndef BST_H_
#define BST_H_

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct BST_t{
	int value;
	struct BST_t* leftNode;
	struct BST_t* rightNode;
}BST_t;

BST_t *BST_new(void);

void BST_insert(BST_t* BST, int num);

bool BST_find(BST_t* BST, int num);

void BST_delete(BST_t* BST);

#endif
