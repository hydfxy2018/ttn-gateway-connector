/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/ttn/api/protocol/protocol.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/TheThingsNetwork/ttn/api/protocol/protocol.pb-c.h"
void   protocol__rx_metadata__init
                     (Protocol__RxMetadata         *message)
{
  static Protocol__RxMetadata init_value = PROTOCOL__RX_METADATA__INIT;
  *message = init_value;
}
size_t protocol__rx_metadata__get_packed_size
                     (const Protocol__RxMetadata *message)
{
  assert(message->base.descriptor == &protocol__rx_metadata__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__rx_metadata__pack
                     (const Protocol__RxMetadata *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__rx_metadata__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__rx_metadata__pack_to_buffer
                     (const Protocol__RxMetadata *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__rx_metadata__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__RxMetadata *
       protocol__rx_metadata__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__RxMetadata *)
     protobuf_c_message_unpack (&protocol__rx_metadata__descriptor,
                                allocator, len, data);
}
void   protocol__rx_metadata__free_unpacked
                     (Protocol__RxMetadata *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__rx_metadata__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__tx_configuration__init
                     (Protocol__TxConfiguration         *message)
{
  static Protocol__TxConfiguration init_value = PROTOCOL__TX_CONFIGURATION__INIT;
  *message = init_value;
}
size_t protocol__tx_configuration__get_packed_size
                     (const Protocol__TxConfiguration *message)
{
  assert(message->base.descriptor == &protocol__tx_configuration__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__tx_configuration__pack
                     (const Protocol__TxConfiguration *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__tx_configuration__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__tx_configuration__pack_to_buffer
                     (const Protocol__TxConfiguration *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__tx_configuration__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__TxConfiguration *
       protocol__tx_configuration__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__TxConfiguration *)
     protobuf_c_message_unpack (&protocol__tx_configuration__descriptor,
                                allocator, len, data);
}
void   protocol__tx_configuration__free_unpacked
                     (Protocol__TxConfiguration *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__tx_configuration__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   protocol__activation_metadata__init
                     (Protocol__ActivationMetadata         *message)
{
  static Protocol__ActivationMetadata init_value = PROTOCOL__ACTIVATION_METADATA__INIT;
  *message = init_value;
}
size_t protocol__activation_metadata__get_packed_size
                     (const Protocol__ActivationMetadata *message)
{
  assert(message->base.descriptor == &protocol__activation_metadata__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t protocol__activation_metadata__pack
                     (const Protocol__ActivationMetadata *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &protocol__activation_metadata__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t protocol__activation_metadata__pack_to_buffer
                     (const Protocol__ActivationMetadata *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &protocol__activation_metadata__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Protocol__ActivationMetadata *
       protocol__activation_metadata__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Protocol__ActivationMetadata *)
     protobuf_c_message_unpack (&protocol__activation_metadata__descriptor,
                                allocator, len, data);
}
void   protocol__activation_metadata__free_unpacked
                     (Protocol__ActivationMetadata *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &protocol__activation_metadata__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor protocol__rx_metadata__field_descriptors[1] =
{
  {
    "lorawan",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__RxMetadata, protocol_case),
    offsetof(Protocol__RxMetadata, lorawan),
    &lorawan__metadata__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__rx_metadata__field_indices_by_name[] = {
  0,   /* field[0] = lorawan */
};
static const ProtobufCIntRange protocol__rx_metadata__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor protocol__rx_metadata__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.RxMetadata",
  "RxMetadata",
  "Protocol__RxMetadata",
  "protocol",
  sizeof(Protocol__RxMetadata),
  1,
  protocol__rx_metadata__field_descriptors,
  protocol__rx_metadata__field_indices_by_name,
  1,  protocol__rx_metadata__number_ranges,
  (ProtobufCMessageInit) protocol__rx_metadata__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__tx_configuration__field_descriptors[1] =
{
  {
    "lorawan",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__TxConfiguration, protocol_case),
    offsetof(Protocol__TxConfiguration, lorawan),
    &lorawan__tx_configuration__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__tx_configuration__field_indices_by_name[] = {
  0,   /* field[0] = lorawan */
};
static const ProtobufCIntRange protocol__tx_configuration__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor protocol__tx_configuration__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.TxConfiguration",
  "TxConfiguration",
  "Protocol__TxConfiguration",
  "protocol",
  sizeof(Protocol__TxConfiguration),
  1,
  protocol__tx_configuration__field_descriptors,
  protocol__tx_configuration__field_indices_by_name,
  1,  protocol__tx_configuration__number_ranges,
  (ProtobufCMessageInit) protocol__tx_configuration__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor protocol__activation_metadata__field_descriptors[1] =
{
  {
    "lorawan",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Protocol__ActivationMetadata, protocol_case),
    offsetof(Protocol__ActivationMetadata, lorawan),
    &lorawan__activation_metadata__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned protocol__activation_metadata__field_indices_by_name[] = {
  0,   /* field[0] = lorawan */
};
static const ProtobufCIntRange protocol__activation_metadata__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor protocol__activation_metadata__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "protocol.ActivationMetadata",
  "ActivationMetadata",
  "Protocol__ActivationMetadata",
  "protocol",
  sizeof(Protocol__ActivationMetadata),
  1,
  protocol__activation_metadata__field_descriptors,
  protocol__activation_metadata__field_indices_by_name,
  1,  protocol__activation_metadata__number_ranges,
  (ProtobufCMessageInit) protocol__activation_metadata__init,
  NULL,NULL,NULL    /* reserved[123] */
};
