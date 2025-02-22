#pragma once
#include "bar_item.h"

struct group {
  CGRect bounds;
  uint32_t num_members;
  struct bar_item** members;
};

struct group* group_create();
void group_init(struct group* group);
void group_set_name(struct group* group, char* _name);
void group_add_member(struct group* group, struct bar_item* item);
void group_remove_member(struct group* group, struct bar_item* bar_item);
uint32_t group_get_length(struct group* group);
bool group_is_first_member(struct group* group, struct bar_item* item);
uint32_t group_count_members_drawn(struct group* group);

void group_calculate_bounds(struct group* group, uint32_t x, uint32_t y, bool rtl);
void group_draw(struct group* group, CGContextRef context);
void group_destroy(struct group* group);

void group_serialize(struct group* group, FILE* rsp);
