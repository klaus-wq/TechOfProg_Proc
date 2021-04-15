#include "container_atd.h"
#include "number_atd.h"
#ifndef NULL
#define NULL (0)
#endif
using namespace std;
namespace simple_numbers {

    int Real(number& s);

    bool Compare(number* first, number* second) {
        return Real(*first) < Real(*second);
    }

    void Sort(container& c) {
        node* left = c.head;
        node* right = c.head->next;

        node* temp = new node;

        for (int i = 0; i < c.len - 1; i++) {
            for (int j = i + 1; j < c.len; j++) {
                if (Compare(left->n, right->n)) {
                    temp->n = left->n;
                    left->n = right->n;
                    right->n = temp->n;
                }
                right = right->next;
            }
            left = left->next;
            right = left->next;
        }
    }
} // end simple_numbers namespace