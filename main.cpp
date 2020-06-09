
#include <iostream>
#include <string>
#include <map>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char matriuA[3][2]={{'.',' '},{' ',' '},{' ',' '}};
char matriuB[3][2]={{'.',' '},{'.',' '},{' ',' '}};
char matriuC[3][2]={{'.','.'},{' ',' '},{' ',' '}};
char matriuD[3][2]={{'.','.'},{' ','.'},{' ',' '}};
char matriuE[3][2]={{'.',' '},{' ','.'},{' ',' '}};
char matriuF[3][2]={{'.','.'},{'.',' '},{' ',' '}};
char matriuG[3][2]={{'.','.'},{'.','.'},{' ',' '}};
char matriuH[3][2]={{'.',' '},{'.','.'},{' ',' '}};
char matriuI[3][2]={{' ','.'},{'.',' '},{' ',' '}};
char matriuJ[3][2]={{' ','.'},{'.','.'},{' ',' '}};
char matriuK[3][2]={{'.',' '},{' ',' '},{'.',' '}};
char matriuL[3][2]={{'.',' '},{'.',' '},{'.',' '}};
char matriuM[3][2]={{'.','.'},{' ',' '},{'.',' '}};
char matriuN[3][2]={{'.','.'},{' ','.'},{'.',' '}};
char matriuO[3][2]={{'.',' '},{' ','.'},{'.',' '}};
char matriuP[3][2]={{'.','.'},{'.',' '},{'.',' '}};
char matriuQ[3][2]={{'.','.'},{'.','.'},{'.',' '}};
char matriuR[3][2]={{'.',' '},{'.','.'},{'.',' '}};
char matriuS[3][2]={{' ','.'},{'.',' '},{'.',' '}};
char matriuT[3][2]={{' ','.'},{'.','.'},{'.',' '}};
char matriuU[3][2]={{'.',' '},{' ',' '},{'.','.'}};
char matriuV[3][2]={{'.',' '},{'.',' '},{'.','.'}};
char matriuW[3][2]={{' ','.'},{'.','.'},{' ','.'}};
char matriuX[3][2]={{'.','.'},{' ',' '},{'.','.'}};
char matriuY[3][2]={{'.','.'},{' ','.'},{'.','.'}};
char matriuZ[3][2]={{'.',' '},{' ','.'},{'.','.'}};



void showFila (char matriu[3][2], int fila){
    cout<<matriu[fila][0]<<" ";
    cout<<matriu[fila][1]<<"    ";
}
void copyMatrice(char original [3][2],char copia [3][2]){
    copia[0][0]=original[0][0];
    copia[0][1]=original[0][1];
    copia[1][0]=original[1][0];
    copia[1][1]=original[1][1];
    copia[2][0]=original[2][0];
    copia[2][1]=original[2][1];
}
void brailleLetter(char letter,char matriu[3][2]){
    switch(letter){
            case 'a': copyMatrice(matriuA,matriu);break;
            case 'b': copyMatrice(matriuB,matriu);break;
            case 'c': copyMatrice(matriuC,matriu);break;
            case 'd': copyMatrice(matriuD,matriu);break;
            case 'e': copyMatrice(matriuE,matriu);break;
            case 'f': copyMatrice(matriuF,matriu);break;
            case 'g': copyMatrice(matriuG,matriu);break;
            case 'h': copyMatrice(matriuH,matriu);break;
            case 'i': copyMatrice(matriuI,matriu);break;
            case 'j': copyMatrice(matriuJ,matriu);break;
            case 'k': copyMatrice(matriuK,matriu);break;
            case 'l': copyMatrice(matriuL,matriu);break;
            case 'm': copyMatrice(matriuM,matriu);break;
            case 'n': copyMatrice(matriuN,matriu);break;
            case 'o': copyMatrice(matriuO,matriu);break;
            case 'p': copyMatrice(matriuP,matriu);break;
            case 'q': copyMatrice(matriuQ,matriu);break;
            case 'r': copyMatrice(matriuR,matriu);break;
            case 's': copyMatrice(matriuS,matriu);break;
            case 't': copyMatrice(matriuT,matriu);break;
            case 'u': copyMatrice(matriuU,matriu);break;
            case 'v': copyMatrice(matriuV,matriu);break;
            case 'w': copyMatrice(matriuW,matriu);break;
            case 'x': copyMatrice(matriuX,matriu);break;
            case 'y': copyMatrice(matriuY,matriu);break;
            default: copyMatrice(matriuZ,matriu);break;
        }
}
void showText(char matriuAuxiliar[3][2],char char_array[],int n){
    for(int x=0;x<3;x++){
	    for(int k=0;k<n;k++){
            if(char_array[k]==' ')cout<<"   "<<"";//Si hi ha un espai
            else{
                brailleLetter(char_array[k],matriuAuxiliar);
                showFila(matriuAuxiliar,x);
            }
            if(k==n-1){
                cout<<""<<"\n";
            }
        }
	}
}


int main(){
	cout << "Introdueix el text desitjat per traduir-lo a braille (TOT MINUSCULES)"<<"\n";
	string text;
	getline(cin, text);
    int n=text.length();
	char char_array[n+1];
    text.copy(char_array,n);
    char matriuAuxiliar[3][2];
    showText(matriuAuxiliar,char_array,n);
}
