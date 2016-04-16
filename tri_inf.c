/*
 * tri_inf.c
 * 
 * Copyright 2016 Anthony Geourjon <anthony.geourjon@e.ujf-grenoble.fr>
 * 
 */


#include <stdio.h>
#include <stdlib.h>

#include "init.h"

//résolution du système avec matrice inférieure
void tri_inf(matricefloat_t m, vecteurfloat_t v, vecteurfloat_t res){
 
    int i,j,s=0;
    for(i=0;i<N;i++){
        s=0;
        for(j=0;j<i;j++){
            s = s+M[i][j]*V_res[j];
        }
        V_res[i]=(V[i]-s)/M[i][i];
    }
}

int main(int argc, char **argv)
{
	matricefloat_t m;
    vecteurfloat_t v,res; 
    
    init_vect(v);
    init_mat_diag(m);
    tri_inf(m,v,res);
    
	return 0;
}

