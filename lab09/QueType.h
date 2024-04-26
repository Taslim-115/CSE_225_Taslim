//
// Created by USER on 4/23/2024.
//

#ifndef LAB09_QUETYPE_H
#define LAB09_QUETYPE_H

class FullQueue {
};

class EmtyQueue {
};

template<class ItemType>
class QueType {

public:
    QueType();

     explicit QueType(int max);

    ~QueType();

    void MakeEmpty();

    bool IsEmpty();

    bool IsFull();

    void Enqueue(ItemType);

    void Dequeue(ItemType &);

private:
    int front;
    int rear;
    ItemType *items;
    int maxQue;
};


#endif //LAB09_QUETYPE_H
