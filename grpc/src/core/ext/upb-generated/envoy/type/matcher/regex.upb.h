/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/regex.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_REGEX_PROTO_UPB_H_
#define ENVOY_TYPE_MATCHER_REGEX_PROTO_UPB_H_

#include "upb/generated_util.h"
#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_matcher_RegexMatcher;
struct envoy_type_matcher_RegexMatcher_GoogleRE2;
typedef struct envoy_type_matcher_RegexMatcher envoy_type_matcher_RegexMatcher;
typedef struct envoy_type_matcher_RegexMatcher_GoogleRE2 envoy_type_matcher_RegexMatcher_GoogleRE2;
extern const upb_msglayout envoy_type_matcher_RegexMatcher_msginit;
extern const upb_msglayout envoy_type_matcher_RegexMatcher_GoogleRE2_msginit;
struct google_protobuf_UInt32Value;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;


/* envoy.type.matcher.RegexMatcher */

UPB_INLINE envoy_type_matcher_RegexMatcher *envoy_type_matcher_RegexMatcher_new(upb_arena *arena) {
  return (envoy_type_matcher_RegexMatcher *)upb_msg_new(&envoy_type_matcher_RegexMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_RegexMatcher *envoy_type_matcher_RegexMatcher_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_matcher_RegexMatcher *ret = envoy_type_matcher_RegexMatcher_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_type_matcher_RegexMatcher_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_type_matcher_RegexMatcher_serialize(const envoy_type_matcher_RegexMatcher *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_matcher_RegexMatcher_msginit, arena, len);
}

typedef enum {
  envoy_type_matcher_RegexMatcher_engine_type_google_re2 = 1,
  envoy_type_matcher_RegexMatcher_engine_type_NOT_SET = 0
} envoy_type_matcher_RegexMatcher_engine_type_oneofcases;
UPB_INLINE envoy_type_matcher_RegexMatcher_engine_type_oneofcases envoy_type_matcher_RegexMatcher_engine_type_case(const envoy_type_matcher_RegexMatcher* msg) { return (envoy_type_matcher_RegexMatcher_engine_type_oneofcases)UPB_FIELD_AT(msg, int32_t, UPB_SIZE(12, 24)); }

UPB_INLINE bool envoy_type_matcher_RegexMatcher_has_google_re2(const envoy_type_matcher_RegexMatcher *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(12, 24), 1); }
UPB_INLINE const envoy_type_matcher_RegexMatcher_GoogleRE2* envoy_type_matcher_RegexMatcher_google_re2(const envoy_type_matcher_RegexMatcher *msg) { return UPB_READ_ONEOF(msg, const envoy_type_matcher_RegexMatcher_GoogleRE2*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 1, NULL); }
UPB_INLINE upb_strview envoy_type_matcher_RegexMatcher_regex(const envoy_type_matcher_RegexMatcher *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }

UPB_INLINE void envoy_type_matcher_RegexMatcher_set_google_re2(envoy_type_matcher_RegexMatcher *msg, envoy_type_matcher_RegexMatcher_GoogleRE2* value) {
  UPB_WRITE_ONEOF(msg, envoy_type_matcher_RegexMatcher_GoogleRE2*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 1);
}
UPB_INLINE struct envoy_type_matcher_RegexMatcher_GoogleRE2* envoy_type_matcher_RegexMatcher_mutable_google_re2(envoy_type_matcher_RegexMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_RegexMatcher_GoogleRE2* sub = (struct envoy_type_matcher_RegexMatcher_GoogleRE2*)envoy_type_matcher_RegexMatcher_google_re2(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_RegexMatcher_GoogleRE2*)upb_msg_new(&envoy_type_matcher_RegexMatcher_GoogleRE2_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_RegexMatcher_set_google_re2(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_matcher_RegexMatcher_set_regex(envoy_type_matcher_RegexMatcher *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}

/* envoy.type.matcher.RegexMatcher.GoogleRE2 */

UPB_INLINE envoy_type_matcher_RegexMatcher_GoogleRE2 *envoy_type_matcher_RegexMatcher_GoogleRE2_new(upb_arena *arena) {
  return (envoy_type_matcher_RegexMatcher_GoogleRE2 *)upb_msg_new(&envoy_type_matcher_RegexMatcher_GoogleRE2_msginit, arena);
}
UPB_INLINE envoy_type_matcher_RegexMatcher_GoogleRE2 *envoy_type_matcher_RegexMatcher_GoogleRE2_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_matcher_RegexMatcher_GoogleRE2 *ret = envoy_type_matcher_RegexMatcher_GoogleRE2_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_type_matcher_RegexMatcher_GoogleRE2_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_type_matcher_RegexMatcher_GoogleRE2_serialize(const envoy_type_matcher_RegexMatcher_GoogleRE2 *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_matcher_RegexMatcher_GoogleRE2_msginit, arena, len);
}

UPB_INLINE const struct google_protobuf_UInt32Value* envoy_type_matcher_RegexMatcher_GoogleRE2_max_program_size(const envoy_type_matcher_RegexMatcher_GoogleRE2 *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(0, 0)); }

UPB_INLINE void envoy_type_matcher_RegexMatcher_GoogleRE2_set_max_program_size(envoy_type_matcher_RegexMatcher_GoogleRE2 *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_type_matcher_RegexMatcher_GoogleRE2_mutable_max_program_size(envoy_type_matcher_RegexMatcher_GoogleRE2 *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_type_matcher_RegexMatcher_GoogleRE2_max_program_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_RegexMatcher_GoogleRE2_set_max_program_size(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_REGEX_PROTO_UPB_H_ */
