// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V4
    #ifndef UNIFFI_SHARED_HEADER_V4
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V4
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V4
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef int32_t (*ForeignCallback)(uint64_t, int32_t, const uint8_t *_Nonnull, int32_t, RustBuffer *_Nonnull);

// Task defined in Rust that Swift executes
typedef void (*UniFfiRustTaskCallback)(const void * _Nullable);

// Callback to execute Rust tasks using a Swift Task
//
// Args:
//   executor: ForeignExecutor lowered into a size_t value
//   delay: Delay in MS
//   task: UniFfiRustTaskCallback to call
//   task_data: data to pass the task callback
typedef void (*UniFfiForeignExecutorCallback)(size_t, uint32_t, UniFfiRustTaskCallback _Nullable, const void * _Nullable);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

// Callbacks for UniFFI Futures
typedef void (*UniFfiFutureCallbackUInt8)(const void * _Nonnull, uint8_t, RustCallStatus);
typedef void (*UniFfiFutureCallbackUInt64)(const void * _Nonnull, uint64_t, RustCallStatus);
typedef void (*UniFfiFutureCallbackUnsafeMutableRawPointer)(const void * _Nonnull, void*_Nonnull, RustCallStatus);
typedef void (*UniFfiFutureCallbackUnsafeMutableRawPointer)(const void * _Nonnull, void*_Nonnull, RustCallStatus);
typedef void (*UniFfiFutureCallbackRustBuffer)(const void * _Nonnull, RustBuffer, RustCallStatus);

// Scaffolding functions
void uniffi_automerge_fn_free_syncstate(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_automerge_fn_constructor_syncstate_new(RustCallStatus *_Nonnull out_status
    
);
void*_Nonnull uniffi_automerge_fn_constructor_syncstate_decode(RustBuffer bytes, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_syncstate_encode(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_syncstate_reset(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_syncstate_their_heads(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_free_doc(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_automerge_fn_constructor_doc_new(RustCallStatus *_Nonnull out_status
    
);
void*_Nonnull uniffi_automerge_fn_constructor_doc_new_with_actor(RustBuffer actor, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_automerge_fn_constructor_doc_load(RustBuffer bytes, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_actor_id(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_set_actor(void*_Nonnull ptr, RustBuffer actor, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_automerge_fn_method_doc_fork(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void*_Nonnull uniffi_automerge_fn_method_doc_fork_at(void*_Nonnull ptr, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_put_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, RustBuffer value, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_put_object_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, RustBuffer obj_type, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_put_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustBuffer value, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_put_object_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustBuffer obj_type, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_insert_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustBuffer value, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_insert_object_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustBuffer obj_type, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_splice_text(void*_Nonnull ptr, RustBuffer obj, uint64_t start, int64_t delete, RustBuffer chars, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_splice(void*_Nonnull ptr, RustBuffer obj, uint64_t start, int64_t delete, RustBuffer values, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_mark(void*_Nonnull ptr, RustBuffer obj, uint64_t start, uint64_t end, RustBuffer expand, RustBuffer name, RustBuffer value, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_marks(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_marks_at(void*_Nonnull ptr, RustBuffer obj, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_delete_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_delete_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_increment_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, int64_t by, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_increment_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, int64_t by, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_at_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_at_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_all_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_all_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_all_at_in_map(void*_Nonnull ptr, RustBuffer obj, RustBuffer key, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_get_all_at_in_list(void*_Nonnull ptr, RustBuffer obj, uint64_t index, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_text(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_text_at(void*_Nonnull ptr, RustBuffer obj, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_map_keys(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_map_keys_at(void*_Nonnull ptr, RustBuffer obj, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_map_entries(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_map_entries_at(void*_Nonnull ptr, RustBuffer obj, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_values(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_values_at(void*_Nonnull ptr, RustBuffer obj, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
uint64_t uniffi_automerge_fn_method_doc_length(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
uint64_t uniffi_automerge_fn_method_doc_length_at(void*_Nonnull ptr, RustBuffer obj, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_object_type(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_path(void*_Nonnull ptr, RustBuffer obj, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_heads(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_save(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_merge(void*_Nonnull ptr, void*_Nonnull other, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_merge_with_patches(void*_Nonnull ptr, void*_Nonnull other, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_generate_sync_message(void*_Nonnull ptr, void*_Nonnull state, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_receive_sync_message(void*_Nonnull ptr, void*_Nonnull state, RustBuffer msg, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_receive_sync_message_with_patches(void*_Nonnull ptr, void*_Nonnull state, RustBuffer msg, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_encode_new_changes(void*_Nonnull ptr, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_encode_changes_since(void*_Nonnull ptr, RustBuffer heads, RustCallStatus *_Nonnull out_status
);
void uniffi_automerge_fn_method_doc_apply_encoded_changes(void*_Nonnull ptr, RustBuffer changes, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_method_doc_apply_encoded_changes_with_patches(void*_Nonnull ptr, RustBuffer changes, RustCallStatus *_Nonnull out_status
);
RustBuffer uniffi_automerge_fn_func_root(RustCallStatus *_Nonnull out_status
    
);
RustBuffer ffi_automerge_rustbuffer_alloc(int32_t size, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_automerge_rustbuffer_from_bytes(ForeignBytes bytes, RustCallStatus *_Nonnull out_status
);
void ffi_automerge_rustbuffer_free(RustBuffer buf, RustCallStatus *_Nonnull out_status
);
RustBuffer ffi_automerge_rustbuffer_reserve(RustBuffer buf, int32_t additional, RustCallStatus *_Nonnull out_status
);
uint16_t uniffi_automerge_checksum_func_root(void
    
);
uint16_t uniffi_automerge_checksum_method_syncstate_encode(void
    
);
uint16_t uniffi_automerge_checksum_method_syncstate_reset(void
    
);
uint16_t uniffi_automerge_checksum_method_syncstate_their_heads(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_actor_id(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_set_actor(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_fork(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_fork_at(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_put_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_put_object_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_put_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_put_object_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_insert_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_insert_object_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_splice_text(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_splice(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_mark(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_marks(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_marks_at(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_delete_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_delete_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_increment_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_increment_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_at_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_at_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_all_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_all_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_all_at_in_map(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_get_all_at_in_list(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_text(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_text_at(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_map_keys(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_map_keys_at(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_map_entries(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_map_entries_at(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_values(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_values_at(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_length(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_length_at(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_object_type(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_path(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_heads(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_save(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_merge(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_merge_with_patches(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_generate_sync_message(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_receive_sync_message(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_receive_sync_message_with_patches(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_encode_new_changes(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_encode_changes_since(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_apply_encoded_changes(void
    
);
uint16_t uniffi_automerge_checksum_method_doc_apply_encoded_changes_with_patches(void
    
);
uint16_t uniffi_automerge_checksum_constructor_syncstate_new(void
    
);
uint16_t uniffi_automerge_checksum_constructor_syncstate_decode(void
    
);
uint16_t uniffi_automerge_checksum_constructor_doc_new(void
    
);
uint16_t uniffi_automerge_checksum_constructor_doc_new_with_actor(void
    
);
uint16_t uniffi_automerge_checksum_constructor_doc_load(void
    
);
uint32_t ffi_automerge_uniffi_contract_version(void
    
);

