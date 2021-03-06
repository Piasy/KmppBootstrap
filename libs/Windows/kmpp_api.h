#ifndef KONAN_KMPP_H
#define KONAN_KMPP_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            kmpp_KBoolean;
#else
typedef _Bool           kmpp_KBoolean;
#endif
typedef unsigned short     kmpp_KChar;
typedef signed char        kmpp_KByte;
typedef short              kmpp_KShort;
typedef int                kmpp_KInt;
typedef long long          kmpp_KLong;
typedef unsigned char      kmpp_KUByte;
typedef unsigned short     kmpp_KUShort;
typedef unsigned int       kmpp_KUInt;
typedef unsigned long long kmpp_KULong;
typedef float              kmpp_KFloat;
typedef double             kmpp_KDouble;
typedef void*              kmpp_KNativePtr;
struct kmpp_KType;
typedef struct kmpp_KType kmpp_KType;

typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Byte;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Short;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Int;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Long;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Float;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Double;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Char;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Boolean;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Unit;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_KmppBootstrap;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_data_Person;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_KmppBootstrapShared;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_api_Platform;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_api_TaskQueue;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_api_Logger;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Function0;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlinx_serialization_SerializationConstructorMarker;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Any;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_data_Person_Companion;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlinx_serialization_KSerializer;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_com_piasy_kmpp_data_Person_$serializer;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlinx_serialization_SerialDescriptor;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlin_Array;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlinx_serialization_Decoder;
typedef struct {
  kmpp_KNativePtr pinned;
} kmpp_kref_kotlinx_serialization_Encoder;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(kmpp_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  kmpp_KBoolean (*IsInstance)(kmpp_KNativePtr ref, const kmpp_KType* type);
  kmpp_kref_kotlin_Byte (*createNullableByte)(kmpp_KByte);
  kmpp_kref_kotlin_Short (*createNullableShort)(kmpp_KShort);
  kmpp_kref_kotlin_Int (*createNullableInt)(kmpp_KInt);
  kmpp_kref_kotlin_Long (*createNullableLong)(kmpp_KLong);
  kmpp_kref_kotlin_Float (*createNullableFloat)(kmpp_KFloat);
  kmpp_kref_kotlin_Double (*createNullableDouble)(kmpp_KDouble);
  kmpp_kref_kotlin_Char (*createNullableChar)(kmpp_KChar);
  kmpp_kref_kotlin_Boolean (*createNullableBoolean)(kmpp_KBoolean);
  kmpp_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            const char* (*sayHello)(kmpp_kref_com_piasy_kmpp_KmppBootstrap kmpp, kmpp_kref_com_piasy_kmpp_data_Person person);
            struct {
              kmpp_KType* (*_type)(void);
              kmpp_kref_com_piasy_kmpp_KmppBootstrapShared (*KmppBootstrapShared)(kmpp_kref_com_piasy_kmpp_api_Platform platform, kmpp_kref_com_piasy_kmpp_api_TaskQueue taskQueue, kmpp_kref_com_piasy_kmpp_api_Logger logger);
              const char* (*sayHello)(kmpp_kref_com_piasy_kmpp_KmppBootstrapShared thiz, kmpp_kref_com_piasy_kmpp_data_Person person);
            } KmppBootstrapShared;
            struct {
              kmpp_KType* (*_type)(void);
              kmpp_kref_com_piasy_kmpp_KmppBootstrap (*KmppBootstrap)();
            } KmppBootstrap;
            struct {
              struct {
                kmpp_KType* (*_type)(void);
                kmpp_kref_com_piasy_kmpp_api_Logger (*Logger)();
                void (*info)(kmpp_kref_com_piasy_kmpp_api_Logger thiz, const char* tag, const char* content);
              } Logger;
              struct {
                kmpp_KType* (*_type)(void);
                kmpp_kref_com_piasy_kmpp_api_Platform (*Platform)();
                const char* (*platform)(kmpp_kref_com_piasy_kmpp_api_Platform thiz);
              } Platform;
              struct {
                kmpp_KType* (*_type)(void);
                kmpp_kref_com_piasy_kmpp_api_TaskQueue (*TaskQueue)();
                void (*post)(kmpp_kref_com_piasy_kmpp_api_TaskQueue thiz, kmpp_kref_kotlin_Function0 task);
              } TaskQueue;
            } api;
            struct {
              struct {
                kmpp_KType* (*_type)(void);
                kmpp_kref_com_piasy_kmpp_data_Person (*Person)(kmpp_KInt seen1, const char* name, kmpp_KInt age, kmpp_kref_kotlinx_serialization_SerializationConstructorMarker serializationConstructorMarker);
                kmpp_kref_com_piasy_kmpp_data_Person (*Person_)(const char* name, kmpp_KInt age);
                const char* (*get_name)(kmpp_kref_com_piasy_kmpp_data_Person thiz);
                kmpp_KInt (*get_age)(kmpp_kref_com_piasy_kmpp_data_Person thiz);
                kmpp_KBoolean (*equals)(kmpp_kref_com_piasy_kmpp_data_Person thiz, kmpp_kref_kotlin_Any other);
                kmpp_KInt (*hashCode)(kmpp_kref_com_piasy_kmpp_data_Person thiz);
                const char* (*toString)(kmpp_kref_com_piasy_kmpp_data_Person thiz);
                const char* (*component1)(kmpp_kref_com_piasy_kmpp_data_Person thiz);
                kmpp_KInt (*component2)(kmpp_kref_com_piasy_kmpp_data_Person thiz);
                kmpp_kref_com_piasy_kmpp_data_Person (*copy)(kmpp_kref_com_piasy_kmpp_data_Person thiz, const char* name, kmpp_KInt age);
                struct {
                  kmpp_KType* (*_type)(void);
                  kmpp_kref_com_piasy_kmpp_data_Person_Companion (*_instance)();
                  kmpp_kref_kotlinx_serialization_KSerializer (*serializer)(kmpp_kref_com_piasy_kmpp_data_Person_Companion thiz);
                } Companion;
                struct {
                  kmpp_KType* (*_type)(void);
                  kmpp_kref_com_piasy_kmpp_data_Person_$serializer (*_instance)();
                  kmpp_kref_kotlinx_serialization_SerialDescriptor (*get_descriptor)(kmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz);
                  kmpp_kref_kotlin_Array (*childSerializers)(kmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz);
                  kmpp_kref_com_piasy_kmpp_data_Person (*deserialize)(kmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz, kmpp_kref_kotlinx_serialization_Decoder decoder);
                  void (*serialize)(kmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz, kmpp_kref_kotlinx_serialization_Encoder encoder, kmpp_kref_com_piasy_kmpp_data_Person obj);
                } $serializer;
              } Person;
            } data;
          } kmpp;
        } piasy;
      } com;
    } root;
  } kotlin;
} kmpp_ExportedSymbols;
extern kmpp_ExportedSymbols* kmpp_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_KMPP_H */
