//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURLRequest, NSURLResponse, WebCoreNSURLSession;

__attribute__((visibility("hidden")))
@interface WebCoreNSURLSessionDataTask : NSObject
{
    WebCoreNSURLSession *_session;
    struct RefPtr<WebCore::PlatformMediaResource, WTF::DumbPtrTraits<WebCore::PlatformMediaResource>> _resource;
    struct RetainPtr<NSURLResponse> _response;
    unsigned long long _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    long long _state;
    NSError *_error;
    NSString *_taskDescription;
    float _priority;
}

@property float priority; // @synthesize priority=_priority;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(copy) NSError *error; // @synthesize error=_error;
@property long long state; // @synthesize state=_state;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property WebCoreNSURLSession *session; // @synthesize session=_session;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v24@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16, name: resourceFinished:
-     // Error parsing type: v32@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16r^{ResourceError={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1IIIIIIIII}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}iiB{RetainPtr<NSError>=^v}}24, name: resource:loadFailedWithError:
-     // Error parsing type: v32@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16r^{ResourceError={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1IIIIIIIII}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}iiB{RetainPtr<NSError>=^v}}24, name: resource:accessControlCheckFailedWithError:
-     // Error parsing type: v32@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16@24, name: _resource:loadFinishedWithError:
-     // Error parsing type: v48@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16r^{ResourceResponse={URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1IIIIIIIII}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}q{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{HTTPHeaderMap={Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6>=^{CommonHeader}II}{Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0>=^{UncommonHeader}II}}{NetworkLoadMetrics={Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}B{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{optional<WTF::String>=B(storage_t<WTF::String>=C{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}})}{optional<WTF::String>=B(storage_t<WTF::String>=C{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}})}{optional<WebCore::NetworkLoadPriority>=B(constexpr_storage_t<WebCore::NetworkLoadPriority>=Ci)}{optional<WebCore::HTTPHeaderMap>=B(storage_t<WebCore::HTTPHeaderMap>=C{HTTPHeaderMap={Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6>=^{CommonHeader}II}{Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0>=^{UncommonHeader}II}})}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}}{optional<WebCore::CertificateInfo>=B(storage_t<WebCore::CertificateInfo>=C{CertificateInfo={RetainPtr<__SecTrust *>=^v}{RetainPtr<const __CFArray *>=^v}})}{optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{ParsedContentRange=Bqqq}{CacheControlDirectives={optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}{optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}BBBB}{optional<std::__1::array<unsigned char, 20> >=B(constexpr_storage_t<std::__1::array<unsigned char, 20> >=C{array<unsigned char, 20>=[20C]})}iiiiBBBBBBBBb3B{RetainPtr<NSURLResponse>=^v}}24^{ResourceRequest={URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1IIIIIIIII}d{URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1IIIIIIIII}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{HTTPHeaderMap={Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6>=^{CommonHeader}II}{Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0>=^{UncommonHeader}II}}{Vector<WTF::String, 0, WTF::CrashOnOverflow, 16>=^{String}II}{RefPtr<WebCore::FormData, WTF::DumbPtrTraits<WebCore::FormData> >=^{FormData}}iiiiBBBBBBBB{IntRect={IntPoint=ii}{IntSize=ii}}{RetainPtr<NSURLRequest>=^v}}32^{CompletionHandler<void (WebCore::ResourceRequest &&)>={Function<void (WebCore::ResourceRequest &&)>={unique_ptr<WTF::Function<void (WebCore::ResourceRequest &&)>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void (WebCore::ResourceRequest &&)>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void (WebCore::ResourceRequest &&)>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void (WebCore::ResourceRequest &&)>::CallableWrapperBase> >=^{CallableWrapperBase}}}}}40, name: resource:receivedRedirect:request:completionHandler:
-     // Error parsing type: v36@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16r*24i32, name: resource:receivedData:length:
-     // Error parsing type: B32@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16r^{ResourceResponse={URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1IIIIIIIII}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}q{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{HTTPHeaderMap={Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6>=^{CommonHeader}II}{Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0>=^{UncommonHeader}II}}{NetworkLoadMetrics={Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}B{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{optional<WTF::String>=B(storage_t<WTF::String>=C{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}})}{optional<WTF::String>=B(storage_t<WTF::String>=C{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}})}{optional<WebCore::NetworkLoadPriority>=B(constexpr_storage_t<WebCore::NetworkLoadPriority>=Ci)}{optional<WebCore::HTTPHeaderMap>=B(storage_t<WebCore::HTTPHeaderMap>=C{HTTPHeaderMap={Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6>=^{CommonHeader}II}{Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0>=^{UncommonHeader}II}})}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}}{optional<WebCore::CertificateInfo>=B(storage_t<WebCore::CertificateInfo>=C{CertificateInfo={RetainPtr<__SecTrust *>=^v}{RetainPtr<const __CFArray *>=^v}})}{optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{ParsedContentRange=Bqqq}{CacheControlDirectives={optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}{optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}BBBB}{optional<std::__1::array<unsigned char, 20> >=B(constexpr_storage_t<std::__1::array<unsigned char, 20> >=C{array<unsigned char, 20>=[20C]})}iiiiBBBBBBBBb3B{RetainPtr<NSURLResponse>=^v}}24, name: resource:shouldCacheResponse:
-     // Error parsing type: v32@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16r^{ResourceResponse={URL={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}b1b1b1IIIIIIIII}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}q{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{AtomicString={String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}}{HTTPHeaderMap={Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6>=^{CommonHeader}II}{Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0>=^{UncommonHeader}II}}{NetworkLoadMetrics={Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}{Seconds=d}B{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}}{optional<WTF::String>=B(storage_t<WTF::String>=C{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}})}{optional<WTF::String>=B(storage_t<WTF::String>=C{String={RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> >=^{StringImpl}}})}{optional<WebCore::NetworkLoadPriority>=B(constexpr_storage_t<WebCore::NetworkLoadPriority>=Ci)}{optional<WebCore::HTTPHeaderMap>=B(storage_t<WebCore::HTTPHeaderMap>=C{HTTPHeaderMap={Vector<WebCore::HTTPHeaderMap::CommonHeader, 0, WTF::CrashOnOverflow, 6>=^{CommonHeader}II}{Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0, WTF::CrashOnOverflow, 0>=^{UncommonHeader}II}})}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}{optional<unsigned long long>=B(constexpr_storage_t<unsigned long long>=CQ)}}{optional<WebCore::CertificateInfo>=B(storage_t<WebCore::CertificateInfo>=C{CertificateInfo={RetainPtr<__SecTrust *>=^v}{RetainPtr<const __CFArray *>=^v}})}{optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{optional<WTF::WallTime>=B(constexpr_storage_t<WTF::WallTime>=C{WallTime=d})}{ParsedContentRange=Bqqq}{CacheControlDirectives={optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}{optional<WTF::Seconds>=B(constexpr_storage_t<WTF::Seconds>=C{Seconds=d})}BBBB}{optional<std::__1::array<unsigned char, 20> >=B(constexpr_storage_t<std::__1::array<unsigned char, 20> >=C{array<unsigned char, 20>=[20C]})}iiiiBBBBBBBBb3B{RetainPtr<NSURLResponse>=^v}}24, name: resource:receivedResponse:
-     // Error parsing type: v40@0:8^{PlatformMediaResource=^^?{atomic<unsigned int>=AI}{unique_ptr<WebCore::PlatformMediaResourceClient, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >={__compressed_pair<WebCore::PlatformMediaResourceClient *, std::__1::default_delete<WebCore::PlatformMediaResourceClient> >=^{PlatformMediaResourceClient}}}}16Q24Q32, name: resource:sentBytes:totalBytesToBeSent:
- (id)_timingData;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)cancel;
@property(readonly, copy) NSURLResponse *response;
- (void)_setDefersLoading:(_Bool)arg1;
- (void)_finish;
- (void)_cancel;
- (void)_restart;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 request:(id)arg3;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 URL:(id)arg3;

@end

