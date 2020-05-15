#include <iostream>
#include<stdlib.h>


using namespace std;
void Addition(double **matres,double **mat1,double **mat2, int nbl, int nbc);
void Addition(double * matres, double * mat1, double * mat2, int nbl, int nbc);
void multplication(double**M3, double ** M1, double**M2, int nbl, int nbc,int nbc1, int nbc2, int nbl1)

int main()
{
    cout << "Hello world!" << endl;
/*
    int nbl = 3, nbc = 4;

    double** A = new double*[nbl];
    for(int i=0; i<nbl; i++)
        A[i] = new double[nbc];

    double** B = new double*[nbl];
    for(int i=0; i<nbl; i++)
        B[i] = new double[nbc];

    double** C = new double*[nbl];
    for(int i=0; i<nbl; i++)
        C[i] = new double[nbc];

    for(int i=0; i<nbl;i++)
        for(int j=0; j<nbc; j++)
        {
            A[i][j] = rand()/1000.0;
            // *(*(A+i)+j) = rand();
            // *(*(A+i)+j) = rand();
            B[i][j] = rand()/1000.0;
            // *(B[i]+j]) = rand();
            // *(*(B+i)+j) = rand();
        }
    Addition(C, A, B, nbl, nbc);

    for(int i=0; i<nbl;i++)
    {
        for(int j=0; j<nbc; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }


    //////////////////////////////////////////////

    double *A2, *B2, *C2;
    A2 = new double [nbl*nbc];
    B2 = new double [nbl*nbc];
    C2 = new double [nbl*nbc];


    for(int k=0; k<nbl*nbc; k++)
    {
        A2[k] = rand()/1000.0;
        B2[k] = rand()/1000.0;
    }
    Addition(C2, A2, B2, nbl, nbc);

    for(int i=0; i<nbl;i++)
    {
        for(int j=0; j<nbc; j++)
            cout << C[i*nbc+j] << " ";
        cout << endl;
    }
//////////////////////
    double ** A3, **B3, **C3;
    A3 = new double * [nbl];
    A3[0] = new double [nbl*nbc];
    for (int i=1; i<nbl; i++)
        A3[i] = A3[i-1] + nbc;
    B3 = new double * [nbl*nbc];
    double * tmp = new double [nbl*nbc];
    for(int i=0;i<nbl;i++)
        B3[i] = tmp + i*nbc;
    C3 = new double * [nbl*nbc];
    tmp = new double [nbl*nbc];
    for(int i=0;i<nbl;i++)
        C3[i] = tmp + i*nbc;

     for(int i=0; i<nbl;i++)
        for(int j=0; j<nbc; j++)
        {
            A3[i][j] = rand()/1000.0;
            // *(*(A+i)+j) = rand();
            // *(*(A+i)+j) = rand();
            B3[i][j] = rand()/1000.0;
            // *(B[i]+j]) = rand();
            // *(*(B+i)+j) = rand();
        }
    Addition(C3,A3,B3,nbl,nbc);
    for(int i=0; i<nbl;i++)
    {
        for(int j=0; j<nbc; j++)
            cout << C3[i][j] << " ";
        cout << endl;
    }

    for(int i=0; i<nbl; i++)
        delete[] A[i];
    delete[] A;

    for(int i=0; i<nbl; i++)
        delete[] B[i];
    delete[] B;

    for(int i=0; i<nbl; i++)
        delete[] C[i];
    delete[] C;
    ///////
    delete[] A2;
    delete[] B2;
    delete[] C2;
    ///////
    delete[] A3[0];
    delete[] A3;
    delete[] B3[0];
    delete[] B3;
    delete[] C3[0];
    delete[] C3;
    ///////////
*/
    int nbl1=3, nbc1 = 4, nbc2 = 5;
    int nbl2 = nbc1;
    int nbl3 = nbl1, int nbc3 = nbc2;
    double**A1,**B1,**C1;
    double** A1 = new double*[nbl1];
    for(int i=0; i<nbl1; i++)
        A1[i] = new double[nbc1];

    double** B1 = new double*[nbl2];
    for(int i=0; i<nbl; i++)
        B1[i] = new double[nbc2];

    double** C1 = new double*[nbl3];
    for(int i=0; i<nbl; i++)
        C1[i] = new double[nbc3];
    for(int i=0; i<nbl1; i++)
        delete[] A1[i];
    delete[] A1;

    for(int i=0; i<nbl2; i++)
        delete[] B1[i];
    delete[] B1;

    for(int i=0; i<nbl3; i++)
        delete[] C1[i];
    delete[] C1;
    multplication(C1,A1,B1,nbl1,nbc1,nbc2)
    cout<<endl;
    for(int i=0;i<nbl1;i++)
    {
        for (int j =0;j<nbc2;j++)
            cout<<C1[i][j]<<" ";
        cout<<endl;
    }
    return 0;

}
