void Addition(double **matres,double **mat1,double **mat2, int nbl, int nbc)
{
    for(int i=0; i<nbl; i++)
        for(int j=0; j<nbc; j++)
            matres[i][j] = mat1[i][j] + mat2[i][j];
}

void Addition(double * matres, double * mat1, double * mat2, int nbl, int nbc)
{
    for(int i = 0; i< nbl;i++)
        for(int j = 0 ; j< nbc;j++)
            matres[i*nbc +j] = mat1[i*nbc + j] + mat2[i*nbc+j];

}

void multplication(double**M3, double ** M1, double**M2, int nbl, int nbc,int nbc1, int nbc2, int nbl1)
{
    for (int i =0;i< nbl1;i++)
    for(int j=0; j<nbc2; j++)
  {
      double r = 0;
      for (int k =0;k<nbc1;k++)
        {
        r += M1[i][k]*M2[k][j];
        //M3[i][j] = M3[i][j] + M1[i][k]*M2[k][j];
      }
    M3[i][j] = r;
  }
}

void multipli(double * M3, double *M1, double M2, int nbl1, int nbc1, int nbc2)
{
    for(int i=0;i<nbl1;i++)
    {
        for (int j =0;j<nbc2;j++){

        double r = 0;
        for (int k =0; k<nbc1;k++)
''            r+= M1[i*nbc1+k] * M2[k*nbc2+j];
        M3[i*nbc2+j] = r;
    }
}
}
