#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    Matrix(int, int);
    Matrix(const Matrix &orig);
    ~Matrix();
    bool insert(int, int, double);
    bool insert(int, double *);
    void display();	
    Matrix* add(Matrix *);
private:
    void initialize(); 
    int rows;
    int cols;
    double **matrix;
};

#endif