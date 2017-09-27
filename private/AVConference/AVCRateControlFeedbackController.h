//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface AVCRateControlFeedbackController : NSObject
{
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _feedbackMessageCount;
}

@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
- (_Bool)translateMediaControlInfo:(void *)arg1 feedbackMessage:(CDStruct_a561fd19 *)arg2;
- (CDStruct_a561fd19)translateAFRCFeedbackMessage:(struct tagAFRCFB)arg1;
- (CDStruct_a561fd19)translateRateControlFeedbackMessageFromData:(id)arg1;
- (id)getRateControlDataWithStatistics:(id)arg1;
- (_Bool)processRateControlProbingMessage:(CDStruct_0004415b)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)processRateControlFeedbackMessage:(CDStruct_a561fd19)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)getRateControlFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (_Bool)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id *)arg4;
- (_Bool)getFeedbackMessage:(id *)arg1 type:(unsigned int)arg2 metaData:(id *)arg3 error:(id *)arg4;
- (void)dealloc;

@end

