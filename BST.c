#include <stddef.h>
#include "BST.h"

BST_t *BST_new(void){
	BST_t* ptr;
	ptr = (BST_t*)malloc(sizeof(BST_t));
	ptr->value = NULL;
	ptr->leftNode = NULL;
	ptr->rightNode = NULL;
	return ptr;
}

void BST_insert(BST_t* BST, int num){
	while(BST != NULL){
		int val = BST->value;
		if(val==NULL){
			BST->value = num;
			break;
		}else if(val<num){
			if(BST->rightNode == NULL){
				BST->rightNode = BST_new();
				BST = BST->rightNode;
				break;
			}
			BST = BST->rightNode;
		}else if(val>num){
			if(BST->leftNode == NULL){
				BST->leftNode = BST_new();
				BST = BST->leftNode;
				break;
			}
			BST = BST->leftNode;
		}else{
			return;
		}
	}
	BST->value = num;
}

bool BST_find(BST_t* BST, int num){
	if(BST == NULL || BST->value == NULL){
		return 0;
	}
	
	if(BST->value == num){
		return 1;
	}else if(BST->value < num){
		return BST_find(BST->rightNode, num);
	}else if(BST->value > num){
		return BST_find(BST->leftNode, num);
	}
}

void BST_delete(BST_t* BST){
	if(BST == NULL){
		return;
	}else{
		BST_delete(BST->leftNode);
		BST_delete(BST->rightNode);
		free(BST);
	}
	
}

