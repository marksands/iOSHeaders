//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSURLConnectionDataDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLSession, PKPass, PKValueAddedServiceTransaction;

@interface PKValueAddedServiceWebService : NSObject <NSURLConnectionDataDelegate>
{
    PKValueAddedServiceTransaction *_valueAddedTransaction;
    NSURLSession *_urlSession;
    NSDictionary *_merchantPayload;
    PKPass *_pass;
}

@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) NSDictionary *merchantPayload; // @synthesize merchantPayload=_merchantPayload;
- (void).cxx_destruct;
- (void)downloadPassWithCompletion:(CDUnknownBlockType)arg1;
- (void)downloadMerchantPayloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithValueAddedServiceTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

