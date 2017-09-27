//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSArray, NSString;

@interface SKPromotedIAPSetOrderRequest : SKRequest
{
    CDUnknownBlockType _completionHandler;
    NSArray *_order;
    NSString *_bundleId;
}

@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSArray *order; // @synthesize order=_order;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (id)initWithOrder:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

