//Matrix multiplication

#include <iostream>
using namespace std;

class matrics{
    
    int** arr2d;
    int rows;
    int cols;

    public:
    //Constructor
    matrics(int rows, int cols){
        this->rows= rows;
        this->cols= cols;
        arr2d= new int*[rows];
        for (int i= 0; i< rows; i++){
            arr2d[i]= new int[cols];
        }
    }

    //Destructor
    ~matrics(){
        for (int i=0; i< this->rows; i++){
            delete[] arr2d[i];
        }
        delete[] arr2d;
    }

    //Methods
    void putData(int row, int col, int data){
        if (row< 0 || row>this->rows || col<0 || col> this->cols){
            cerr<< "Invalid request!!"<< endl;
            return;
        }
        this->arr2d[row][col]= data;
    }

    int getData(int row, int col){
        if (row< 0 || row>this->rows || col<0 || col> this->cols){
            cerr<< "Invalid request!!"<< endl;
            return -1;
        }
        return this->arr2d[row][col];
        }

    void printM(){
        for (int i= 0; i< this->rows; i++){
            for (int j= 0; j< this->cols; j++){
                cout<< this->arr2d[i][j]<< " ";
            }
            cout<< endl;
        }
    }
    friend matrics multiply(matrics X, matrics Y);
    
};

matrics multiply(matrics X, matrics Y){
        if (X.cols != Y.rows){
            cerr<< "Incompatible multiplication request"<< endl;
        }
        matrics result(X.rows, Y.cols);
        for (int i= 0; i< X.rows; i++){
            for (int j= 0; j< Y.cols; j++){
                int sum= 0;
                for (int k= 0; k< X.cols; k++){
                    sum+= X.getData(i,k)* Y.getData(k,j);
                }
                result.putData(i,j,sum);
            }
        }

        return result;
    }

int main(){
    int n= 2, m= 2;
    int p= 2, q= 2;
    matrics A(n, m);
    matrics B(p, q);

    //Insert data in matrix
    int data;
    cout<< "Insert data in matrix A"<< endl;
    for (int i= 0; i< n; i++){
        for (int j= 0; j< m; j++){
            cout<< "Enter data at row= "<< i<< " col= "<< j<< ": ";
            cin>> data;
            A.putData(i, j, data);
        }
    }
    cout<< "Insert data in matrix B"<< endl;
    for (int i= 0; i< p; i++){
        for (int j= 0; j< q; j++){
            cout<< "Enter data at row= "<< i<< " col= "<< j<< ": ";
            cin>> data;
            B.putData(i, j, data);
        }
    }
    cout<< "Printing matrix A: "<< endl;
    A.printM();
    cout<< "Printing matrix B: "<< endl;
    B.printM();

    matrics output= multiply(A, B);
    cout<< "Printing matrix output: "<< endl;
    output.printM();

    return 0;
}