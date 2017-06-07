//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUAssertionHandler : NSObject
{
}

+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(_Bool)arg4 description:(const char *)arg5;
+ (void)simulateCrashWithMessage:(id)arg1;
+ (void)logBacktraceThrottled;
+ (void)logBacktraceWithCallStackSymbols:(id)arg1;
+ (void)logBacktrace;
+ (id)p_performBlockIgnoringAssertions:(CDUnknownBlockType)arg1 onlyFatal:(_Bool)arg2;
+ (id)performBlockIgnoringFatalAssertions:(CDUnknownBlockType)arg1;
+ (id)performBlockIgnoringAssertions:(CDUnknownBlockType)arg1;

@end

