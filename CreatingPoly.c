/*
    #creating Poly:
*/
#include <stdio.h>
#include<stdlib.h>
struct Term
{
    int coeff;
    int exp;
};
struct Poly
{
    int n;//Number of `non-zero terms:
    struct Term *terms;
};
void create(struct Poly *p)
{
    int i;
    printf("Number of terms?  ");
    scanf("%d",&p->n);
    p->terms=(struct Term*)malloc(p->n*sizeof(struct
    Term));
    printf("Enter Cofficient and exponetial:  \n");
    for(i=0;i<p->n;i++)
    scanf("%d%d",&p->terms[i].coeff,&p->terms[i].exp);
}
void display(struct Poly p)
{
    int i;
    for(i=0;i<p.n;i++)
    printf("(%d)x^%d + ",p.terms[i].coeff,p.terms[i].exp);
    printf("\n");
}
int main()
{
    struct Poly p,p2,*p3;
    create(&p);
    display(p);
    return 0;
}