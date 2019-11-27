#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GeoSpark",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

SWIFT_CLASS("_TtC8GeoSpark19ActiveTripsResponse")
@interface ActiveTripsResponse : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSString * _Null_unspecified trip_id;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL isPaused;
@property (nonatomic, copy) NSString * _Null_unspecified updatedAt;
/// NSCoding required initializer.
/// Fills the data from the passed decoder
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// NSCoding required method.
/// Encodes mode properties into the decoder
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC8GeoSpark10GSAppState")
@interface GSAppState : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Foreground;)
+ (NSString * _Nonnull)Foreground SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Terminated;)
+ (NSString * _Nonnull)Terminated SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Background;)
+ (NSString * _Nonnull)Background SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull AlwaysOn;)
+ (NSString * _Nonnull)AlwaysOn SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GeoSpark10GSLocation")
@interface GSLocation : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified userId;
@property (nonatomic, copy) NSString * _Null_unspecified activity;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double accuracy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark8GSMotion")
@interface GSMotion : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull All;)
+ (NSString * _Nonnull)All SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Running;)
+ (NSString * _Nonnull)Running SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Walking;)
+ (NSString * _Nonnull)Walking SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull AutoMotive;)
+ (NSString * _Nonnull)AutoMotive SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Stationary;)
+ (NSString * _Nonnull)Stationary SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol GeoSparkDelegate;
@class GeoSparkUser;
@class GeoSparkError;
@class GeoSparkTrip;
@class GeoSparkActiveTrips;
@class UNNotificationResponse;
@class GeoSparkEvents;

SWIFT_CLASS("_TtC8GeoSpark8GeoSpark")
@interface GeoSpark : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <GeoSparkDelegate> _Null_unspecified delegate;)
+ (id <GeoSparkDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <GeoSparkDelegate> _Null_unspecified)newValue;
+ (void)intialize:(NSString * _Nonnull)publishKey;
+ (void)createUser:(NSString * _Nonnull)userDescription :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)getUser:(NSString * _Nonnull)userID :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startSessionIfNeeded:(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startTracking;
+ (void)stopTracking;
+ (void)setDescription:(NSString * _Nonnull)descriptionString :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)logout:(void (^ _Nonnull)(NSString * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startTrip:(NSString * _Nonnull)tripID :(NSString * _Nonnull)tripDesc :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)endTrip:(NSString * _Nonnull)tripID :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)pauseTrip:(NSString * _Nonnull)tripID :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)resumeTrip:(NSString * _Nonnull)tripID :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)activeTrips:(void (^ _Nonnull)(GeoSparkActiveTrips * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
+ (void)requestLocation;
+ (void)requestMotion;
+ (BOOL)isLocationEnabled SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isLocationTracking SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isMotionEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)trackLocationInAppState:(NSArray<NSString *> * _Nonnull)states;
+ (void)trackLocationInMotion:(NSArray<NSString *> * _Nonnull)motions;
+ (void)setLocationAccuracy:(NSInteger)accuracy;
+ (void)enableLogger:(BOOL)value;
+ (void)getCurrentLocation:(NSInteger)accuracy location:(void (^ _Nonnull)(GSLocation * _Nonnull))location;
+ (void)updateCurrentLocation:(NSInteger)accuracy;
+ (void)setDeviceToken:(NSData * _Nonnull)deviceToken;
+ (void)notificationOpenedHandler:(UNNotificationResponse * _Nonnull)resposne;
+ (void)toggleEventsWithGeofence:(BOOL)geofence Trip:(BOOL)trip Activity:(BOOL)activity :(void (^ _Nonnull)(GeoSparkEvents * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)getEventsStatus:(void (^ _Nonnull)(GeoSparkEvents * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GeoSpark19GeoSparkActiveTrips")
@interface GeoSparkActiveTrips : NSObject <NSCoding>
@property (nonatomic) NSInteger code;
@property (nonatomic, copy) NSArray<ActiveTripsResponse *> * _Null_unspecified trips;
@property (nonatomic, copy) NSString * _Null_unspecified msg;
@property (nonatomic) BOOL status;
/// NSCoding required initializer.
/// Fills the data from the passed decoder
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// NSCoding required method.
/// Encodes mode properties into the decoder
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP8GeoSpark16GeoSparkDelegate_")
@protocol GeoSparkDelegate
- (void)didUpdateLocation:(GSLocation * _Nonnull)location;
@end


SWIFT_CLASS("_TtC8GeoSpark13GeoSparkError")
@interface GeoSparkError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark14GeoSparkEvents")
@interface GeoSparkEvents : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Null_unspecified descriptionField;
@property (nonatomic) BOOL geofenceEvents;
@property (nonatomic) BOOL activityEvents;
@property (nonatomic) BOOL tripsEvents;
@property (nonatomic, copy) NSString * _Null_unspecified userId;
/// NSCoding required initializer.
/// Fills the data from the passed decoder
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// NSCoding required method.
/// Encodes mode properties into the decoder
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark12GeoSparkTrip")
@interface GeoSparkTrip : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified msg;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark12GeoSparkUser")
@interface GeoSparkUser : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull userId;
@property (nonatomic, readonly, copy) NSString * _Nullable userDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.1.2 (swiftlang-1100.0.278 clang-1100.0.33.9)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="GeoSpark",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

SWIFT_CLASS("_TtC8GeoSpark19ActiveTripsResponse")
@interface ActiveTripsResponse : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Null_unspecified createdAt;
@property (nonatomic, copy) NSString * _Null_unspecified trip_id;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL isPaused;
@property (nonatomic, copy) NSString * _Null_unspecified updatedAt;
/// NSCoding required initializer.
/// Fills the data from the passed decoder
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// NSCoding required method.
/// Encodes mode properties into the decoder
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC8GeoSpark10GSAppState")
@interface GSAppState : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Foreground;)
+ (NSString * _Nonnull)Foreground SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Terminated;)
+ (NSString * _Nonnull)Terminated SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Background;)
+ (NSString * _Nonnull)Background SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull AlwaysOn;)
+ (NSString * _Nonnull)AlwaysOn SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GeoSpark10GSLocation")
@interface GSLocation : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified userId;
@property (nonatomic, copy) NSString * _Null_unspecified activity;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double accuracy;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark8GSMotion")
@interface GSMotion : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull All;)
+ (NSString * _Nonnull)All SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Running;)
+ (NSString * _Nonnull)Running SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Walking;)
+ (NSString * _Nonnull)Walking SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull AutoMotive;)
+ (NSString * _Nonnull)AutoMotive SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Stationary;)
+ (NSString * _Nonnull)Stationary SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol GeoSparkDelegate;
@class GeoSparkUser;
@class GeoSparkError;
@class GeoSparkTrip;
@class GeoSparkActiveTrips;
@class UNNotificationResponse;
@class GeoSparkEvents;

SWIFT_CLASS("_TtC8GeoSpark8GeoSpark")
@interface GeoSpark : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <GeoSparkDelegate> _Null_unspecified delegate;)
+ (id <GeoSparkDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <GeoSparkDelegate> _Null_unspecified)newValue;
+ (void)intialize:(NSString * _Nonnull)publishKey;
+ (void)createUser:(NSString * _Nonnull)userDescription :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)getUser:(NSString * _Nonnull)userID :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startSessionIfNeeded:(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startTracking;
+ (void)stopTracking;
+ (void)setDescription:(NSString * _Nonnull)descriptionString :(void (^ _Nonnull)(GeoSparkUser * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)logout:(void (^ _Nonnull)(NSString * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)startTrip:(NSString * _Nonnull)tripID :(NSString * _Nonnull)tripDesc :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)endTrip:(NSString * _Nonnull)tripID :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)pauseTrip:(NSString * _Nonnull)tripID :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)resumeTrip:(NSString * _Nonnull)tripID :(void (^ _Nonnull)(GeoSparkTrip * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)activeTrips:(void (^ _Nonnull)(GeoSparkActiveTrips * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (NSString * _Nonnull)getUserId SWIFT_WARN_UNUSED_RESULT;
+ (void)requestLocation;
+ (void)requestMotion;
+ (BOOL)isLocationEnabled SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isLocationTracking SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isMotionEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)trackLocationInAppState:(NSArray<NSString *> * _Nonnull)states;
+ (void)trackLocationInMotion:(NSArray<NSString *> * _Nonnull)motions;
+ (void)setLocationAccuracy:(NSInteger)accuracy;
+ (void)enableLogger:(BOOL)value;
+ (void)getCurrentLocation:(NSInteger)accuracy location:(void (^ _Nonnull)(GSLocation * _Nonnull))location;
+ (void)updateCurrentLocation:(NSInteger)accuracy;
+ (void)setDeviceToken:(NSData * _Nonnull)deviceToken;
+ (void)notificationOpenedHandler:(UNNotificationResponse * _Nonnull)resposne;
+ (void)toggleEventsWithGeofence:(BOOL)geofence Trip:(BOOL)trip Activity:(BOOL)activity :(void (^ _Nonnull)(GeoSparkEvents * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
+ (void)getEventsStatus:(void (^ _Nonnull)(GeoSparkEvents * _Nonnull))onSuccess onFailure:(void (^ _Nonnull)(GeoSparkError * _Nonnull))onFailure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8GeoSpark19GeoSparkActiveTrips")
@interface GeoSparkActiveTrips : NSObject <NSCoding>
@property (nonatomic) NSInteger code;
@property (nonatomic, copy) NSArray<ActiveTripsResponse *> * _Null_unspecified trips;
@property (nonatomic, copy) NSString * _Null_unspecified msg;
@property (nonatomic) BOOL status;
/// NSCoding required initializer.
/// Fills the data from the passed decoder
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// NSCoding required method.
/// Encodes mode properties into the decoder
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP8GeoSpark16GeoSparkDelegate_")
@protocol GeoSparkDelegate
- (void)didUpdateLocation:(GSLocation * _Nonnull)location;
@end


SWIFT_CLASS("_TtC8GeoSpark13GeoSparkError")
@interface GeoSparkError : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull errorCode;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark14GeoSparkEvents")
@interface GeoSparkEvents : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Null_unspecified descriptionField;
@property (nonatomic) BOOL geofenceEvents;
@property (nonatomic) BOOL activityEvents;
@property (nonatomic) BOOL tripsEvents;
@property (nonatomic, copy) NSString * _Null_unspecified userId;
/// NSCoding required initializer.
/// Fills the data from the passed decoder
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// NSCoding required method.
/// Encodes mode properties into the decoder
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark12GeoSparkTrip")
@interface GeoSparkTrip : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified msg;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC8GeoSpark12GeoSparkUser")
@interface GeoSparkUser : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull userId;
@property (nonatomic, readonly, copy) NSString * _Nullable userDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
