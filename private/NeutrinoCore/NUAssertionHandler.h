//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAssertionHandler.h"

@interface NUAssertionHandler : NSAssertionHandler
{
    id <NUAssertionPolicyHandler> _policy;
}

+ (_Bool)runningUnitTests;
+ (id)currentHandler;
@property(retain) id <NUAssertionPolicyHandler> policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
- (void)continueAfterAssertInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(unsigned long long)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (id)newAssertionInfoInMethod:(SEL)arg1 object:(id)arg2 function:(id)arg3 file:(id)arg4 lineNumber:(unsigned long long)arg5 description:(id)arg6 arguments:(struct __va_list_tag [1])arg7;
- (id)defaultTestingPolicy;
- (id)defaultPolicy;
- (id)init;

@end

