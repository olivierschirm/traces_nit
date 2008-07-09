#ifndef list__sep
#define list__sep
#include "abstract_collection._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_List[];

extern const classtable_elt_t VFT_ListIterator[];

extern const classtable_elt_t VFT_ListNode[];
extern const int SFT_list[];
#define ID_List SFT_list[0]
#define COLOR_List SFT_list[1]
#define COLOR_list___List____head SFT_list[2]
#define COLOR_list___List____tail SFT_list[3]
#define INIT_TABLE_POS_List SFT_list[4]
#define COLOR_list___List___link SFT_list[5]
#define COLOR_list___List___init SFT_list[6]
#define COLOR_list___List___from SFT_list[7]
#define COLOR_list___List___get_node SFT_list[8]
#define COLOR_list___List___search_node_after SFT_list[9]
#define COLOR_list___List___remove_node SFT_list[10]
#define COLOR_list___List___insert_before SFT_list[11]
#define ID_ListIterator SFT_list[12]
#define COLOR_ListIterator SFT_list[13]
#define COLOR_list___ListIterator____node SFT_list[14]
#define COLOR_list___ListIterator____index SFT_list[15]
#define INIT_TABLE_POS_ListIterator SFT_list[16]
#define COLOR_list___ListIterator___init SFT_list[17]
#define ID_ListNode SFT_list[18]
#define COLOR_ListNode SFT_list[19]
#define COLOR_list___ListNode____next SFT_list[20]
#define COLOR_list___ListNode____prev SFT_list[21]
#define INIT_TABLE_POS_ListNode SFT_list[22]
#define COLOR_list___ListNode___init SFT_list[23]
#define COLOR_list___ListNode___next SFT_list[24]
#define COLOR_list___ListNode___next__eq SFT_list[25]
#define COLOR_list___ListNode___prev SFT_list[26]
#define COLOR_list___ListNode___prev__eq SFT_list[27]
typedef val_t (* list___List_____bra_t)(val_t  self, val_t  param0);
val_t list___List_____bra(val_t  self, val_t  param0);
typedef void (* list___List_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void list___List_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* list___List___first_t)(val_t  self);
val_t list___List___first(val_t  self);
typedef void (* list___List___first__eq_t)(val_t  self, val_t  param0);
void list___List___first__eq(val_t  self, val_t  param0);
typedef val_t (* list___List___last_t)(val_t  self);
val_t list___List___last(val_t  self);
typedef void (* list___List___last__eq_t)(val_t  self, val_t  param0);
void list___List___last__eq(val_t  self, val_t  param0);
typedef val_t (* list___List___is_empty_t)(val_t  self);
val_t list___List___is_empty(val_t  self);
typedef val_t (* list___List___length_t)(val_t  self);
val_t list___List___length(val_t  self);
typedef val_t (* list___List___has_t)(val_t  self, val_t  param0);
val_t list___List___has(val_t  self, val_t  param0);
typedef val_t (* list___List___has_only_t)(val_t  self, val_t  param0);
val_t list___List___has_only(val_t  self, val_t  param0);
typedef val_t (* list___List___count_t)(val_t  self, val_t  param0);
val_t list___List___count(val_t  self, val_t  param0);
typedef val_t (* list___List___has_key_t)(val_t  self, val_t  param0);
val_t list___List___has_key(val_t  self, val_t  param0);
typedef void (* list___List___push_t)(val_t  self, val_t  param0);
void list___List___push(val_t  self, val_t  param0);
typedef void (* list___List___unshift_t)(val_t  self, val_t  param0);
void list___List___unshift(val_t  self, val_t  param0);
typedef void (* list___List___link_t)(val_t  self, val_t  param0);
void list___List___link(val_t  self, val_t  param0);
typedef val_t (* list___List___pop_t)(val_t  self);
val_t list___List___pop(val_t  self);
typedef val_t (* list___List___shift_t)(val_t  self);
val_t list___List___shift(val_t  self);
typedef void (* list___List___remove_t)(val_t  self, val_t  param0);
void list___List___remove(val_t  self, val_t  param0);
typedef void (* list___List___remove_at_t)(val_t  self, val_t  param0);
void list___List___remove_at(val_t  self, val_t  param0);
typedef void (* list___List___clear_t)(val_t  self);
void list___List___clear(val_t  self);
typedef val_t (* list___List___iterator_t)(val_t  self);
val_t list___List___iterator(val_t  self);
typedef void (* list___List___init_t)(val_t  self, int* init_table);
void list___List___init(val_t  self, int* init_table);
val_t NEW_list___List___init();
typedef void (* list___List___from_t)(val_t  self, val_t  param0, int* init_table);
void list___List___from(val_t  self, val_t  param0, int* init_table);
val_t NEW_list___List___from(val_t  param0);
#define ATTR_list___List____head(recv) ATTR(recv, COLOR_list___List____head)
#define ATTR_list___List____tail(recv) ATTR(recv, COLOR_list___List____tail)
typedef val_t (* list___List___get_node_t)(val_t  self, val_t  param0);
val_t list___List___get_node(val_t  self, val_t  param0);
typedef val_t (* list___List___search_node_after_t)(val_t  self, val_t  param0, val_t  param1);
val_t list___List___search_node_after(val_t  self, val_t  param0, val_t  param1);
typedef void (* list___List___remove_node_t)(val_t  self, val_t  param0);
void list___List___remove_node(val_t  self, val_t  param0);
typedef void (* list___List___insert_before_t)(val_t  self, val_t  param0, val_t  param1);
void list___List___insert_before(val_t  self, val_t  param0, val_t  param1);
typedef val_t (* list___ListIterator___item_t)(val_t  self);
val_t list___ListIterator___item(val_t  self);
typedef void (* list___ListIterator___item__eq_t)(val_t  self, val_t  param0);
void list___ListIterator___item__eq(val_t  self, val_t  param0);
typedef val_t (* list___ListIterator___is_ok_t)(val_t  self);
val_t list___ListIterator___is_ok(val_t  self);
typedef void (* list___ListIterator___next_t)(val_t  self);
void list___ListIterator___next(val_t  self);
typedef void (* list___ListIterator___init_t)(val_t  self, val_t  param0, int* init_table);
void list___ListIterator___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_list___ListIterator___init(val_t  param0);
#define ATTR_list___ListIterator____node(recv) ATTR(recv, COLOR_list___ListIterator____node)
#define ATTR_list___ListIterator____index(recv) ATTR(recv, COLOR_list___ListIterator____index)
typedef val_t (* list___ListIterator___index_t)(val_t  self);
val_t list___ListIterator___index(val_t  self);
typedef void (* list___ListNode___init_t)(val_t  self, val_t  param0, int* init_table);
void list___ListNode___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_list___ListNode___init(val_t  param0);
#define ATTR_list___ListNode____next(recv) ATTR(recv, COLOR_list___ListNode____next)
typedef val_t (* list___ListNode___next_t)(val_t  self);
val_t list___ListNode___next(val_t  self);
typedef void (* list___ListNode___next__eq_t)(val_t  self, val_t  param0);
void list___ListNode___next__eq(val_t  self, val_t  param0);
#define ATTR_list___ListNode____prev(recv) ATTR(recv, COLOR_list___ListNode____prev)
typedef val_t (* list___ListNode___prev_t)(val_t  self);
val_t list___ListNode___prev(val_t  self);
typedef void (* list___ListNode___prev__eq_t)(val_t  self, val_t  param0);
void list___ListNode___prev__eq(val_t  self, val_t  param0);
#endif
