//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSInvocation, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, XCTAttachmentManager, XCTWaiter, XCTestCaseRun, XCUITestContext;

@interface _XCTestCaseImplementation : NSObject
{
    NSInvocation *_invocation;
    NSThread *_primaryThread;
    XCTestCaseRun *_testCaseRun;
    _Bool _continueAfterFailure;
    NSMutableSet *_expectations;
    NSArray *_activePerformanceMetricIDs;
    NSMutableDictionary *_perfMetricsForID;
    unsigned long long _startWallClockTime;
    struct time_value _startUserTime;
    struct time_value _startSystemTime;
    unsigned long long _measuringIteration;
    _Bool _isMeasuringMetrics;
    _Bool _didMeasureMetrics;
    _Bool _didStartMeasuring;
    _Bool _didStopMeasuring;
    NSString *_filePathForNestedFailure;
    unsigned long long _lineNumberForNestedFailure;
    long long _runLoopNestingCount;
    XCTWaiter *_currentWaiter;
    NSMutableArray *_failureRecords;
    _Bool _shouldHaltWhenReceivesControl;
    _Bool _shouldIgnoreSubsequentFailures;
    NSMutableArray *_teardownBlocks;
    _Bool _hasDequeuedTeardownBlocks;
    _Bool _hasAttemptedToCaptureScreenshotOnFailure;
    XCTAttachmentManager *_attachmentManager;
    NSDictionary *_activityAggregateStatistics;
    XCUITestContext *_testContext;
}

@property(readonly) XCUITestContext *testContext; // @synthesize testContext=_testContext;
@property(copy) NSDictionary *activityAggregateStatistics; // @synthesize activityAggregateStatistics=_activityAggregateStatistics;
@property(retain) XCTAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property _Bool hasAttemptedToCaptureScreenshotOnFailure; // @synthesize hasAttemptedToCaptureScreenshotOnFailure=_hasAttemptedToCaptureScreenshotOnFailure;
@property _Bool hasDequeuedTeardownBlocks; // @synthesize hasDequeuedTeardownBlocks=_hasDequeuedTeardownBlocks;
@property(readonly) NSMutableArray *teardownBlocks; // @synthesize teardownBlocks=_teardownBlocks;
@property(retain, nonatomic) XCTWaiter *currentWaiter; // @synthesize currentWaiter=_currentWaiter;
@property _Bool shouldIgnoreSubsequentFailures; // @synthesize shouldIgnoreSubsequentFailures=_shouldIgnoreSubsequentFailures;
@property _Bool shouldHaltWhenReceivesControl; // @synthesize shouldHaltWhenReceivesControl=_shouldHaltWhenReceivesControl;
@property(retain, nonatomic) NSMutableArray *failureRecords; // @synthesize failureRecords=_failureRecords;
@property long long runLoopNestingCount; // @synthesize runLoopNestingCount=_runLoopNestingCount;
@property unsigned long long lineNumberForNestedFailure; // @synthesize lineNumberForNestedFailure=_lineNumberForNestedFailure;
@property(copy) NSString *filePathForNestedFailure; // @synthesize filePathForNestedFailure=_filePathForNestedFailure;
@property(retain, nonatomic) NSMutableSet *expectations; // @synthesize expectations=_expectations;
@property _Bool didStopMeasuring; // @synthesize didStopMeasuring=_didStopMeasuring;
@property _Bool didStartMeasuring; // @synthesize didStartMeasuring=_didStartMeasuring;
@property _Bool didMeasureMetrics; // @synthesize didMeasureMetrics=_didMeasureMetrics;
@property _Bool isMeasuringMetrics; // @synthesize isMeasuringMetrics=_isMeasuringMetrics;
@property unsigned long long measuringIteration; // @synthesize measuringIteration=_measuringIteration;
@property struct time_value startUserTime; // @synthesize startUserTime=_startUserTime;
@property struct time_value startSystemTime; // @synthesize startSystemTime=_startSystemTime;
@property unsigned long long startWallClockTime; // @synthesize startWallClockTime=_startWallClockTime;
@property(retain) NSMutableDictionary *perfMetricsForID; // @synthesize perfMetricsForID=_perfMetricsForID;
@property(copy) NSArray *activePerformanceMetricIDs; // @synthesize activePerformanceMetricIDs=_activePerformanceMetricIDs;
@property _Bool continueAfterFailure; // @synthesize continueAfterFailure=_continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun; // @synthesize testCaseRun=_testCaseRun;
@property(retain) NSThread *primaryThread; // @synthesize primaryThread=_primaryThread;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void).cxx_destruct;
@property(readonly) _Bool hasImplicitExpectationsWhichHaveBeenWaitedOn;
- (void)resetExpectationsInArray:(id)arg1;
- (void)resetExpectations;
- (void)addExpectation:(id)arg1;
- (id)init;
- (void)dealloc;

@end

