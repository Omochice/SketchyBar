#pragma once
#include "bar_item.h"
#include "misc/helpers.h"

extern CGError SLSDisableUpdate(int cid);
extern CGError SLSReenableUpdate(int cid);
extern CGError SLSNewWindow(int cid, int type, float x, float y, CFTypeRef region, uint32_t *wid);
extern CGError SLSReleaseWindow(int cid, uint32_t wid);
extern CGError SLSSetWindowTags(int cid, uint32_t wid, uint64_t* tags, int tag_size);
extern CGError SLSClearWindowTags(int cid, uint32_t wid, uint64_t* tags, int tag_size);
extern CGError SLSSetWindowShape(int cid, uint32_t wid, float x_offset, float y_offset, CFTypeRef shape);
extern CGError SLSSetWindowResolution(int cid, uint32_t wid, double res);
extern CGError SLSSetWindowOpacity(int cid, uint32_t wid, bool isOpaque);
extern CGError SLSSetWindowBackgroundBlurRadius(int cid, uint32_t wid, uint32_t radius);
extern CGError SLSOrderWindow(int cid, uint32_t wid, int mode, uint32_t relativeToWID);
extern CGError SLSSetWindowLevel(int cid, uint32_t wid, int level);
extern CGContextRef SLWindowContextCreate(int cid, uint32_t wid, CFDictionaryRef options);
extern CGError CGSNewRegionWithRect(CGRect *rect, CFTypeRef *outRegion);
extern CGError SLSAddActivationRegion(uint32_t cid, uint32_t wid, CFTypeRef region);
extern CGError SLSAddTrackingRect(uint32_t cid, uint32_t wid, CGRect rect);
extern CGError SLSClearActivationRegion(uint32_t cid, uint32_t wid);
extern CGError SLSRemoveAllTrackingAreas(uint32_t cid, uint32_t wid);
extern CGError SLSMoveWindow(int cid, uint32_t wid, CGPoint *point);
extern CGError SLSWindowSetShadowProperties(uint32_t wid, CFDictionaryRef properties);
extern int SLSSpaceGetType(int cid, uint64_t sid);

#define kCGSHighQualityResamplingTagBit (1ULL <<  4)
#define kCGSStickyTagBit                (1ULL << 11)
#define kCGSSuperStickyTagBit           (1ULL << 45)

#define ALIGN_NONE   0
#define ALIGN_LEFT   1
#define ALIGN_RIGHT  2
#define ALIGN_TOP    3
#define ALIGN_BOTTOM 4
#define ALIGN_CENTER 5

struct bar {
  bool shown;
  bool hidden;

  uint32_t id;
  uint32_t did;
  uint32_t sid;
  uint32_t adid;
  uint32_t notch_width;

  CGRect frame;
  CGPoint origin;
  CGContextRef context;
};

struct bar *bar_create(uint32_t did);
void bar_create_window(struct bar* bar);
void bar_close_window(struct bar* bar);
void bar_destroy(struct bar* bar);
void bar_set_hidden(struct bar* bar, bool hidden);
void bar_calculate_bounds(struct bar* bar);
void bar_resize(struct bar* bar);
void bar_draw(struct bar* bar);

void window_set_blur_radius(uint32_t wid);
void window_disable_shadow(uint32_t wid);
bool bar_draws_item(struct bar* bar, struct bar_item* bar_item);

void context_set_font_smoothing(CGContextRef context, bool smoothing);
