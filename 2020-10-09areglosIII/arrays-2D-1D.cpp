#include<iostream> //my



void print(double data[], const int sizex, const int sizey);
void fill(double data[], const int sizex, const int sizey);
void transpose(double data[],double dataT[], const int sizex, const int sizey);
//cuando se utilizan multivectores expresados como arrays primitivos
// c++ requiere saber el tamaño de la segunda entrada, las columnas,
//de esa manera él sabrá cómo debe mapearlo. Pero eso representa una
//desventaja par nosotros porque implica tener variables globales. 

int main(int argc, char **argv)
{

    const int M = 5;
    const int N = 4;
    
    //declarar variables y matriz
    double matrix [M*N] {0.0};
    //llenar
    fill(matrix, M, N);
    
    double matrixT [N*M] {0.0};
    transpose(matrix, matrixT, M, N);
   
    print(matrix, M, N);

    //transponer 
    print(matrixT, N, M);
    return 0;
}


void fill(double data[], const int sizex, const int sizey)
{
    for(int ix= 0; ix < sizex; ++ix){
        for(int iy= 0; iy < sizey; ++iy){
            data[ix*sizey+ iy] = ix*sizey + iy;
        }
    }
}
void print(double data[], const int sizex, const int sizey)
{
    for (int ix = 0; ix < sizex; ++ix) {
        for (int iy = 0; iy < sizey; ++iy) {
            std::cout << data[ix*sizey + iy] << "  ";
        }
        std::cout << "\n";
    }
}

void transpose(double data[], double dataT[], const int sizex, const int sizey)
{
   for (int ix = 0; ix < sizex; ++ix) {
       for (int iy = 0; iy < sizey; ++iy) {
           dataT[iy*sizex + ix] = data[ix*sizey + iy];
       }
    }
}

