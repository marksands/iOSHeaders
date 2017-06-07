//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation
{
    _Bool _delegatedPlayback;
    NSString *_assetSourceStorefrontID;
    long long _requestType;
    CDUnknownBlockType _willBeginExecutionHandler;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
    NSString *_householdID;
    unsigned long long _storeCloudID;
    long long _storeSubscriptionAdamID;
    long long _storePurchasedAdamID;
    NSString *_cloudUniversalLibraryID;
}

@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(copy, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) CDUnknownBlockType willBeginExecutionHandler; // @synthesize willBeginExecutionHandler=_willBeginExecutionHandler;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic, getter=isDelegatedPlayback) _Bool delegatedPlayback; // @synthesize delegatedPlayback=_delegatedPlayback;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
- (void).cxx_destruct;
- (void)start;

@end

