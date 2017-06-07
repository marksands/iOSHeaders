//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICRequestContext, NSString, NSURL;

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying>
{
    _Bool _skippedRentalCheckout;
    _Bool _ITunesStoreRequest;
    _Bool _shouldIncludeDeviceGUID;
    NSURL *_certificateURL;
    NSString *_contentURI;
    NSURL *_keyServerURL;
    long long _leaseActionType;
    ICRequestContext *_requestContext;
    long long _rentalID;
    long long _qualityOfService;
    CDUnknownBlockType _serverPlaybackContextDataCreationHandler;
}

@property(nonatomic) _Bool shouldIncludeDeviceGUID; // @synthesize shouldIncludeDeviceGUID=_shouldIncludeDeviceGUID;
@property(copy, nonatomic) CDUnknownBlockType serverPlaybackContextDataCreationHandler; // @synthesize serverPlaybackContextDataCreationHandler=_serverPlaybackContextDataCreationHandler;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic, getter=isITunesStoreRequest) _Bool ITunesStoreRequest; // @synthesize ITunesStoreRequest=_ITunesStoreRequest;
@property(nonatomic) _Bool skippedRentalCheckout; // @synthesize skippedRentalCheckout=_skippedRentalCheckout;
@property(nonatomic) long long rentalID; // @synthesize rentalID=_rentalID;
@property(copy, nonatomic) ICRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) long long leaseActionType; // @synthesize leaseActionType=_leaseActionType;
@property(copy, nonatomic) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(copy, nonatomic) NSString *contentURI; // @synthesize contentURI=_contentURI;
@property(copy, nonatomic) NSURL *certificateURL; // @synthesize certificateURL=_certificateURL;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)configureUsingAssetResourceLoadingRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

