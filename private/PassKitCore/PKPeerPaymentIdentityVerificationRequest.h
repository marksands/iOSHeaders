//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray;

@interface PKPeerPaymentIdentityVerificationRequest : PKPeerPaymentWebServiceRequest
{
    _Bool _devSigned;
    _Bool _wasUserInitiated;
    NSArray *_certificates;
}

@property(nonatomic) _Bool wasUserInitiated; // @synthesize wasUserInitiated=_wasUserInitiated;
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4;

@end

