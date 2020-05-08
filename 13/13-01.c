#define TRUE 1
#define TALSE 0

#ifndef __NODE_H_
#define __NODE_H_
typedef  struct  _node
{
	int		data;
	struct _node	*link;
}NODE;
#endif

NODE	*INPUT(NODE *);
void	OUTPUT(const NODE *);
