#include <iostream>
#include "multi.h"
/*
Aryasatya Okta Pradhana
1301204212
*/
using namespace std;

int main()
{   mll L;
    adr_sales S;
    adr_jual J;

    Create_list(L);

    newElm_sales({"Siska", "Gol A"}, S);
    insertLast_Sales(L, S);

    newElm_jual(5, J);
    insertNew_Penjualan(L, S, J);

    newElm_jual(3, J);
    insertNew_Penjualan(L, S, J);

    newElm_jual(4, J);
    insertNew_Penjualan(L, S, J);

    newElm_jual(2, J);
    insertNew_Penjualan(L, S, J);

    newElm_sales({"Affan", "Gol C"}, S);
    insertLast_Sales(L, S);

    newElm_jual(1, J);
    insertNew_Penjualan(L, S, J);

    newElm_jual(3, J);
    insertNew_Penjualan(L, S, J);

    newElm_sales({"Cahya", "Gol A"}, S);
    insertLast_Sales(L, S);

    newElm_jual(5, J);
    insertNew_Penjualan(L, S, J);

    newElm_jual(0, J);
    insertNew_Penjualan(L, S, J);

    newElm_jual(2, J);
    insertNew_Penjualan(L, S, J);

    newElm_sales({"Lia", "Gol A"}, S);
    insertLast_Sales(L, S);

    newElm_sales({"Hafidz", "Gol B"}, S);
    insertLast_Sales(L, S);

    newElm_jual(1, J);
    insertNew_Penjualan(L, S, J);
    showData_Sales(L);
    return 0;
}
