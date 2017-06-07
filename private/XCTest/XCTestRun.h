//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, XCTest, _XCInternalTestRun;

@interface XCTestRun : NSObject
{
    id _internalTestRun;
}

+ (id)testRunWithTest:(id)arg1;
@property(readonly) _XCInternalTestRun *implementation; // @synthesize implementation=_internalTestRun;
@property unsigned long long unexpectedExceptionCountBeforeCrash;
@property unsigned long long failureCountBeforeCrash;
@property unsigned long long executionCountBeforeCrash;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
@property(readonly) _Bool hasSucceeded;
@property(readonly) unsigned long long testCaseCount;
@property(readonly) unsigned long long unexpectedExceptionCount;
@property(readonly) unsigned long long failureCount;
@property(readonly) unsigned long long totalFailureCount;
@property(readonly) unsigned long long executionCount;
- (void)stop;
- (void)start;
@property(readonly, copy) NSDate *stopDate;
@property(readonly, copy) NSDate *startDate;
@property(readonly) double testDuration;
@property(readonly) double totalDuration;
@property(readonly) XCTest *test;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithTest:(id)arg1;

@end

