#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int rows, int cols) {
    this->rows=rows;
    this->cols=cols;
    this->initialize();
}

Matrix::Matrix(const Matrix& orig) {}

Matrix::~Matrix() {
    for (int i=0; i<this->rows; i++)
        delete this->matrix[i];
    delete this->matrix;
}

void Matrix::initialize()
{
    this->matrix = new double*[this->rows];
    for (int i=0; i<this->rows; i++)
        this->matrix[i] = new double[this->cols];
}

bool Matrix::insert(int y, int x, double value)
{
    if(this->cols-1 >= y && this->rows-1 >= x)
    {
        this->matrix[y][x]=value;
        return true;
    }
    return false;
}

bool Matrix::insert(int y, double *values)
{
    if(this->cols-1>=y)
    {
		this->matrix[y]=values;
		return true;
    }
    return false;
}

void Matrix::display()
{
    for (int i=0; i<this->rows; i++)
    {
        for (int j=0; j<this->cols; j++)
            cout<<this->matrix[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
}

Matrix* Matrix::add(Matrix *orig)
{
    Matrix *tmp= new Matrix(this->rows, this->cols);
	
    for(int i=0; i<this->rows; i++)
    {
		for(int j=0; j<this->cols; j++)
			tmp->insert(i, j, this->matrix[i][j]+orig->matrix[i][j]);
    }
    return tmp;
}