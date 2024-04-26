

#include "SortedType.h"


template<class ItemType>
SortedType<ItemType>::SortedType() {
    length = 0;
    currentPos = -1;
}

template<class ItemType>
void SortedType<ItemType>::MakeEmpty() {
    length = 0;
}

template<class ItemType>
bool SortedType<ItemType>::IsFull() {
    return (length == MAX_ITEMS);
}

template<class ItemType>
int SortedType<ItemType>::LengthIs() {
    return length;
}

template<class ItemType>
void SortedType<ItemType>::ResetList() {
    currentPos = -1;
}

template<class ItemType>
void
SortedType<ItemType>::GetNextItem(ItemType &
item) {
    currentPos++;
    item = info[currentPos];
}
template<class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item) {
    int location = 0; // Initialize the location to start searching
    bool moreToSearch = (location < length); // Check if there are more elements to search in the list

    // Loop until there are no more elements to search
    while (moreToSearch) {
        // If the current item is greater than the item to be inserted, move to the next location
        if (item > info[location]) {
            location++;
            moreToSearch = (location < length); // Update the flag indicating if there are more elements to search
        } else if (item < info[location]) { // If the current item is less than the item to be inserted, stop searching
            moreToSearch = false;
        }
    }

    // Shift elements to the right to make space for the new item
    for (int index = length; index > location; index--)
        info[index] = info[index - 1];

    // Insert the new item at the correct position
    info[location] = item;
    length++; // Increment the length of the list
}

template<class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item) {
    int location = 0; // Initialize the location to start searching

    // Find the location of the item to be deleted
    while (item != info[location])
        location++;

    // Shift elements to the left to fill the gap left by the deleted item
    for (int index = location + 1; index < length; index++)
        info[index - 1] = info[index];

    length--; // Decrement the length of the list
}

template<class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType &item, bool &found) {
    int midPoint, first = 0, last = length - 1; // Initialize first, last, and midPoint variables for binary search
    bool moreToSearch = (first <= last); // Check if there are elements to search in the list
    found = false; // Initialize found flag to false

    // Perform binary search until the item is found or there are no more elements to search
    while (moreToSearch && !found) {
        midPoint = (first + last) / 2; // Calculate the midpoint of the current range
        if (item < info[midPoint]) { // If the item is less than the value at the midpoint, search the left half
            last = midPoint - 1;
            moreToSearch = (first <= last);
        } else if (item > info[midPoint]) { // If the item is greater than the value at the midpoint, search the right half
            first = midPoint + 1;
            moreToSearch = (first <= last);
        } else { // If the item is equal to the value at the midpoint, the item is found
            found = true;
            item = info[midPoint]; // Update the item with the found value
        }
    }
}