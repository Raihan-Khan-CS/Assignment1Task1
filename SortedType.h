#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int MAX_ITEMS = 7;
template <class ItemType>

class SortedType
{
public :
    SortedType();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#include "sortedtype.tpp"
#endif // SORTEDTYPE_H_INCLUDED