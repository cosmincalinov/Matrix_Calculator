typedef struct info_mat {
    int m;
    int n;
    unsigned int patratica:1;
    int tras;
    int det;
    unsigned int sim:1;
};

void trace() {
    int tr=0, i, j, n;
    printf("Numarul de linii si coloane:\n");
    scanf("%d", &n);
    int matr[n][n];
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("matr[%d][%d]= ", i, j);
            scanf("%d", &matr[i][j]);
        }
    }
    printf("Matricea este:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%d\t", matr[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if(i==j) {
                tr=tr+matr[i][j];
            }
        }
    }
    printf("Trace-ul matricei este: %d\n", tr);
}

void determinant() {
    int det, i, j, n;
    printf("Alegeti intre determinant pentru dimensiune 2 sau 3\n");
    printf("Numarul de linii si coloane:\n");
    scanf("%d", &n);
    if(n!=2 && n!=3) printf("Dimensiune necorespunzatoare!\n");
    else {
        int matr[n][n];
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                printf("matr[%d][%d]= ", i, j);
                scanf("%d", &matr[i][j]);
            }
        }
        printf("Matricea este:\n");
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                printf("%d\t", matr[i][j]);
            }
            printf("\n");
        }
        if(n==2) {
            det=(matr[0][0]*matr[1][1])-(matr[1][0]*matr[0][1]);
            printf("Determinantul este: %d\n\n", det);
        } else if(n==3) {
            det=(matr[0][0]*matr[1][1]*matr[2][2])+(matr[0][2]*matr[1][0]*matr[2][1])+(matr[0][1]*matr[1][2]*matr[2][0])-(matr[0][2]*matr[1][1]*matr[2][0])-(matr[0][0]*matr[1][2]*matr[2][1])-(matr[2][2]*matr[0][1]*matr[1][0]);
            printf("Determinantul este: %d\n\n", det);
        }
    }
}

void produs_scalar() {
    int n, v1[n], v2[n],i, ps=0;
    printf("Introduceti numarul de elemente ai vectorilor:");
    scanf("%d", &n);
    printf("Introduceti elementele fiecarui vector:\n");
    for(i=0; i<n; i++) {
        printf("v1[%d]=", i);
        scanf("%d", &v1[i]);
    }
    for(i=0; i<n; i++) {
        printf("v2[%d]=", i);
        scanf("%d", &v2[i]);
    }
    printf("Vectorii sunt:\n");
    for(i=0; i<n; i++) {
        if(i==0) {
            printf("v1=(%d,", v1[i]);
        }
        if(i<n-1 && i!=0) {
            printf("%d,", v1[i]);
        }
        if(i==n-1) {
            printf("%d)\n", v1[i]);
        }
    }
    for(i=0; i<n; i++) {
        if(i==0) {
            printf("v2=(%d,", v2[i]);
        }
        if(i<n-1 && i!=0) {
            printf("%d,", v2[i]);
        }
        if(i==n-1) {
            printf("%d)\n", v2[i]);
        }
    }
    for(i=0; i<n; i++) {
        ps=ps+(v1[i]*v2[i]);
    }
    printf("Produsul scalar este: %d\n", ps);
}

void inmultire_matrice_vector() {
    int m, n,k, i, j,q;
    printf("Dimensiuni matrice:\n");
    printf("Numarul de linii: ");
    scanf("%d", &m);
    printf("Numarul de coloane: ");
    scanf("%d", &n);
    printf("Dimensiune vector: %d\n", n);
    printf("Introduceti elementele matricei:\n");
    int matr[m][n], v[n][1];
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("matr[%d][%d]= ", i, j);
            scanf("%d", &matr[i][j]);
        }
    }
    printf("Matricea este:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d\t", matr[i][j]);
        }
        printf("\n");
    }
    printf("Introduceti elementele vectorului:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<1; j++) {
            printf("v[%d]= ",i);
            scanf("%d", &v[i][1]);
        }
    }
    printf("Vectorul este:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<1; j++) {
            printf("%d ", v[i][1]);
        }
        printf("\n");
    }
    int prod[m][1];
    for (i = 0; i < n; i++) {
        for (j = 0; j < 1; j++) {
            prod[i][1] = 0;
            for (k = 0; k < n; k++) {
                prod[i][1] += matr[i][k] * v[k][1];
            }
        }
    }
    printf("Inmultirea este:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j <1 ; j++) {
            printf("%d\t", prod[i][1]);
        }
        printf("\n");
    }
}

void inmultire_matrice_matrice() {
    int m, n,k, i, j,q;
    printf("Dimensiuni matrice_1:\n");
    printf("Numarul de linii: ");
    scanf("%d", &m);
    printf("Numarul de coloane: ");
    scanf("%d", &n);
    printf("Dimensiuni matrice_2:\n");
    printf("Numarul de linii: %d\n", n);
    printf("Numarul de coloane: ");
    scanf("%d", &q);
    printf("Introduceti elementele primei matrici:\n");
    int matr1[m][n], matr2[n][q];
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("matr_1[%d][%d]= ", i, j);
            scanf("%d", &matr1[i][j]);
        }
    }
    printf("Matricea_1 este:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d\t", matr1[i][j]);
        }
        printf("\n");
    }
    printf("Introduceti elementele celei de a doua matrici:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<q; j++) {
            printf("matr_2[%d][%d]= ", i, j);
            scanf("%d", &matr2[i][j]);
        }
    }
    printf("Matricea_2 este:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<q; j++) {
            printf("%d\t", matr2[i][j]);
        }
        printf("\n");
    }
    int matr3[m][q];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matr3[i][j] = 0;
            for (k = 0; k < n; k++) {
                matr3[i][j] += matr1[i][k] * matr2[k][j];
            }
        }
    }
    printf("Inmultirea celor doua matrici este:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j <q ; j++) {
            printf("%d\t", matr3[i][j]);
        }
        printf("\n");
    }
}

void memorare_matrici_rare() {
    int m,n,i,j,nul=0,nenul=0;
    printf("Dimensiuni matrice:\n");
    printf("Numarul de linii: ");
    scanf("%d", &m);
    printf("Numarul de coloane: ");
    scanf("%d", &n);
    printf("Introduceti elementele matricei:\n");
    int matr[m][n];
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("matr[%d][%d]= ", i, j);
            scanf("%d", &matr[i][j]);
            if(matr[i][j]==0) nul=nul+1;
            else nenul=nenul+1;
        }
    }
    printf("Matricea este:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d\t", matr[i][j]);
        }
        printf("\n");
    }
    if(nul>=nenul) {
        printf("Matricea este rara,aceasta poate fi memorata ca si urmatorii vectori:\n");
        for(i=0; i<m; i++) {
            for(j=0; j<n; j++) {
                if(matr[i][j]!=0) printf("(%d,%d,%d) ",i+1,j+1,matr[i][j]);
            }
        }
        printf("\n");
    } else printf("Matricea nu este rara\n");
}

void operatii_vectori() {
    int dim, i, *v1, *v2;
    printf("Introduceti dimensiunea:");
    scanf("%d", &dim);
    v1=(int*)malloc(dim*sizeof(int));
    v2=(int*)malloc(dim*sizeof(int));
    printf("Introduceti elemnetele vectorilor\n");
    for(i=0; i<dim; i++) {
        printf("v1[%d]=",i);
        scanf("%d", v1+i);
    }
    for(i=0; i<dim; i++) {
        printf("v2[%d]=",i);
        scanf("%d", v2+i);
    }
    for(i=0; i<dim; i++) {
        printf("%d ",*(v1+i) + *(v2+i));  // afisare
    }
    printf("\n");
}

void transpusa_matricei() {
    int m, n, i, j;
    printf("Numarul de linii:\n");
    scanf("%d", &m);
    printf("Numarul de coloane: \n");
    scanf("%d", &n);
    int matr[m][n];
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("matr[%d][%d]= ", i, j);
            scanf("%d", &matr[i][j]);
        }
    }
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%d\t", matr[i][j]);
        }
        printf("\n");
    }
    int inv[n][m];
    for(j=0; j<n; j++) {
        for(i=0; i<m; i++) {
            inv[j][i]=matr[i][j];
        }
    }
    printf("Matricea transpusa este: \n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            printf("%d\t", inv[i][j]);
        }
        printf("\n");
    }
}
void rotire_spre_dreapta() {
    int n,i,j;
    printf("Introduceti numarul de linii si de coloane al matricei:\n");
    scanf("%d",&n);
    int matr[n][n];
    printf("Introduceti elementele matricei:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("matr[%d][%d]=",i,j);
            scanf("%d",&matr[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d\t",matr[i][j]);
        }
        printf("\n");
    }
    printf("Matricea rotita spre dreapta este:\n");
    for(i=0; i<n; i++) {
        for(j=n-1; j>=0; j--) {
            printf("%d\t",matr[j][i]);
        }
        printf("\n");
    }
}

void informatii_matrice() {
    struct info_mat info;
    int i, j;
    info.tras=0;
    info.patratica=1;
    printf("Numarul de linii:\n");
    scanf("%d", &info.m);
    printf("Numarul de coloane: \n");
    scanf("%d", &info.n);
    int matr[info.m][info.n];

    for (i=0; i<info.m; i++) {
        for (j=0; j<info.n; j++) {
            printf("matr[%d][%d]= ", i, j);
            scanf("%d", &matr[i][j]);
        }
    }
    printf("Matricea introdusa este:\n");
    for (i=0; i<info.m; i++) {
        for (j=0; j<info.n; j++) {
            printf("%d\t", matr[i][j]);
        }
        printf("\n");
    }
    if(info.m!=info.n) {
        info.patratica=0;
    }
    if(info.n==2 && info.patratica==1) {
        info.det=(matr[0][0]*matr[1][1])-(matr[1][0]*matr[0][1]);
    } else if(info.n==3 && info.patratica==1 ) {
        info.det=(matr[0][0]*matr[1][1]*matr[2][2])+(matr[0][2]*matr[1][0]*matr[2][1])+(matr[0][1]*matr[1][2]*matr[2][0])-(matr[0][2]*matr[1][1]*matr[2][0])-(matr[0][0]*matr[1][2]*matr[2][1])-(matr[2][2]*matr[0][1]*matr[1][0]);
    }
    if(info.patratica==1) {
        info.sim = 1;
        for(i=0; i<info.n; i++) {
            for(j=0; j<info.m; j++) {
                if(matr[i][j]!=matr[j][i]) {
                    info.sim=0;
                }
            }
        }
    }
    if(info.patratica==1) {
        for(i=0; i<info.m; i++) {
            info.tras=info.tras+matr[i][i];
        }
    }
    printf("Aveti o matrice de %d x %d, ", info.m, info.n);
    if(info.patratica==1) {
        printf("patratica, cu determinantul %d si trace-ul %d, ", info.det, info.tras);
    } else {
        printf("nepatratica, ");
    }
    if(info.sim==1) printf("simetrica.\n");
    else {
        printf("nesimetrica.\n");
    }
eticheta:
    printf("Doriti scrierea rezultatelor intr-un fisier?\n Tastati da/nu\n");
    char conf[100];
    int dec=0;
    scanf("%s", conf);
    if(strcmp(conf,"da")==NULL)
    {
        dec=1;
    }
    else if(strcmp(conf,"nu")==NULL){
        dec=0;
    }
    switch(dec) {
    case 1: {
        FILE* f=fopen("info.txt","w");
        for (i=0; i<info.m; i++) {
            for (j=0; j<info.n; j++) {
                fprintf(f,"%d\t", matr[i][j]);
            }
            fprintf(f,"\n");
        }

        fprintf(f,"Aveti o matrice de %d x %d, ", info.m, info.n);
        if(info.patratica==1) fprintf(f,"patratica, cu determinantul %d si trace-ul %d, ", info.det, info.tras);
        else fprintf(f,"nepatratica, ");
        if(info.sim==1) fprintf(f,"simetrica.\n");
        else fprintf(f,"nesimetrica.\n");
        printf("Scriere facuta cu succes!\n");
        fclose(f);
        break;
    }
    case 0:
        break;
    default:
        printf("Comanda necorespunzatoare\n\a");
        goto eticheta;
        break;
    }
}




/*
ptrType *ptrVar;
ptrVar = (ptrType*)malloc(nr*sizeof(ptrVar));

*/



