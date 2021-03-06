//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAsyncOperation.h"

@class ICMediaRedownloadRequest, ICStoreRequestContext, MPCModelGenericAVItemAssetLoadProperties, NSObject<OS_dispatch_queue>;

@interface MPCModelGenericAVItemMediaRedownloadOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICMediaRedownloadRequest *_mediaDownloadRequest;
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // @synthesize assetLoadProperties=_assetLoadProperties;
- (void).cxx_destruct;
- (void)execute;
- (void)cancel;
- (id)init;

@end

