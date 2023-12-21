#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BST.h"

int main(){
	BST_t* ptr = BST_new();
	
	
	BST_insert(ptr, 5);
	BST_insert(ptr, 13);
	BST_insert(ptr, 2);
	BST_insert(ptr, 36);
	BST_insert(ptr, 17);
	BST_insert(ptr, 1);
	BST_insert(ptr, 37);
	BST_insert(ptr, 11);
	BST_insert(ptr, 23);
	
	
	printf("%d\n", BST_find(ptr, 5));
	printf("%d\n", BST_find(ptr, 36));
	printf("%d\n", BST_find(ptr, 12));
	printf("%d\n", BST_find(ptr, 37));
	printf("%d\n", BST_find(ptr, 2));
	printf("%d\n", BST_find(ptr, 11));
	printf("%d\n", BST_find(ptr, 13));
	
	BST_delete(ptr);
	
}
