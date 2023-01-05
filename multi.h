#ifndef MULTI_H_INCLUDED
#define MULTI_H_INCLUDED
#include <iostream>
#define first(List_sales) List_sales.first
#define info(S) S->info
#define next(S) S->next
#define nextJual(S) S->nextJual
#define info(J) J->info
#define next(J) J->next
/*
Aryasatya Okta Pradhana
1301204212
*/

using namespace std;

typedef struct elm_sales *adr_sales;

typedef struct elm_jual *adr_jual;

struct sales {
    string nama, gol;
};

struct elm_sales {
    sales info;
    adr_sales next;
    adr_jual nextJual;
};

struct elm_jual{
    int info;
    adr_jual next;
};

struct mll{
    adr_sales first;
};

void Create_list(mll &List_sales);
void newElm_sales(sales info, adr_sales &S);
void newElm_jual(int info, adr_jual &J);
void insertNew_Penjualan(mll &List_sales, adr_sales S, adr_jual J);
void insertLast_Sales(mll &List_sales, adr_sales S);
void deleteFirst_Penjualan(mll &List_sales, adr_sales S, adr_jual J);
void deleteLast_Penjualan(mll &List_sales, adr_sales &S, adr_jual &J);
void deleteAfter_Penjualan(mll &List_sales, adr_sales &S, adr_jual Prec, adr_jual &J);
void delete_Penjualan(mll &List_sales);
void showData_Sales(mll List_sales);
adr_sales Search_Sales(mll List_sales, string nama_Sales);


#endif // MULTI_H_INCLUDED
