/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: github.com/TheThingsNetwork/ttn/api/protocol/lorawan/device.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "github.com/TheThingsNetwork/ttn/api/protocol/lorawan/device.pb-c.h"
void   lorawan__device_identifier__init
                     (Lorawan__DeviceIdentifier         *message)
{
  static Lorawan__DeviceIdentifier init_value = LORAWAN__DEVICE_IDENTIFIER__INIT;
  *message = init_value;
}
size_t lorawan__device_identifier__get_packed_size
                     (const Lorawan__DeviceIdentifier *message)
{
  assert(message->base.descriptor == &lorawan__device_identifier__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t lorawan__device_identifier__pack
                     (const Lorawan__DeviceIdentifier *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &lorawan__device_identifier__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t lorawan__device_identifier__pack_to_buffer
                     (const Lorawan__DeviceIdentifier *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &lorawan__device_identifier__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Lorawan__DeviceIdentifier *
       lorawan__device_identifier__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Lorawan__DeviceIdentifier *)
     protobuf_c_message_unpack (&lorawan__device_identifier__descriptor,
                                allocator, len, data);
}
void   lorawan__device_identifier__free_unpacked
                     (Lorawan__DeviceIdentifier *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &lorawan__device_identifier__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   lorawan__device__init
                     (Lorawan__Device         *message)
{
  static Lorawan__Device init_value = LORAWAN__DEVICE__INIT;
  *message = init_value;
}
size_t lorawan__device__get_packed_size
                     (const Lorawan__Device *message)
{
  assert(message->base.descriptor == &lorawan__device__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t lorawan__device__pack
                     (const Lorawan__Device *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &lorawan__device__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t lorawan__device__pack_to_buffer
                     (const Lorawan__Device *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &lorawan__device__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Lorawan__Device *
       lorawan__device__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Lorawan__Device *)
     protobuf_c_message_unpack (&lorawan__device__descriptor,
                                allocator, len, data);
}
void   lorawan__device__free_unpacked
                     (Lorawan__Device *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &lorawan__device__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor lorawan__device_identifier__field_descriptors[2] =
{
  {
    "app_eui",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__DeviceIdentifier, has_app_eui),
    offsetof(Lorawan__DeviceIdentifier, app_eui),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dev_eui",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__DeviceIdentifier, has_dev_eui),
    offsetof(Lorawan__DeviceIdentifier, dev_eui),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned lorawan__device_identifier__field_indices_by_name[] = {
  0,   /* field[0] = app_eui */
  1,   /* field[1] = dev_eui */
};
static const ProtobufCIntRange lorawan__device_identifier__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor lorawan__device_identifier__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "lorawan.DeviceIdentifier",
  "DeviceIdentifier",
  "Lorawan__DeviceIdentifier",
  "lorawan",
  sizeof(Lorawan__DeviceIdentifier),
  2,
  lorawan__device_identifier__field_descriptors,
  lorawan__device_identifier__field_indices_by_name,
  1,  lorawan__device_identifier__number_ranges,
  (ProtobufCMessageInit) lorawan__device_identifier__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor lorawan__device__field_descriptors[13] =
{
  {
    "app_eui",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__Device, has_app_eui),
    offsetof(Lorawan__Device, app_eui),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dev_eui",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__Device, has_dev_eui),
    offsetof(Lorawan__Device, dev_eui),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "app_id",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Lorawan__Device, app_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dev_id",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Lorawan__Device, dev_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dev_addr",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__Device, has_dev_addr),
    offsetof(Lorawan__Device, dev_addr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nwk_s_key",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__Device, has_nwk_s_key),
    offsetof(Lorawan__Device, nwk_s_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "app_s_key",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__Device, has_app_s_key),
    offsetof(Lorawan__Device, app_s_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "app_key",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Lorawan__Device, has_app_key),
    offsetof(Lorawan__Device, app_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "f_cnt_up",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Lorawan__Device, has_f_cnt_up),
    offsetof(Lorawan__Device, f_cnt_up),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "f_cnt_down",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Lorawan__Device, has_f_cnt_down),
    offsetof(Lorawan__Device, f_cnt_down),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "disable_f_cnt_check",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Lorawan__Device, has_disable_f_cnt_check),
    offsetof(Lorawan__Device, disable_f_cnt_check),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uses32_bit_f_cnt",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Lorawan__Device, has_uses32_bit_f_cnt),
    offsetof(Lorawan__Device, uses32_bit_f_cnt),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "last_seen",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Lorawan__Device, has_last_seen),
    offsetof(Lorawan__Device, last_seen),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned lorawan__device__field_indices_by_name[] = {
  0,   /* field[0] = app_eui */
  2,   /* field[2] = app_id */
  7,   /* field[7] = app_key */
  6,   /* field[6] = app_s_key */
  4,   /* field[4] = dev_addr */
  1,   /* field[1] = dev_eui */
  3,   /* field[3] = dev_id */
  10,   /* field[10] = disable_f_cnt_check */
  9,   /* field[9] = f_cnt_down */
  8,   /* field[8] = f_cnt_up */
  12,   /* field[12] = last_seen */
  5,   /* field[5] = nwk_s_key */
  11,   /* field[11] = uses32_bit_f_cnt */
};
static const ProtobufCIntRange lorawan__device__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 21, 12 },
  { 0, 13 }
};
const ProtobufCMessageDescriptor lorawan__device__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "lorawan.Device",
  "Device",
  "Lorawan__Device",
  "lorawan",
  sizeof(Lorawan__Device),
  13,
  lorawan__device__field_descriptors,
  lorawan__device__field_indices_by_name,
  2,  lorawan__device__number_ranges,
  (ProtobufCMessageInit) lorawan__device__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCMethodDescriptor lorawan__device_manager__method_descriptors[3] =
{
  { "GetDevice", &lorawan__device_identifier__descriptor, &lorawan__device__descriptor },
  { "SetDevice", &lorawan__device__descriptor, &api__ack__descriptor },
  { "DeleteDevice", &lorawan__device_identifier__descriptor, &api__ack__descriptor },
};
const unsigned lorawan__device_manager__method_indices_by_name[] = {
  2,        /* DeleteDevice */
  0,        /* GetDevice */
  1         /* SetDevice */
};
const ProtobufCServiceDescriptor lorawan__device_manager__descriptor =
{
  PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC,
  "lorawan.DeviceManager",
  "DeviceManager",
  "Lorawan__DeviceManager",
  "lorawan",
  3,
  lorawan__device_manager__method_descriptors,
  lorawan__device_manager__method_indices_by_name
};
void lorawan__device_manager__get_device(ProtobufCService *service,
                                         const Lorawan__DeviceIdentifier *input,
                                         Lorawan__Device_Closure closure,
                                         void *closure_data)
{
  assert(service->descriptor == &lorawan__device_manager__descriptor);
  service->invoke(service, 0, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void lorawan__device_manager__set_device(ProtobufCService *service,
                                         const Lorawan__Device *input,
                                         Api__Ack_Closure closure,
                                         void *closure_data)
{
  assert(service->descriptor == &lorawan__device_manager__descriptor);
  service->invoke(service, 1, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void lorawan__device_manager__delete_device(ProtobufCService *service,
                                            const Lorawan__DeviceIdentifier *input,
                                            Api__Ack_Closure closure,
                                            void *closure_data)
{
  assert(service->descriptor == &lorawan__device_manager__descriptor);
  service->invoke(service, 2, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void lorawan__device_manager__init (Lorawan__DeviceManager_Service *service,
                                    Lorawan__DeviceManager_ServiceDestroy destroy)
{
  protobuf_c_service_generated_init (&service->base,
                                     &lorawan__device_manager__descriptor,
                                     (ProtobufCServiceDestroy) destroy);
}
