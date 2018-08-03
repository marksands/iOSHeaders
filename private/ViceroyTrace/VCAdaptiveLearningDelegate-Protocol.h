//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol VCAdaptiveLearningDelegate <NSObject>
- (int)previousISBRForSegment:(NSString *)arg1;
- (int)shortTermAverageBWEForSegment:(NSString *)arg1;
- (int)longTermAverageBWEForSegment:(NSString *)arg1;
- (int)shortTermAverageSARBRForSegment:(NSString *)arg1;
- (int)longTermAverageSARBRForSegment:(NSString *)arg1;
- (int)shortTermAverageSATXBRForSegment:(NSString *)arg1;
- (int)longTermAverageSATXBRForSegment:(NSString *)arg1;
- (int)shortTermAverageISBRForSegment:(NSString *)arg1;
- (int)longTermAverageISBRForSegment:(NSString *)arg1;
- (int)initialSettledBitrate;
- (int)shortTermAverageTBRForSegment:(NSString *)arg1;
- (int)longTermAverageTBRForSegment:(NSString *)arg1;
- (int)learntBitrateForSegment:(NSString *)arg1 defaultValue:(int)arg2;
- (void)updateSegment:(NSString *)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
- (int)adaptiveLearningState;
@end

