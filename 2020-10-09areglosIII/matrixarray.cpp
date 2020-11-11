#include<iostream>

const int M = 5;//rows
const int N = 4;//columns


void print(double data[][N], const int sizex, const int sizey);//SOBRECARGANDO FUNCIONES
void print(double data[][M], const int sizex, const int sizey);//SOBRECARGANDO FUNCIONES
void fill(double data[][N], const int sizex, const int sizey);
void transpose(double data[][N],double dataT[][M], const int sizex, const int sizey);
//cuando se utilizan multivectores expresados como arrays primitivos
// c++ requiere saber el tamaño de la segunda entrada, las columnas,
//de esa manera él sabrá cómo debe mapearlo. Pero eso representa una
//desventaja par nosotros porque implica tener variables globales. 

int main(int argc, char **argv)
{

    //const int M = 5;
    // const int N = 4;
    
    //declarar variables y matriz
    double matrix [M][N] {{0.0}};
    //llenar
    fill(matrix, M, N);
    
    double matrixT [N][M] {{0.0}};
    transpose(matrix, matrixT, M, N);
   
    print(matrix, M, N);

    //transponer 
    print(matrixT, N, M);
    return 0;
}


void fill(double data[][N], const int sizex, const int sizey)
{
    for(int ix= 0; ix < sizex; ++ix){
        for(int iy= 0; iy < sizey; ++iy){
            data[ix][iy] = ix*sizey + iy;
        }
    }
}


void print(double data[][N], const int sizex, const int sizey)
{
    for(int ix= 0; ix < sizex; ++ix){
        for(int iy = 0; iy < sizey; ++iy){
            std::cout<< data[ix][iy] << " "; //imprime toda la prima fila
        }
        std::cout<< std::endl; 
    }
}

void transpose(double data[][N],double dataT[][M], const int sizex, const int sizey)
{
    for(int ix= 0; ix < sizex; ++ix){
        for(int iy= 0; iy < sizey; ++iy){
            dataT[iy][ix] = data[ix][iy];
        } 
    }
}



void print(double data[][M], const int sizex, const int sizey)
{
     for(int ix= 0; ix < sizex; ++ix){
        for(int iy= 0; iy < sizey; ++iy){
            std::cout<< data[ix][iy]<< " ";
        }
        std::cout << std::endl; 
    }
}




/*Note que se escoge esta manera de recorrer la matriz con los ciclos for
porque de esa manera c++ reconoce multivectores, por filas, luego
se podría recorrer de otra manera (primero y y luego x) pero hacerlo 
como está escrito arriba agiliza el proceso pues coincide con la manera 
en la que c++ interpreta un multivetor*/ 
