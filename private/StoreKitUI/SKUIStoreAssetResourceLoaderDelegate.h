//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"

@class NSOperationQueue, NSString, NSURL, SKUIClientContext;

@interface SKUIStoreAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    _Bool _isITunesStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSOperationQueue *_operationQueue;
    _Bool _shouldUseITunesStoreSecureKeyDelivery;
    SKUIClientContext *_clientContext;
}

+ (id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)arg1 clientContext:(id)arg2;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

