//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PKDSPContext;

@interface PKDeviceScorer : NSObject
{
    PKDSPContext *_context;
}

+ (_Bool)deviceScoringSupported;
@property(readonly, copy, nonatomic) PKDSPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)peerPaymentDeviceScoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

