#include <iostream>
#include"sortedtype.h"
using namespace std;

template<class T>
void printList(SortedType<T> &st)
{
    T value;
    int len = st.LengthIs();

    for(int i=0; i<len; i++){
        st.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;

    st.ResetList();
}

template<class T>
void checkItemExistsOrNot(SortedType<T> &st, T &item)
{
    bool check;

    st.RetrieveItem(item, check);

}

int main()
{
    SortedType<int> st;

    cout << st.LengthIs() << endl;

    int n;
    for(int i=0; i<7; i++){
        cin >> n;
        st.InsertItem(n);
    }

    cout<<"After printing: "<<endl;

    printList(st);

    int value = 6;
    checkItemExistsOrNot(st, value);

    value = 5;
    checkItemExistsOrNot(st, value);

    st.DeleteItem(1);

    printList(st);

}

