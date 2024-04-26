//
// Created by USER on 3/31/2024.
//

#ifndef LAB07_SORTEDTYPE_H
#define LAB07_SORTEDTYPE_H


template<class ItemType>
class SortedType {
    struct NodeType {
        ItemType info;
        NodeType *next;
    };
public:
    SortedType();

    ~SortedType();

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


#endif //LAB07_SORTEDTYPE_H
