//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMetrics.h"

@interface SAMetrics (SiriCoreSessionObject)
- (void)siriCore_setSessionRequestId:(id)arg1;
- (id)siriCore_requestId;
- (void)siriCore_dispatchSendCompletionsWithResult:(long long)arg1 error:(id)arg2;
- (void)siriCore_addSendCompletion:(CDUnknownBlockType)arg1;
- (_Bool)siriCore_supportsSendCompletions;
@end

