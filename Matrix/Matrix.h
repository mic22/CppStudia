#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    Matrix(int, int);
    Matrix(const Matrix &orig);
    ~Matrix();
    bool insert(int, int, double);
    void display();	
    Matrix add(const Matrix &orig);
private:
    void initialize(); 
    int rows;
    int cols;
    double **matrix;
};

#endif