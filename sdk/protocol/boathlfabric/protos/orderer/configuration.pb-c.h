/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: orderer/configuration.proto */

#ifndef PROTOBUF_C_orderer_2fconfiguration_2eproto__INCLUDED
#define PROTOBUF_C_orderer_2fconfiguration_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Orderer__ConsensusType Orderer__ConsensusType;
typedef struct _Orderer__BatchSize Orderer__BatchSize;
typedef struct _Orderer__BatchTimeout Orderer__BatchTimeout;
typedef struct _Orderer__KafkaBrokers Orderer__KafkaBrokers;
typedef struct _Orderer__ChannelRestrictions Orderer__ChannelRestrictions;


/* --- enums --- */


/* --- messages --- */

struct  _Orderer__ConsensusType
{
  ProtobufCMessage base;
  char *type;
  /*
   * Opaque metadata, dependent on the consensus type.
   */
  protobuf_c_boolean has_metadata;
  ProtobufCBinaryData metadata;
};
#define ORDERER__CONSENSUS_TYPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&orderer__consensus_type__descriptor) \
    , NULL, 0,{0,NULL} }


struct  _Orderer__BatchSize
{
  ProtobufCMessage base;
  /*
   * Simply specified as number of messages for now, in the future
   * we may want to allow this to be specified by size in bytes
   */
  protobuf_c_boolean has_max_message_count;
  uint32_t max_message_count;
  /*
   * The byte count of the serialized messages in a batch cannot
   * exceed this value.
   */
  protobuf_c_boolean has_absolute_max_bytes;
  uint32_t absolute_max_bytes;
  /*
   * The byte count of the serialized messages in a batch should not
   * exceed this value.
   */
  protobuf_c_boolean has_preferred_max_bytes;
  uint32_t preferred_max_bytes;
};
#define ORDERER__BATCH_SIZE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&orderer__batch_size__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _Orderer__BatchTimeout
{
  ProtobufCMessage base;
  /*
   * Any duration string parseable by ParseDuration():
   * https://golang.org/pkg/time/#ParseDuration
   */
  char *timeout;
};
#define ORDERER__BATCH_TIMEOUT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&orderer__batch_timeout__descriptor) \
    , NULL }


/*
 * Carries a list of bootstrap brokers, i.e. this is not the exclusive set of
 * brokers an ordering service
 */
struct  _Orderer__KafkaBrokers
{
  ProtobufCMessage base;
  /*
   * Each broker here should be identified using the (IP|host):port notation,
   * e.g. 127.0.0.1:7050, or localhost:7050 are valid entries
   */
  size_t n_brokers;
  char **brokers;
};
#define ORDERER__KAFKA_BROKERS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&orderer__kafka_brokers__descriptor) \
    , 0,NULL }


/*
 * ChannelRestrictions is the mssage which conveys restrictions on channel creation for an orderer
 */
struct  _Orderer__ChannelRestrictions
{
  ProtobufCMessage base;
  /*
   * The max count of channels to allow to be created, a value of 0 indicates no limit
   */
  protobuf_c_boolean has_max_count;
  uint64_t max_count;
};
#define ORDERER__CHANNEL_RESTRICTIONS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&orderer__channel_restrictions__descriptor) \
    , 0,0 }


/* Orderer__ConsensusType methods */
void   orderer__consensus_type__init
                     (Orderer__ConsensusType         *message);
size_t orderer__consensus_type__get_packed_size
                     (const Orderer__ConsensusType   *message);
size_t orderer__consensus_type__pack
                     (const Orderer__ConsensusType   *message,
                      uint8_t             *out);
size_t orderer__consensus_type__pack_to_buffer
                     (const Orderer__ConsensusType   *message,
                      ProtobufCBuffer     *buffer);
Orderer__ConsensusType *
       orderer__consensus_type__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   orderer__consensus_type__free_unpacked
                     (Orderer__ConsensusType *message,
                      ProtobufCAllocator *allocator);
/* Orderer__BatchSize methods */
void   orderer__batch_size__init
                     (Orderer__BatchSize         *message);
size_t orderer__batch_size__get_packed_size
                     (const Orderer__BatchSize   *message);
size_t orderer__batch_size__pack
                     (const Orderer__BatchSize   *message,
                      uint8_t             *out);
size_t orderer__batch_size__pack_to_buffer
                     (const Orderer__BatchSize   *message,
                      ProtobufCBuffer     *buffer);
Orderer__BatchSize *
       orderer__batch_size__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   orderer__batch_size__free_unpacked
                     (Orderer__BatchSize *message,
                      ProtobufCAllocator *allocator);
/* Orderer__BatchTimeout methods */
void   orderer__batch_timeout__init
                     (Orderer__BatchTimeout         *message);
size_t orderer__batch_timeout__get_packed_size
                     (const Orderer__BatchTimeout   *message);
size_t orderer__batch_timeout__pack
                     (const Orderer__BatchTimeout   *message,
                      uint8_t             *out);
size_t orderer__batch_timeout__pack_to_buffer
                     (const Orderer__BatchTimeout   *message,
                      ProtobufCBuffer     *buffer);
Orderer__BatchTimeout *
       orderer__batch_timeout__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   orderer__batch_timeout__free_unpacked
                     (Orderer__BatchTimeout *message,
                      ProtobufCAllocator *allocator);
/* Orderer__KafkaBrokers methods */
void   orderer__kafka_brokers__init
                     (Orderer__KafkaBrokers         *message);
size_t orderer__kafka_brokers__get_packed_size
                     (const Orderer__KafkaBrokers   *message);
size_t orderer__kafka_brokers__pack
                     (const Orderer__KafkaBrokers   *message,
                      uint8_t             *out);
size_t orderer__kafka_brokers__pack_to_buffer
                     (const Orderer__KafkaBrokers   *message,
                      ProtobufCBuffer     *buffer);
Orderer__KafkaBrokers *
       orderer__kafka_brokers__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   orderer__kafka_brokers__free_unpacked
                     (Orderer__KafkaBrokers *message,
                      ProtobufCAllocator *allocator);
/* Orderer__ChannelRestrictions methods */
void   orderer__channel_restrictions__init
                     (Orderer__ChannelRestrictions         *message);
size_t orderer__channel_restrictions__get_packed_size
                     (const Orderer__ChannelRestrictions   *message);
size_t orderer__channel_restrictions__pack
                     (const Orderer__ChannelRestrictions   *message,
                      uint8_t             *out);
size_t orderer__channel_restrictions__pack_to_buffer
                     (const Orderer__ChannelRestrictions   *message,
                      ProtobufCBuffer     *buffer);
Orderer__ChannelRestrictions *
       orderer__channel_restrictions__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   orderer__channel_restrictions__free_unpacked
                     (Orderer__ChannelRestrictions *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Orderer__ConsensusType_Closure)
                 (const Orderer__ConsensusType *message,
                  void *closure_data);
typedef void (*Orderer__BatchSize_Closure)
                 (const Orderer__BatchSize *message,
                  void *closure_data);
typedef void (*Orderer__BatchTimeout_Closure)
                 (const Orderer__BatchTimeout *message,
                  void *closure_data);
typedef void (*Orderer__KafkaBrokers_Closure)
                 (const Orderer__KafkaBrokers *message,
                  void *closure_data);
typedef void (*Orderer__ChannelRestrictions_Closure)
                 (const Orderer__ChannelRestrictions *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor orderer__consensus_type__descriptor;
extern const ProtobufCMessageDescriptor orderer__batch_size__descriptor;
extern const ProtobufCMessageDescriptor orderer__batch_timeout__descriptor;
extern const ProtobufCMessageDescriptor orderer__kafka_brokers__descriptor;
extern const ProtobufCMessageDescriptor orderer__channel_restrictions__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_orderer_2fconfiguration_2eproto__INCLUDED */