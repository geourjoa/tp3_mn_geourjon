#include <stdio.h>
#include <stdlib.h>

#include "init.h"

//initialisation d'un vecteur v 
void init_vect (vecteurfloat_t v)
{
	int i;

	for (i = 0; i < N; i++)
			v[i]=(float)i;
	return ;
}

// initialisation de la matrice m diagonale 
void init_mat_diag (matricefloat_t m)
{
	register int i,j ;

	for (i = 0; i < N; i++)
		for(j = 0; j < N; j++)
		{
			if(i!=j){
				m[i][j]=0.0;
			}
			else{
				m[i][j]=(float)j;
			}
		}
	return ;
}

// initialisation de la matrice m triangulaire inférieure 
void init_mat_tri_inf (matricefloat_t m)
{
    int i,j ;

    for (i = 0; i < N; i++)
        for(j = 0; j < N; j++)
        {
            if(j>i){
                m[i][j]=0.0;
            }
            else{
                m[i][j]=(float)j;
            }
        }
    return ;
}

// initialisation de la matrice m triangulaire supérieure 
void init_mat_tri_sup (matricefloat_t m)
{
    int i,j ;

    for (i = 0; i < N; i++)
        for(j = 0; j < N; j++)
        {
            if(j<i){
                m[i][j]=0.0;
            }
            else{
                m[i][j]=(float)j;
            }
        }
    return ;
}

void init_mat_optimisee(matriceOptimiseefloat_t m)
{
	int i;
	m = malloc(sizeof(float*)*N);
	for(i=0;i<N;i++)
	{
		m[i]=malloc(sizeof(float)*(i+1));
	}
}
	

