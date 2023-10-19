/* Autor: Ricardo Xavier Paredes
Objetivo: Función potencia*/
#include<iostream>
#include<cmath>
#include<locale.h>
#include<windows.h>
|
using namespace std;

void promedio (int []);
void mayoresAlPromedio  (int []);

int main(){	
    setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
    int arreglo[]={61, 331, 80, 457, 204, 416, 411, 493, 415, 426, 467, 399, 100, 336, 390, 370, 416, 284, 90, 81, 418, 28, 34, 155, 129, 317, 371, 39, 149, 46, 125, 28, 243, 190, 
    131, 297, 370, 498, 24, 383, 312, 135, 438, 157, 227, 93, 193, 191, 235, 366, 256, 316, 148, 403, 290, 367, 264, 339, 34, 303, 272, 79, 104, 411, 484, 459, 447, 322, 241, 171, 
    298, 235, 337, 417, 50, 232, 306, 314, 369, 332, 97, 433, 350, 481, 176, 386, 287, 68, 316, 264, 148, 134, 457, 144, 365, 469, 43, 235, 417, 325, 371, 412, 208, 88, 90, 311, 
    233, 98, 78, 416, 327, 326, 497, 441, 490, 64, 362, 453, 181, 483, 195, 245, 197, 422, 428, 230, 430, 19, 229, 115, 126, 271, 499, 247, 164, 463, 120, 334, 440, 440, 372, 
    179, 169, 249, 75, 218, 479, 419, 278, 41, 312, 261, 70, 484, 142, 279, 198, 305, 245, 154, 330, 48, 467, 113, 377, 29, 441, 425, 103, 186, 265, 153, 154, 177, 263, 385, 494, 
    481, 358, 440, 89, 42, 298, 199, 477, 111, 491, 487, 11, 48, 204, 301, 387, 130, 13, 320, 126, 438, 25, 359, 346, 439, 367, 47, 81, 88, 352, 250, 65, 370, 312, 333, 224, 
    362, 481, 434, 194, 413, 29, 111, 426, 86, 364, 296, 58, 296, 86, 378, 189, 89, 13, 436, 350, 334, 268, 175, 128, 488, 204, 370, 105, 394, 53, 99, 21, 264, 446, 422, 437, 273, 83, 297};
    int tam=sizeof(arreglo)/sizeof(arreglo[0]);  
    cout<<"La cantidad de elementos en el arreglo es: "<<tam<<endl;
    promedio (arreglo); 
    mayoresAlPromedio (arreglo);
    wait(500000);
return 0;}

void promedio(int a[]){
	int const tamanho = 252;
	double suma=0;
	double promedio;;
    for(int i=0;i<tamanho;i++){
    	suma+= a[i]; 
	}
	promedio =suma/tamanho;
	cout<<"El promedio del Arreglo (arreglo[]) es: "<<promedio<<endl;
}

void mayoresAlPromedio(int a[]){
	int x;
	cout<<"Los números mayores al promedio son: "<<endl;
	for(int i=0;i<252;i++){
		x=a[i];
		if(x>264.6309){
			cout<<x<<endl;
		}
	}
}
