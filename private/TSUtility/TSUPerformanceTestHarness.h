//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject
{
    NSMutableArray *mTestCases;
    _Bool mQuiet;
    long long mPassingTests;
    long long mTotalTests;
    _Bool mPassed;
    struct timeval mSetupTime;
}

+ (id)harness;
@property(readonly, nonatomic) _Bool passed; // @synthesize passed=mPassed;
@property(readonly, nonatomic) long long testCount; // @synthesize testCount=mTotalTests;
@property(readonly, nonatomic) long long passingTestCount; // @synthesize passingTestCount=mPassingTests;
@property(nonatomic) _Bool quiet; // @synthesize quiet=mQuiet;
- (void)report;
- (_Bool)runTests;
- (void)cleanup;
- (void)testSuite;
- (void)setup;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (void)dealloc;
- (id)init;
- (void)p_writeCsvResultsToDirectory:(id)arg1;
- (void)p_writeConsoleMessagesToDirectory:(id)arg1;
- (void)p_writeSystemConfigurationToDirectory:(id)arg1;
- (id)p_createResultDirectory;

@end
