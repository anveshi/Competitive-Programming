//https://comeoncodeon.wordpress.com/2011/05/08/recurrence-relation-and-matrix-exponentiation/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
double R[5];
double Rminus1, Rminus2,Rminus0;
map <LL,LL> MM;
template< class T >
class Matrix
{
  public:
    LL m,n;
    T *data;

    Matrix( LL m, LL n );
    Matrix( const Matrix< T > &matrix );

    const Matrix< T > &operator=( const Matrix< T > &A );
    const Matrix< T > operator*( const Matrix< T > &A );
    const Matrix< T > operator^( int P );

    ~Matrix();
};

  template< class T >
Matrix< T >::Matrix( LL m, LL n )
{
  this->m = m;
  this->n = n;
  data = new T[m*n];
}

  template< class T >
Matrix< T >::Matrix( const Matrix< T > &A )
{
  this->m = A.m;
  this->n = A.n;
  data = new T[m*n];
  for( int i = 0; i < m * n; i++ )
    data[i] = A.data[i];
}

  template< class T >
Matrix< T >::~Matrix()
{
  delete [] data;
}

  template< class T >
const Matrix< T > &Matrix< T >::operator=( const Matrix< T > &A )
{
  if( &A != this )
  {
    delete [] data;
    m = A.m;
    n = A.n;
    data = new T[m*n];
    for( int i = 0; i < m * n; i++ )
      data[i] = A.data[i];
  }
  return *this;
}

  template< class T >
const Matrix< T > Matrix< T >::operator*( const Matrix< T > &A )
{
  Matrix C( m, A.n );
  for( LL i = 0; i < m; ++i )
    for( LL j = 0; j < A.n; ++j )
    {
      C.data[i*C.n+j]=0;
      for( LL k = 0; k < n; ++k )
        C.data[i*C.n+j] = C.data[i*C.n+j] + data[i*n+k]*A.data[k*A.n+j];
    }
  return C;
}

  template< class T >
const Matrix< T > Matrix< T >::operator^( int P )
{
  if( P == 1 ) return (*this);
  if( P & 1 ) return (*this) * ((*this) ^ (P-1));
  Matrix B = (*this) ^ (P/2);
  return B*B;
}


int main(){
  LL T, P, M, B, x, y,MMM=0;
  MM.clear();
  scanf("%lld",&T);
  scanf("%lld %lld %lld %lld",&x,&P,&M,&B);
  scanf("%lf %lf %lf %lf",&R[1],&R[2],&R[3],&R[4]);
  for(LL i=1;i<=T;i++){
    y =(P*x)%M+B;
    MM[y]++;
    if(y>MMM)MMM=y;
    x = y;
  }
  double z,ans=0.0000000;
  z = -2.0/(double)R[1] + 2.0/(double)R[2];
  Matrix<double> YUM(3,3);
  YUM.data[0] = 2.0;
  YUM.data[1] = -1.0;
  YUM.data[2] = 1.0;
  YUM.data[3] = 1.0;
  YUM.data[4] = 0.0;
  YUM.data[5] = 0.0;
  YUM.data[6] = 0.0;
  YUM.data[7] = 0.0;
  YUM.data[8] = 1.0;
  double F[3]={1.0/(double)R[4],1.0/(double)R[3],(double)z};
  for(map <LL,LL> :: iterator it = MM.begin();it!=MM.end();it++){
    LL k = it->first;
    LL f = it->second;
    if(k<=4){
      ans += f*(R[k]);
    }
    else{
      Matrix <double> NewMatrix = YUM^(k-4);
      double xx = 0.000000;
      for(LL i=0;i<3;i++){
        xx += (NewMatrix.data[i]) * F[i];
      }
      ans += (double)f/(double)(xx);
    }
  }
  cout.precision(6);
  cout << fixed << ans  << endl;
  return 0;
}