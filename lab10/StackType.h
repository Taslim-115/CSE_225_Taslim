//
// Created by USER on 4/21/2024.
//

#ifndef LAB10_STACKTYPE_H
#define LAB10_STACKTYPE_H

class FullStack {
};

class EmptyStack {
};

template<class ItemType>
class StackType {

    struct NodeType {
        ItemType info;
        NodeType *next;
    };

public:
    StackType();

    ~StackType();

    void Push(ItemType);

    void Pop();

    ItemType Top();

    bool IsEmpty();

    bool IsFull();

private:
    NodeType *topPtr;
};


#endif //LAB10_STACKTYPE_H
