#include <iostream>
#include "BTree.cpp"
using namespace std;



int main()
{
    //A/B*C*D+E
    int i = 0;
    string input="A/B*C*D+E";
    BTree<char> tree(input[i]);
    i++;
    while(i<9){
        char D,R;
        D = input[i];
        i++;
        R = input[i];
        i++;
        tree.insert(tree,*new BTree<char>(D),*new BTree<char>(R));
    }
        tree.postorder();

}
