//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPStoreRedownloadProductItem, NSDictionary, NSURL;

@interface MPStoreRedownloadProductResponse : NSObject
{
    NSDictionary *_responseDictionary;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property(copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // @synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL;
@property(copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // @synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) MPStoreRedownloadProductItem *item;
- (id)initWithResponseDictionary:(id)arg1;

@end

