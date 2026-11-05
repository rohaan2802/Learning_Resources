#include <iostream>
#include <pthread.h>
using namespace std;
struct Matrix 
{
    int** MATA;
    int** MATB;
    int** MATC;
    int row;
    int n;
    int m;
    int k;
};
void* multiplyRow(void* arg) 
{
    Matrix* data = (Matrix*)arg;

    for (int j = 0; j < data->k; ++j) 
	{
        int sum = 0;
        for (int i = 0; i < data->m; ++i)
            sum += data->MATA[data->row][i] * data->MATB[i][j];
        data->MATC[data->row][j] = sum;
    }
    pthread_exit(NULL);
}

int main()
 {
    int n, m, k;
    cout << "Enter the number of rows (n) for MATA: ";
    cin >> n;
    cout << "Enter the number of columns (m) for MATA: ";
    cin >> m;
    cout << "Enter the number of columns (k) for MATB: ";
    cin >> k;

    int** MATA = new int*[n];
    int** MATB = new int*[m];
    int** MATC = new int*[n];
    for (int i = 0; i < n; ++i) 
	{
        MATA[i] = new int[m];
        MATC[i] = new int[k];
    }
    for (int i = 0; i < m; ++i) 
	    MATB[i] = new int[k];
    
    cout << "Enter values for MATA: \n"; 
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
		{
            cout << "MATA[" << i << "][" << j << "]: ";
            cin >> MATA[i][j];
        }
   
    cout << "Enter values for MATB: \n";
    for (int i = 0; i < m; ++i) 
        for (int j = 0; j < k; ++j) 
		{
            cout << "MATB[" << i << "][" << j << "]: ";
            cin >> MATB[i][j];
        }
    
    pthread_t* threads = new pthread_t[n];
    Matrix* data = new Matrix[n];
    for (int i = 0; i < n; ++i) 
	{
        data[i].MATA = MATA;
        data[i].MATB = MATB;
        data[i].MATC = MATC;
        data[i].row = i;
        data[i].n = n;
        data[i].m = m;
        data[i].k = k;
        pthread_create(&threads[i], NULL, multiplyRow, (void*)&data[i]);
    }

    for (int i = 0; i < n; ++i) 
        pthread_join(threads[i], NULL);
  
    cout << "Resultant matrix MATC: \n";
    for (int i = 0; i < n; ++i) 
	{
        for (int j = 0; j < k; ++j) 
            cout << MATC[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; ++i) 
	{
        delete[] MATA[i];
        delete[] MATC[i];
    }
    delete[] MATA;
    delete[] MATB;
    delete[] MATC;
    delete[] threads;
    delete[] data;

    return 0;
}
