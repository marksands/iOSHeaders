//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSString, NSURLConnection;

__attribute__((visibility("hidden")))
@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate>
{
    struct LegacyCustomProtocolManagerProxy *_customProtocolManagerProxy;
    unsigned long long _customProtocolID;
    unsigned long long _storagePolicy;
    NSURLConnection *_urlConnection;
}

- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)customProtocolManagerProxyDestroyed;
- (void)dealloc;
- (id)initWithLegacyCustomProtocolManagerProxy:(struct LegacyCustomProtocolManagerProxy *)arg1 customProtocolID:(unsigned long long)arg2 request:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

