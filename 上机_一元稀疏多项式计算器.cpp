#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
//�����㣬���зֱ�Ϊϵ����ָ������һ������λ�� 
typedef struct Lnode{
	ElemType data1;
	ElemType data2;
	struct Lnode *next;
}Lnode,*LinkList;
//����ĳ�ʼ�� 
int Init_Lnode(LinkList &pol){
	pol = (Lnode*)malloc(sizeof(Lnode)) ;
	pol->next = NULL;
	return 0;	
}
//����Ԫ��
void Save_Lnode(LinkList &pol,int n){
	LinkList p;
	for(int i = 0;i < n;i++){
		ElemType data1,data2;
		scanf("%d%d",&data1,&data2);
		p = pol;
		while(p->next) p = p->next;
		LinkList s;
		s = (Lnode*)malloc(sizeof(Lnode));
		s->data1 = data1;
		s->data2 = data2;
		p->next = s;
		s->next = NULL;
//		printf("%d\n",i);
	}
} 

//��������ʽ��� 
void add_Lnode(LinkList &pol1,LinkList pol2){
	LinkList p1,p2;
	LinkList p3;
	p1 = pol1;	p2 = pol2;
	LinkList p;//����ָ��p3β����ָ�� 
	p = p3; 
	while(p1&&p2){
		if(p1->data2 > p2->data2){
			p->next= p1;
			p1 = p1->next;
			
		}else if(p1->data2 < p2->data2){
			p->next = p2;
			p2 = p2->next;

		}else{
			p1->data1 = p1->data1 + p2->data1;
			p->next = p1;
			p1 = p1->next;
			p2 = p2->next;
		}
		p = p->next;
	}
	
}


//���
void sub_Lnode(LinkList &pol1,LinkList pol2){
	
} 

//���
void print_pol(LinkList pol){
	LinkList p;
	p = pol->next;
	printf("%d",p->data1);
	if(p->data2){
		
	}
	while(p){
		p = p->next;
		
	}
} 
int main(){
	int n = 0,m = 0,t = 0;
	scanf("%d%d%d",&n,&m,&t);
	LinkList pol1;	Init_Lnode(pol1);
	LinkList pol2;	Init_Lnode(pol2);
		Save_Lnode(pol1,n);
		Save_Lnode(pol2,m);
		t? sub_Lnode(pol1,pol2):add_Lnode(pol1,pol2);
		
}
