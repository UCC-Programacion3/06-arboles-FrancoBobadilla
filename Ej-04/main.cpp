#include "../ArbolBinario/ProbarArbol.h"
int main() {
    system("clear");
    char n;
    ArbolBinario<int> arbol;
    char x;
    try {
        ProbarArbol(&arbol, 30, 100, 500, true);
    } catch (int e) {}
    cin>>n;
    main();
}
