//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AutoRetainReleaseTypePtr<const __CFData *, CFObject> {
    CDUnknownFunctionPointerType *_field1;
    struct __CFData *_field2;
};

struct AutoRetainReleaseTypePtr<const __CFDictionary *, CFObject> {
    CDUnknownFunctionPointerType *_field1;
    struct __CFDictionary *_field2;
};

struct AutoRetainReleaseTypePtr<const __CFString *, CFObject> {
    CDUnknownFunctionPointerType *_field1;
    struct __CFString *_field2;
};

struct BackgroundTaskServerTrustTestResult {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
};

struct BaseSocketStreamClient {
    CDUnknownFunctionPointerType *_field1;
};

struct BlockHolderVar<NSURLSessionTaskMetrics *>;

struct BlockHolderVar<bool, NSError *>;

struct BlockHolderVar<bool>;

struct CBs {
    CDUnknownBlockType _field1;
    CDUnknownBlockType _field2;
    CDUnknownBlockType _field3;
    CDUnknownBlockType _field4;
    CDUnknownBlockType _field5;
    CDUnknownBlockType _field6;
};

struct CFURLProtocolClient {
    long long version;
    void *client;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
    CDUnknownFunctionPointerType wasRedirected;
    CDUnknownFunctionPointerType cacheResponseIsValid;
    CDUnknownFunctionPointerType didReceiveResponse;
    CDUnknownFunctionPointerType didLoadData;
    CDUnknownFunctionPointerType didFinishLoading;
    CDUnknownFunctionPointerType didFail;
    CDUnknownFunctionPointerType didReceiveAuthenticationChallenge;
};

struct CFURLProtocolImplementation {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
};

struct CFURLProtocolInstanceCallbacks {
    long long _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    void *_field14;
};

struct ConfigFlags {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct CoreSchedulingSet {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    int _field3;
    CDUnknownFunctionPointerType *_field4;
    struct _opaque_pthread_t *_field5;
    int _field6;
    struct __CFSet *_field7;
    id _field8;
    struct os_unfair_lock_s _field9;
    id _field10;
    struct __CFRunLoop *_field11;
    struct __CFString *_field12;
    int _field13;
};

struct GlueTube {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    int _field3;
};

struct HTTPBodyData;

struct HTTPConnectionCacheKey {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    int _field3;
    unsigned long long _field4;
    struct __CFString *_field5;
    int _field6;
    int _field7;
    struct __CFDictionary *_field8;
    unsigned long long _field9;
    struct __CFDictionary *_field10;
    struct shared_ptr<NetworkProxy> _field11;
    struct shared_ptr<const __CFString> _field12;
    int _field13;
    int _field14;
};

struct HTTPConnectionCacheLimits {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
};

struct HTTPHeaderDict;

struct HTTPMethodMixedValue {
    CDUnknownFunctionPointerType *_field1;
    struct __CFString *_field2;
};

struct HTTPParser;

struct HTTPProtocol;

struct HTTPRequestMessage {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned char _field4;
    struct HTTPVersionMixedValue _field5;
    struct HTTPBodyData *_field6;
    int _field7;
    long long _field8;
    struct _CFHTTPAuthentication *_field9;
    struct _CFHTTPAuthentication *_field10;
    struct HTTPParser *_field11;
    struct HTTPHeaderDict *_field12;
    struct HTTPHeaderDict *_field13;
    struct __CFDictionary *_field14;
    CDUnknownFunctionPointerType *_field15;
    struct __CFAllocator *_field16;
    struct HTTPMethodMixedValue _field17;
    char *_field18;
    struct __CFURL *_field19;
    char *_field20;
};

struct HTTPVersionMixedValue {
    CDUnknownFunctionPointerType *_field1;
    struct __CFString *_field2;
};

struct InterfaceRequiredForLoader;

struct InternalInit {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    _Bool _field5;
    long long _field6;
};

struct InternalProtocolImplementation {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
};

struct MetaConnectionCacheClient {
    CDUnknownFunctionPointerType *_field1;
};

struct MetaConnectionOptions {
    int _field1;
    float _field2;
    unsigned long long _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
};

struct NSCFURLProtocolClient {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    id _field3;
    id _field4;
};

struct NetworkProxy;

struct PerformanceTiming {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    int _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    double _field8;
    struct __CFString *_field9;
    double _field10;
    struct __CFString *_field11;
    double _field12;
    struct __CFString *_field13;
    double _field14;
    struct __CFString *_field15;
    double _field16;
    struct __CFString *_field17;
    double _field18;
    struct __CFString *_field19;
    double _field20;
    struct __CFString *_field21;
    double _field22;
    struct __CFString *_field23;
    double _field24;
    double _field25;
    struct __CFString *_field26;
    double _field27;
    struct __CFString *_field28;
    double _field29;
    struct __CFString *_field30;
    double _field31;
    struct __CFString *_field32;
    int _field33;
    struct __CFString *_field34;
    int _field35;
    struct __CFString *_field36;
    double _field37;
    struct __CFString *_field38;
    double _field39;
    struct __CFString *_field40;
    double _field41;
    struct __CFString *_field42;
    double _field43;
    struct __CFString *_field44;
    double _field45;
    struct __CFString *_field46;
    double _field47;
    struct __CFString *_field48;
    double _field49;
    struct __CFString *_field50;
    _Bool _field51;
    _Bool _field52;
    struct AutoRetainReleaseTypePtr<const __CFData *, CFObject> _field53;
    struct AutoRetainReleaseTypePtr<const __CFString *, CFObject> _field54;
    struct unique_ptr<const __CFUUID, Deleter_CFRelease> _field55;
    struct shared_ptr<__CFDictionary> _field56;
    _Bool _field57;
    _Bool _field58;
    _Bool _field59;
    _Bool _field60;
    struct AutoRetainReleaseTypePtr<const __CFDictionary *, CFObject> _field61;
    struct AutoRetainReleaseTypePtr<const __CFDictionary *, CFObject> _field62;
    struct unique_ptr<const __CFDictionary, Deleter_CFRelease> _field63;
    struct unique_ptr<const __CFDictionary, Deleter_CFRelease> _field64;
    double _field65;
    struct __CFString *_field66;
    _Bool _field67;
    _Bool _field68;
    long long _field69;
    _Bool _field70;
    _Bool _field71;
    struct unique_ptr<const __CFString, Deleter_CFRelease> _field72;
    struct unique_ptr<const __CFString, Deleter_CFRelease> _field73;
    struct unique_ptr<const __CFString, Deleter_CFRelease> _field74;
    struct unique_ptr<__CFDictionary, Deleter_CFRelease> _field75;
    _Bool _field76;
    struct unique_ptr<const void, Deleter_CFRelease> _field77;
    struct unique_ptr<const void, Deleter_CFRelease> _field78;
    _Bool _field79;
    _Bool _field80;
    _Bool _field81;
    _Bool _field82;
    unsigned long long _field83;
    unsigned long long _field84;
    _Bool _field85;
    long long _field86;
    long long _field87;
    _Bool _field88;
};

struct RedirectionRecorder;

struct RetainableTypedDict<const CoreSchedulingSet *, GlueTubeManager *>;

struct SessionConnectionLoadable {
    CDUnknownFunctionPointerType *_field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    CDUnknownFunctionPointerType *_field6;
    CDUnknownFunctionPointerType *_field7;
    id _field8;
};

struct SmartBlockWithArgs<NSURLSessionTaskMetrics *> {
    struct BlockHolderVar<NSURLSessionTaskMetrics *> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct SmartBlockWithArgs<bool, NSError *> {
    struct BlockHolderVar<bool, NSError *> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct SmartBlockWithArgs<bool> {
    struct BlockHolderVar<bool> *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct StreamTaskTestConfig {
    NSString *host;
    long long port;
    NSDictionary *proxyConfig;
    int connectionType;
};

struct TCPIOConnection;

struct TCPIOConnectionObjCPP;

struct TCPIO_BlockCallbacks_Listener {
    CDUnknownFunctionPointerType *_field1;
    struct CBs _field2;
    id _field3;
    int _field4;
};

struct TCPIO_EstablishBase;

struct TLSServer;

struct Throttler;

struct URLConnectionLoader {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    CDUnknownFunctionPointerType *_field3;
    unsigned char _field4;
    unsigned char _field5;
    struct InterfaceRequiredForLoader *_field6;
    id _field7;
    CDUnknownFunctionPointerType *_field8;
    CDUnknownFunctionPointerType *_field9;
    struct PerformanceTiming *_field10;
    id _field11;
    long long _field12;
    struct RedirectionRecorder *_field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
    id _field17;
    unsigned char _field18;
    double _field19;
    struct URLProtocol *_field20;
    id _field21;
    unsigned char _field22;
    struct CoreSchedulingSet *_field23;
    double _field24;
    double _field25;
    unsigned long long _field26;
    struct ConfigFlags _field27;
    unsigned char _field28;
    unsigned char _field29;
    unsigned char _field30;
    unsigned char _field31;
};

struct URLProtocol {
    CDUnknownFunctionPointerType *_field1;
    CDUnknownFunctionPointerType *_field2;
    CDUnknownFunctionPointerType *_field3;
    struct CoreSchedulingSet *_field4;
    double _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    long long _field14;
    long long _field15;
    struct Throttler *_field16;
    id _field17;
    struct _CFURLRequest *_field18;
    struct URLProtocolClient *_field19;
    struct _CFCachedURLResponse *_field20;
};

struct URLProtocolClient {
    CDUnknownFunctionPointerType *_field1;
};

struct UploadProgressInfo {
    long long _field1;
    long long _field2;
    long long _field3;
};

struct XCookieStorage {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    int _field3;
};

struct XCredentialStorage {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    int _field3;
};

struct XTubeManager {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    int _field3;
    struct RetainableTypedDict<const CoreSchedulingSet *, GlueTubeManager *> *_field4;
    struct _opaque_pthread_mutex_t _field5;
    struct HTTPConnectionCacheLimits _field6;
};

struct XURLCache {
    CDUnknownFunctionPointerType *_field1;
    struct __CFAllocator *_field2;
    int _field3;
};

struct _CFCachedURLResponse;

struct _CFHTTPAuthentication;

struct _CFURLRequest;

struct __CFAllocator;

struct __CFDictionary;

struct __CFString;

struct __CFURLCache;

struct __shared_weak_count;

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct internal_state;

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<HTTPProtocol> {
    struct HTTPProtocol *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<NetworkProxy> {
    struct NetworkProxy *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<TCPIOConnection> {
    struct TCPIOConnection *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<TCPIOConnectionObjCPP> {
    struct TCPIOConnectionObjCPP *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<TCPIO_EstablishBase> {
    struct TCPIO_EstablishBase *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<TLSServer> {
    struct TLSServer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<__CFDictionary> {
    struct __CFDictionary *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<__CFURLCache> {
    struct __CFURLCache *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<__SecTrust> {
    struct __SecTrust *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<const __CFString> {
    struct __CFString *_field1;
    struct __shared_weak_count *_field2;
};

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

struct unique_ptr<__CFDictionary, Deleter_CFRelease> {
    struct __compressed_pair<__CFDictionary *, Deleter_CFRelease> {
        struct __CFDictionary *_field1;
    } _field1;
};

struct unique_ptr<const __CFDictionary, Deleter_CFRelease> {
    struct __compressed_pair<const __CFDictionary *, Deleter_CFRelease> {
        struct __CFDictionary *_field1;
    } _field1;
};

struct unique_ptr<const __CFString, Deleter_CFRelease> {
    struct __compressed_pair<const __CFString *, Deleter_CFRelease> {
        struct __CFString *_field1;
    } _field1;
};

struct unique_ptr<const __CFUUID, Deleter_CFRelease> {
    struct __compressed_pair<const __CFUUID *, Deleter_CFRelease> {
        struct __CFUUID *_field1;
    } _field1;
};

struct unique_ptr<const void, Deleter_CFRelease> {
    struct __compressed_pair<const void *, Deleter_CFRelease> {
        void *_field1;
    } _field1;
};

struct weak_ptr<__CFURLCache> {
    struct __CFURLCache *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct z_stream_s {
    char *next_in;
    unsigned int avail_in;
    unsigned long long total_in;
    char *next_out;
    unsigned int avail_out;
    unsigned long long total_out;
    char *msg;
    struct internal_state *state;
    CDUnknownFunctionPointerType zalloc;
    CDUnknownFunctionPointerType zfree;
    void *opaque;
    int data_type;
    unsigned long long adler;
    unsigned long long reserved;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long domain;
    int error;
} CDStruct_59046461;

typedef struct {
    CDStruct_198678f7 _field1;
    CDStruct_198678f7 _field2;
} CDStruct_3c1748cc;

// Template types
typedef struct SmartBlockWithArgs<NSURLSessionTaskMetrics *> {
    struct BlockHolderVar<NSURLSessionTaskMetrics *> *__ptr_;
    struct __shared_weak_count *__cntrl_;
} SmartBlockWithArgs_02d865d6;

typedef struct SmartBlockWithArgs<bool, NSError *> {
    struct BlockHolderVar<bool, NSError *> *__ptr_;
    struct __shared_weak_count *__cntrl_;
} SmartBlockWithArgs_343a5e9e;

typedef struct SmartBlockWithArgs<bool> {
    struct BlockHolderVar<bool> *__ptr_;
    struct __shared_weak_count *__cntrl_;
} SmartBlockWithArgs_7064a8fd;

typedef struct shared_ptr<TCPIOConnection> {
    struct TCPIOConnection *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_f0c1381f;

typedef struct shared_ptr<TCPIOConnectionObjCPP> {
    struct TCPIOConnectionObjCPP *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_54ecd472;

typedef struct shared_ptr<TLSServer> {
    struct TLSServer *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_a7890e8d;

typedef struct shared_ptr<__CFURLCache> {
    struct __CFURLCache *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_25027cf4;

typedef struct shared_ptr<__SecTrust> {
    struct __SecTrust *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_3ed6bb45;

