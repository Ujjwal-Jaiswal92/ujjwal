#include<iostream>
using namespace std;

class Matrix
{
    int mat[3][3];
    public:
        void input()
        {
            cout<<"enter elements of matrix\n";
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cin>>mat[i][j];
                }
            }
        }
        void display()
        {
            cout<<"\nthe added matrix is :\n";
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        Matrix operator+(Matrix);
};
Matrix Matrix::operator+(Matrix m2)
{
    Matrix m3;
    for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    m3.mat[i][j]=mat[i][j]+m2.mat[i][j];
                }
            }
    return m3;
}
int main()
{
    Matrix m1,m2,m3;
    m1.input();
    m2.input();
    m3=m1+m2;
    m3.display();
    return 0;

}