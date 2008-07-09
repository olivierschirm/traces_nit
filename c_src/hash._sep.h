#ifndef hash__sep
#define hash__sep
#include "string._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_HashCollection[];

extern const classtable_elt_t VFT_HashNode[];

extern const classtable_elt_t VFT_HashMap[];

extern const classtable_elt_t VFT_HashMapNode[];

extern const classtable_elt_t VFT_HashMapIterator[];

extern const classtable_elt_t VFT_HashSet[];

extern const classtable_elt_t VFT_HashSetNode[];

extern const classtable_elt_t VFT_HashSetIterator[];
extern const int SFT_hash[];
#define COLOR_hash___Object___hash SFT_hash[0]
#define ID_HashCollection SFT_hash[1]
#define COLOR_HashCollection SFT_hash[2]
#define COLOR_hash___HashCollection____array SFT_hash[3]
#define COLOR_hash___HashCollection____capacity SFT_hash[4]
#define COLOR_hash___HashCollection____length SFT_hash[5]
#define COLOR_hash___HashCollection____first_item SFT_hash[6]
#define COLOR_hash___HashCollection____last_item SFT_hash[7]
#define COLOR_hash___HashCollection____last_accessed_index SFT_hash[8]
#define COLOR_hash___HashCollection____last_accessed_key SFT_hash[9]
#define INIT_TABLE_POS_HashCollection SFT_hash[10]
#define COLOR_hash___HashCollection___first_item SFT_hash[11]
#define COLOR_hash___HashCollection___index_at SFT_hash[12]
#define COLOR_hash___HashCollection___store SFT_hash[13]
#define COLOR_hash___HashCollection___remove_index SFT_hash[14]
#define COLOR_hash___HashCollection___raz SFT_hash[15]
#define COLOR_hash___HashCollection___enlarge SFT_hash[16]
#define ID_HashNode SFT_hash[17]
#define COLOR_HashNode SFT_hash[18]
#define COLOR_hash___HashNode____next_item SFT_hash[19]
#define COLOR_hash___HashNode____prev_item SFT_hash[20]
#define INIT_TABLE_POS_HashNode SFT_hash[21]
#define COLOR_hash___HashNode___key SFT_hash[22]
#define COLOR_hash___HashNode___next_item SFT_hash[23]
#define COLOR_hash___HashNode___next_item__eq SFT_hash[24]
#define COLOR_hash___HashNode___prev_item SFT_hash[25]
#define COLOR_hash___HashNode___prev_item__eq SFT_hash[26]
#define ID_HashMap SFT_hash[27]
#define COLOR_HashMap SFT_hash[28]
#define INIT_TABLE_POS_HashMap SFT_hash[29]
#define COLOR_hash___HashMap___init SFT_hash[30]
#define ID_HashMapNode SFT_hash[31]
#define COLOR_HashMapNode SFT_hash[32]
#define INIT_TABLE_POS_HashMapNode SFT_hash[33]
#define COLOR_hash___HashMapNode___init SFT_hash[34]
#define ID_HashMapIterator SFT_hash[35]
#define COLOR_HashMapIterator SFT_hash[36]
#define COLOR_hash___HashMapIterator____map SFT_hash[37]
#define COLOR_hash___HashMapIterator____node SFT_hash[38]
#define INIT_TABLE_POS_HashMapIterator SFT_hash[39]
#define COLOR_hash___HashMapIterator___init SFT_hash[40]
#define ID_HashSet SFT_hash[41]
#define COLOR_HashSet SFT_hash[42]
#define INIT_TABLE_POS_HashSet SFT_hash[43]
#define COLOR_hash___HashSet___init SFT_hash[44]
#define ID_HashSetNode SFT_hash[45]
#define COLOR_HashSetNode SFT_hash[46]
#define COLOR_hash___HashSetNode____key SFT_hash[47]
#define INIT_TABLE_POS_HashSetNode SFT_hash[48]
#define COLOR_hash___HashSetNode___key__eq SFT_hash[49]
#define COLOR_hash___HashSetNode___init SFT_hash[50]
#define ID_HashSetIterator SFT_hash[51]
#define COLOR_HashSetIterator SFT_hash[52]
#define COLOR_hash___HashSetIterator____set SFT_hash[53]
#define COLOR_hash___HashSetIterator____node SFT_hash[54]
#define INIT_TABLE_POS_HashSetIterator SFT_hash[55]
#define COLOR_hash___HashSetIterator___init SFT_hash[56]
typedef val_t (* hash___Object___hash_t)(val_t  self);
val_t hash___Object___hash(val_t  self);
typedef val_t (* hash___String___hash_t)(val_t  self);
val_t hash___String___hash(val_t  self);
typedef val_t (* hash___Int___hash_t)(val_t  self);
val_t hash___Int___hash(val_t  self);
typedef val_t (* hash___Char___hash_t)(val_t  self);
val_t hash___Char___hash(val_t  self);
typedef val_t (* hash___Bool___hash_t)(val_t  self);
val_t hash___Bool___hash(val_t  self);
#define ATTR_hash___HashCollection____array(recv) ATTR(recv, COLOR_hash___HashCollection____array)
#define ATTR_hash___HashCollection____capacity(recv) ATTR(recv, COLOR_hash___HashCollection____capacity)
#define ATTR_hash___HashCollection____length(recv) ATTR(recv, COLOR_hash___HashCollection____length)
typedef val_t (* hash___HashCollection___length_t)(val_t  self);
val_t hash___HashCollection___length(val_t  self);
#define ATTR_hash___HashCollection____first_item(recv) ATTR(recv, COLOR_hash___HashCollection____first_item)
typedef val_t (* hash___HashCollection___first_item_t)(val_t  self);
val_t hash___HashCollection___first_item(val_t  self);
#define ATTR_hash___HashCollection____last_item(recv) ATTR(recv, COLOR_hash___HashCollection____last_item)
#define ATTR_hash___HashCollection____last_accessed_index(recv) ATTR(recv, COLOR_hash___HashCollection____last_accessed_index)
#define ATTR_hash___HashCollection____last_accessed_key(recv) ATTR(recv, COLOR_hash___HashCollection____last_accessed_key)
typedef val_t (* hash___HashCollection___index_at_t)(val_t  self, val_t  param0);
val_t hash___HashCollection___index_at(val_t  self, val_t  param0);
typedef void (* hash___HashCollection___store_t)(val_t  self, val_t  param0, val_t  param1);
void hash___HashCollection___store(val_t  self, val_t  param0, val_t  param1);
typedef void (* hash___HashCollection___remove_index_t)(val_t  self, val_t  param0);
void hash___HashCollection___remove_index(val_t  self, val_t  param0);
typedef void (* hash___HashCollection___raz_t)(val_t  self);
void hash___HashCollection___raz(val_t  self);
typedef void (* hash___HashCollection___enlarge_t)(val_t  self, val_t  param0);
void hash___HashCollection___enlarge(val_t  self, val_t  param0);
typedef val_t (* hash___HashNode___key_t)(val_t  self);
val_t hash___HashNode___key(val_t  self);
#define ATTR_hash___HashNode____next_item(recv) ATTR(recv, COLOR_hash___HashNode____next_item)
typedef val_t (* hash___HashNode___next_item_t)(val_t  self);
val_t hash___HashNode___next_item(val_t  self);
typedef void (* hash___HashNode___next_item__eq_t)(val_t  self, val_t  param0);
void hash___HashNode___next_item__eq(val_t  self, val_t  param0);
#define ATTR_hash___HashNode____prev_item(recv) ATTR(recv, COLOR_hash___HashNode____prev_item)
typedef val_t (* hash___HashNode___prev_item_t)(val_t  self);
val_t hash___HashNode___prev_item(val_t  self);
typedef void (* hash___HashNode___prev_item__eq_t)(val_t  self, val_t  param0);
void hash___HashNode___prev_item__eq(val_t  self, val_t  param0);
typedef val_t (* hash___HashMap___iterator_t)(val_t  self);
val_t hash___HashMap___iterator(val_t  self);
typedef val_t (* hash___HashMap___first_t)(val_t  self);
val_t hash___HashMap___first(val_t  self);
typedef val_t (* hash___HashMap___is_empty_t)(val_t  self);
val_t hash___HashMap___is_empty(val_t  self);
typedef val_t (* hash___HashMap___count_t)(val_t  self, val_t  param0);
val_t hash___HashMap___count(val_t  self, val_t  param0);
typedef val_t (* hash___HashMap___has_t)(val_t  self, val_t  param0);
val_t hash___HashMap___has(val_t  self, val_t  param0);
typedef val_t (* hash___HashMap___has_only_t)(val_t  self, val_t  param0);
val_t hash___HashMap___has_only(val_t  self, val_t  param0);
typedef void (* hash___HashMap_____braeq_t)(val_t  self, val_t  param0, val_t  param1);
void hash___HashMap_____braeq(val_t  self, val_t  param0, val_t  param1);
typedef void (* hash___HashMap___remove_t)(val_t  self, val_t  param0);
void hash___HashMap___remove(val_t  self, val_t  param0);
typedef void (* hash___HashMap___remove_at_t)(val_t  self, val_t  param0);
void hash___HashMap___remove_at(val_t  self, val_t  param0);
typedef void (* hash___HashMap___clear_t)(val_t  self);
void hash___HashMap___clear(val_t  self);
typedef val_t (* hash___HashMap___couple_at_t)(val_t  self, val_t  param0);
val_t hash___HashMap___couple_at(val_t  self, val_t  param0);
typedef void (* hash___HashMap___init_t)(val_t  self, int* init_table);
void hash___HashMap___init(val_t  self, int* init_table);
val_t NEW_hash___HashMap___init();
typedef val_t (* hash___HashMapNode___key_t)(val_t  self);
val_t hash___HashMapNode___key(val_t  self);
typedef void (* hash___HashMapNode___init_t)(val_t  self, val_t  param0, val_t  param1, int* init_table);
void hash___HashMapNode___init(val_t  self, val_t  param0, val_t  param1, int* init_table);
val_t NEW_hash___HashMapNode___init(val_t  param0, val_t  param1);
typedef val_t (* hash___HashMapIterator___is_ok_t)(val_t  self);
val_t hash___HashMapIterator___is_ok(val_t  self);
typedef val_t (* hash___HashMapIterator___item_t)(val_t  self);
val_t hash___HashMapIterator___item(val_t  self);
typedef void (* hash___HashMapIterator___item__eq_t)(val_t  self, val_t  param0);
void hash___HashMapIterator___item__eq(val_t  self, val_t  param0);
typedef val_t (* hash___HashMapIterator___key_t)(val_t  self);
val_t hash___HashMapIterator___key(val_t  self);
typedef void (* hash___HashMapIterator___next_t)(val_t  self);
void hash___HashMapIterator___next(val_t  self);
#define ATTR_hash___HashMapIterator____map(recv) ATTR(recv, COLOR_hash___HashMapIterator____map)
#define ATTR_hash___HashMapIterator____node(recv) ATTR(recv, COLOR_hash___HashMapIterator____node)
typedef void (* hash___HashMapIterator___init_t)(val_t  self, val_t  param0, int* init_table);
void hash___HashMapIterator___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_hash___HashMapIterator___init(val_t  param0);
typedef val_t (* hash___HashSet___is_empty_t)(val_t  self);
val_t hash___HashSet___is_empty(val_t  self);
typedef val_t (* hash___HashSet___first_t)(val_t  self);
val_t hash___HashSet___first(val_t  self);
typedef val_t (* hash___HashSet___has_t)(val_t  self, val_t  param0);
val_t hash___HashSet___has(val_t  self, val_t  param0);
typedef void (* hash___HashSet___add_t)(val_t  self, val_t  param0);
void hash___HashSet___add(val_t  self, val_t  param0);
typedef void (* hash___HashSet___remove_t)(val_t  self, val_t  param0);
void hash___HashSet___remove(val_t  self, val_t  param0);
typedef void (* hash___HashSet___clear_t)(val_t  self);
void hash___HashSet___clear(val_t  self);
typedef val_t (* hash___HashSet___iterator_t)(val_t  self);
val_t hash___HashSet___iterator(val_t  self);
typedef void (* hash___HashSet___init_t)(val_t  self, int* init_table);
void hash___HashSet___init(val_t  self, int* init_table);
val_t NEW_hash___HashSet___init();
#define ATTR_hash___HashSetNode____key(recv) ATTR(recv, COLOR_hash___HashSetNode____key)
typedef val_t (* hash___HashSetNode___key_t)(val_t  self);
val_t hash___HashSetNode___key(val_t  self);
typedef void (* hash___HashSetNode___key__eq_t)(val_t  self, val_t  param0);
void hash___HashSetNode___key__eq(val_t  self, val_t  param0);
typedef void (* hash___HashSetNode___init_t)(val_t  self, val_t  param0, int* init_table);
void hash___HashSetNode___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_hash___HashSetNode___init(val_t  param0);
typedef val_t (* hash___HashSetIterator___is_ok_t)(val_t  self);
val_t hash___HashSetIterator___is_ok(val_t  self);
typedef val_t (* hash___HashSetIterator___item_t)(val_t  self);
val_t hash___HashSetIterator___item(val_t  self);
typedef void (* hash___HashSetIterator___next_t)(val_t  self);
void hash___HashSetIterator___next(val_t  self);
#define ATTR_hash___HashSetIterator____set(recv) ATTR(recv, COLOR_hash___HashSetIterator____set)
#define ATTR_hash___HashSetIterator____node(recv) ATTR(recv, COLOR_hash___HashSetIterator____node)
typedef void (* hash___HashSetIterator___init_t)(val_t  self, val_t  param0, int* init_table);
void hash___HashSetIterator___init(val_t  self, val_t  param0, int* init_table);
val_t NEW_hash___HashSetIterator___init(val_t  param0);
#endif
