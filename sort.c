#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "sort.h"

void sort_by_fee(member_list *mlist){
    int sorting; 
    membernode *m; 

    while (mlist && sorting) { 
        sorting = 0; 
        m = *mlist;   
        while (m->next) 
        { 
            if (m->data.fee < m->next->data.fee) {  
                swapnode(m, m->next); 
                sorting = 1; 
            } 
            m = m->next; 
        } 
    } 
}

void sort_by_lname(member_list *mlist){
    int sorting; 
    membernode *m; 
    
    while (mlist && sorting) { 
        sorting = 0; 
        m = *mlist;   
        while (m->next) 
        { 
            if ((strcmp(m->data.name.last, m->next->data.name.last)) > 0)  {  
                swapnode(m, m->next); 
                sorting = 1; 
            } 
            m = m->next; 
        } 
    } 
}

void sort_by_fname(member_list *mlist){
    int sorting; 
    membernode *m; 
    
    while (mlist && sorting) { 
        sorting = 0; 
        m = *mlist;   
        while (m->next) 
        { 
            if ((strcmp(m->data.name.first, m->next->data.name.first)) > 0)  {  
                swapnode(m, m->next); 
                sorting = 1; 
            } 
            m = m->next; 
        } 
    } 
}

void sort_by_id(member_list *mlist){
    int sorting; 
    membernode *m; 
    
    while (mlist && sorting) { 
        sorting = 0; 
        m = *mlist;   
        while (m->next) 
        { 
            if ((strcmp(m->data.id, m->next->data.id)) > 0)   {  
                swapnode(m, m->next); 
                sorting = 1; 
            } 
            m = m->next; 
        } 
    } 
}

void swapnode(membernode *a, membernode *b) 
{ 
    member temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 
