#include "multi.h"
using namespace std;

/*
Aryasatya Okta Pradhana
1301204212
*/

adr_sales Search_Sales(mll List_sales, string nama_Sales){
    adr_sales S;

    S = first(List_sales);
    while(S != NULL){
        if(info(S).nama == nama_Sales){
            return S;
        }
        S = next(S);
    }
    if(S == NULL){
        cout<<"Sales tidak ditemukan"<<endl;
    }
}

void insertLast_Sales(mll &List_sales, adr_sales S){
    adr_sales Prec;
    if(first(List_sales) == NULL){
        first(List_sales) = S;
    }else{
        Prec = first(List_sales);
        while(next(Prec) != NULL){
            Prec = next(Prec);
        }
        next(Prec) = S;
    }
}

void deleteFirst_Penjualan(mll &List_Sales, adr_sales S, adr_jual J) {
    J = nextJual(S);
    nextJual(S) = next(J);
    next(J) = NULL;
}

void deleteLast_Penjualan(mll &List_sales, adr_sales &S, adr_jual &J){
    adr_jual P = nextJual(S);
    while(next(P) != J){
        P = next(P);
    }
    J = next(P);
    next(P) = next(J);
    next(J) = NULL;
}

void deleteAfter_Penjualan(mll &List_sales, adr_sales &S, adr_jual Prec, adr_jual &J){
    next(Prec) = next(J);
    next(J) = NULL;
}

void Create_list(mll &List_sales){
    first(List_sales) = NULL;
}

void newElm_sales(sales info, adr_sales &S){
    S = new elm_sales;
    info(S) = info;
    next(S) = NULL;
    nextJual(S) = NULL;
}

void newElm_jual(int info, adr_jual &J){
    J = new elm_jual;
    info(J) = info;
    next(J) = NULL;
}

void insertNew_Penjualan(mll &List_sales, adr_sales S, adr_jual J){
    if (first(List_sales) != NULL){
        adr_jual P = nextJual(S);
        if (P != NULL){
            while (next(P) != NULL){
                P = next(P);
            }
            next(P) = J;
        } else {
            nextJual(S) = J;
        }
    }
}

void delete_Penjualan(mll &List_sales) {
    adr_sales P = first(List_sales);

    while (P != NULL) {
        adr_jual J = nextJual(P);
        while (J != NULL) {
            if (info(J) < 3) {
                if (J = nextJual(P)) {
                    deleteFirst_Penjualan(List_sales, P, J);
                } else if (next(J) = NULL) {
                    deleteFirst_Penjualan(List_sales, P, J);
                } else {
                    adr_jual prec = nextJual(P);
                    while (next(prec) != J) {
                        prec = next(prec);
                    }
                    deleteAfter_Penjualan(List_sales, P, prec, J);
                }
            }
            J = next(J);
        }
        P = next(P);
    }
}


void showData_Sales(mll List_sales){
    adr_sales S;
    adr_jual J;
    if (first(List_sales)==NULL){
        cout<< "LIST KOSOSNG";
    }
    else{
        S = first(List_sales);
        while (S != NULL){
            cout<<"Nama : "<< info(S).nama<<endl;
            cout<<"Gol  : "<<  info(S).gol<<endl;
            J = nextJual(S);
            while (J != NULL){
                cout<<info(J)<<" ";
                J= next(J);
            }
            S= next(S);
            cout<<endl;
        }
    }
}


