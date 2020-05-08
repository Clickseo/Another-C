#define TRUE 1
#define TALSE 0

#ifndef __DNODE_H_
#define __DNODE_H_
typedef struct _dnode
{
	struct  _dnode 	*Llink;
	int			data;
	struct  _dnode 	*Rlink;
}DNODE;
#endif

NODE *INPUT(DNODE *);
void  OUTPUT(DNODE *);
void  OUTPUT_rev(DNODE *);
