/*Permuter*/

#include <stdio.h>

int main()
{
	int n[3],x,y,z,p,q,r,s;

	y=1;
	z=2;

	scanf("%d%d%d", &n[0],&n[1],&n[2]);

	for(x=0;x<=2;x++)
	{
		p=(x+y)%3;
		q=(x+2*y)%3;
		r=(x+z)%3;
		s=(x+2*z)%3;
		printf("%d%d%d\n%d%d%d\n", n[x],n[p],n[q],n[x],n[r],n[s]);
	}
	getch();
	return 0;
}
