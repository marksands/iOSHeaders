//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface PLPreheatItem : NSObject
{
    int _format;
    long long _imageType;
    struct CGSize _optimalSourcePixelSize;
    NSString *_assetUUID;
    _Bool _CPLPrefetching;
    NSObject<OS_dispatch_queue> *_CPLPrefetchingIsolationQueue;
    NSString *_CPLPrefetchingDoneToken;
    int _CPLNotifyRegistrationToken;
    _Bool _CPLPrefetchingCancelled;
    NSObject<OS_dispatch_group> *_CPLPrefetchingWaitGroup;
    _Bool _cachingAllowed;
    int _requestCount;
    _Bool _didCompleteCPLPrefetchingWithSuccessOrError;
    _Bool _CPLPrefetchingWasCancelled;
    int _bestFormat;
    NSString *_virtualCPLTaskIdentifier;
}

@property(nonatomic) _Bool cachingAllowed; // @synthesize cachingAllowed=_cachingAllowed;
@property _Bool CPLPrefetchingWasCancelled; // @synthesize CPLPrefetchingWasCancelled=_CPLPrefetchingWasCancelled;
@property _Bool didCompleteCPLPrefetchingWithSuccessOrError; // @synthesize didCompleteCPLPrefetchingWithSuccessOrError=_didCompleteCPLPrefetchingWithSuccessOrError;
@property(retain) NSString *virtualCPLTaskIdentifier; // @synthesize virtualCPLTaskIdentifier=_virtualCPLTaskIdentifier;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup; // @synthesize CPLPrefetchingWaitGroup=_CPLPrefetchingWaitGroup;
@property(readonly, nonatomic) _Bool CPLPrefetching; // @synthesize CPLPrefetching=_CPLPrefetching;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property(readonly, nonatomic) struct CGSize optimalSourcePixelSize; // @synthesize optimalSourcePixelSize=_optimalSourcePixelSize;
@property(readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) int bestFormat; // @synthesize bestFormat=_bestFormat;
@property(readonly, nonatomic) int format; // @synthesize format=_format;
- (_Bool)isRetained;
- (long long)decrementRequestCount;
- (long long)incrementRequestCount;
- (_Bool)isCancelled;
- (void)cancelPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)addImageHandler:(CDUnknownBlockType)arg1;
- (id)cachedImageIfAvailable:(_Bool *)arg1;
- (id)cachedImage:(_Bool *)arg1;
- (void)dealloc;
- (id)description;
- (id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(int)arg2;

@end

