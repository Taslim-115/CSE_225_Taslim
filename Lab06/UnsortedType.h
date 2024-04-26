//
// Created by USER on 3/24/2024.
//

#ifndef LAB06_UNSORTEDTYPE_H
#define LAB06_UNSORTEDTYPE_H

template<class ItemType>
class UnsortedType {

    struct NodeType {
        ItemType info;
        NodeType *next;
    };
public:
    UnsortedType();

    ~UnsortedType();

    bool IsFull();

    int LengthIs();

    void MakeEmpty();

    void RetrieveItem(ItemType &,
                      bool &);

    void InsertItem(ItemType);

    void DeleteItem(ItemType);

    void ResetList();

    void GetNextItem(ItemType &);

private:
    NodeType *listData;
    int length;
    NodeType *currentPos;

};


#endif //LAB06_UNSORTEDTYPE_H
