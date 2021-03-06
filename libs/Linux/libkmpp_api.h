#ifndef KONAN_LIBKMPP_H
#define KONAN_LIBKMPP_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libkmpp_KBoolean;
#else
typedef _Bool           libkmpp_KBoolean;
#endif
typedef unsigned short     libkmpp_KChar;
typedef signed char        libkmpp_KByte;
typedef short              libkmpp_KShort;
typedef int                libkmpp_KInt;
typedef long long          libkmpp_KLong;
typedef unsigned char      libkmpp_KUByte;
typedef unsigned short     libkmpp_KUShort;
typedef unsigned int       libkmpp_KUInt;
typedef unsigned long long libkmpp_KULong;
typedef float              libkmpp_KFloat;
typedef double             libkmpp_KDouble;
typedef void*              libkmpp_KNativePtr;
struct libkmpp_KType;
typedef struct libkmpp_KType libkmpp_KType;

typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Byte;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Short;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Int;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Long;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Float;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Double;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Char;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Boolean;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Unit;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_KmppBootstrap;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_data_Person;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_KmppBootstrapShared;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_api_Platform;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_api_TaskQueue;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_api_Logger;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Function0;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlinx_serialization_SerializationConstructorMarker;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Any;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_data_Person_Companion;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlinx_serialization_KSerializer;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_com_piasy_kmpp_data_Person_$serializer;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlinx_serialization_SerialDescriptor;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlin_Array;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlinx_serialization_Decoder;
typedef struct {
  libkmpp_KNativePtr pinned;
} libkmpp_kref_kotlinx_serialization_Encoder;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libkmpp_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libkmpp_KBoolean (*IsInstance)(libkmpp_KNativePtr ref, const libkmpp_KType* type);
  libkmpp_kref_kotlin_Byte (*createNullableByte)(libkmpp_KByte);
  libkmpp_kref_kotlin_Short (*createNullableShort)(libkmpp_KShort);
  libkmpp_kref_kotlin_Int (*createNullableInt)(libkmpp_KInt);
  libkmpp_kref_kotlin_Long (*createNullableLong)(libkmpp_KLong);
  libkmpp_kref_kotlin_Float (*createNullableFloat)(libkmpp_KFloat);
  libkmpp_kref_kotlin_Double (*createNullableDouble)(libkmpp_KDouble);
  libkmpp_kref_kotlin_Char (*createNullableChar)(libkmpp_KChar);
  libkmpp_kref_kotlin_Boolean (*createNullableBoolean)(libkmpp_KBoolean);
  libkmpp_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            const char* (*sayHello)(libkmpp_kref_com_piasy_kmpp_KmppBootstrap kmpp, libkmpp_kref_com_piasy_kmpp_data_Person person);
            struct {
              libkmpp_KType* (*_type)(void);
              libkmpp_kref_com_piasy_kmpp_KmppBootstrapShared (*KmppBootstrapShared)(libkmpp_kref_com_piasy_kmpp_api_Platform platform, libkmpp_kref_com_piasy_kmpp_api_TaskQueue taskQueue, libkmpp_kref_com_piasy_kmpp_api_Logger logger);
              const char* (*sayHello)(libkmpp_kref_com_piasy_kmpp_KmppBootstrapShared thiz, libkmpp_kref_com_piasy_kmpp_data_Person person);
            } KmppBootstrapShared;
            struct {
              libkmpp_KType* (*_type)(void);
              libkmpp_kref_com_piasy_kmpp_KmppBootstrap (*KmppBootstrap)();
            } KmppBootstrap;
            struct {
              struct {
                libkmpp_KType* (*_type)(void);
                libkmpp_kref_com_piasy_kmpp_api_Logger (*Logger)();
                void (*info)(libkmpp_kref_com_piasy_kmpp_api_Logger thiz, const char* tag, const char* content);
              } Logger;
              struct {
                libkmpp_KType* (*_type)(void);
                libkmpp_kref_com_piasy_kmpp_api_Platform (*Platform)();
                const char* (*platform)(libkmpp_kref_com_piasy_kmpp_api_Platform thiz);
              } Platform;
              struct {
                libkmpp_KType* (*_type)(void);
                libkmpp_kref_com_piasy_kmpp_api_TaskQueue (*TaskQueue)();
                void (*post)(libkmpp_kref_com_piasy_kmpp_api_TaskQueue thiz, libkmpp_kref_kotlin_Function0 task);
              } TaskQueue;
            } api;
            struct {
              struct {
                libkmpp_KType* (*_type)(void);
                libkmpp_kref_com_piasy_kmpp_data_Person (*Person)(libkmpp_KInt seen1, const char* name, libkmpp_KInt age, libkmpp_kref_kotlinx_serialization_SerializationConstructorMarker serializationConstructorMarker);
                libkmpp_kref_com_piasy_kmpp_data_Person (*Person_)(const char* name, libkmpp_KInt age);
                const char* (*get_name)(libkmpp_kref_com_piasy_kmpp_data_Person thiz);
                libkmpp_KInt (*get_age)(libkmpp_kref_com_piasy_kmpp_data_Person thiz);
                libkmpp_KBoolean (*equals)(libkmpp_kref_com_piasy_kmpp_data_Person thiz, libkmpp_kref_kotlin_Any other);
                libkmpp_KInt (*hashCode)(libkmpp_kref_com_piasy_kmpp_data_Person thiz);
                const char* (*toString)(libkmpp_kref_com_piasy_kmpp_data_Person thiz);
                const char* (*component1)(libkmpp_kref_com_piasy_kmpp_data_Person thiz);
                libkmpp_KInt (*component2)(libkmpp_kref_com_piasy_kmpp_data_Person thiz);
                libkmpp_kref_com_piasy_kmpp_data_Person (*copy)(libkmpp_kref_com_piasy_kmpp_data_Person thiz, const char* name, libkmpp_KInt age);
                struct {
                  libkmpp_KType* (*_type)(void);
                  libkmpp_kref_com_piasy_kmpp_data_Person_Companion (*_instance)();
                  libkmpp_kref_kotlinx_serialization_KSerializer (*serializer)(libkmpp_kref_com_piasy_kmpp_data_Person_Companion thiz);
                } Companion;
                struct {
                  libkmpp_KType* (*_type)(void);
                  libkmpp_kref_com_piasy_kmpp_data_Person_$serializer (*_instance)();
                  libkmpp_kref_kotlinx_serialization_SerialDescriptor (*get_descriptor)(libkmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz);
                  libkmpp_kref_kotlin_Array (*childSerializers)(libkmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz);
                  libkmpp_kref_com_piasy_kmpp_data_Person (*deserialize)(libkmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz, libkmpp_kref_kotlinx_serialization_Decoder decoder);
                  void (*serialize)(libkmpp_kref_com_piasy_kmpp_data_Person_$serializer thiz, libkmpp_kref_kotlinx_serialization_Encoder encoder, libkmpp_kref_com_piasy_kmpp_data_Person obj);
                } $serializer;
              } Person;
            } data;
          } kmpp;
        } piasy;
      } com;
    } root;
  } kotlin;
} libkmpp_ExportedSymbols;
extern libkmpp_ExportedSymbols* libkmpp_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBKMPP_H */
