//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@interface HDBatchedQueryServer : HDQueryServer
{
    CDUnknownBlockType _unitTest_queryServerObjectEnumerationHandler;
    CDUnknownBlockType _unitTest_queryServerWillSendBatchHandler;
}

@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerWillSendBatchHandler; // @synthesize unitTest_queryServerWillSendBatchHandler=_unitTest_queryServerWillSendBatchHandler;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerObjectEnumerationHandler; // @synthesize unitTest_queryServerObjectEnumerationHandler=_unitTest_queryServerObjectEnumerationHandler;
- (void).cxx_destruct;
- (long long)batchObjectsWithEnumerator:(id)arg1 includeDeletedObjects:(_Bool)arg2 error:(id *)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (long long)batchObjectsWithEnumerator:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;

@end

