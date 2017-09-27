//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSFormAutoFillFeedbackProcessor.h"

@class NSObject<OS_dispatch_queue>, NSString, WBSCrowdsourcedFeedbackDomainNormalizer;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor>
{
    id <WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
    unsigned long long _autoFillVersion;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;
}

@property(retain, nonatomic) id <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider; // @synthesize domainPolicyProvider=_domainPolicyProvider;
- (void).cxx_destruct;
- (id)_feedbackWithCorrectionSet:(id)arg1 includeOrigin:(_Bool)arg2;
- (void)_getFeedbackWithCorrectionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendFeedbackWithCorrectionSet:(id)arg1;
- (id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

