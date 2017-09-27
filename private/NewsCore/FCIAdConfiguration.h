//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTPBIAdConfig;

@interface FCIAdConfiguration : NSObject
{
    NTPBIAdConfig *_pbConfig;
    _Bool _segmentsEnabled;
    double _segmentsThreshold;
    long long _segmentsSubmissionFrequency;
    long long _segmentsHistoryWindowInterval;
    long long _segmentsMinimumArticleCount;
}

@property(readonly, nonatomic) long long segmentsMinimumArticleCount; // @synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount;
@property(readonly, nonatomic) long long segmentsHistoryWindowInterval; // @synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval;
@property(readonly, nonatomic) long long segmentsSubmissionFrequency; // @synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency;
@property(readonly, nonatomic) double segmentsThreshold; // @synthesize segmentsThreshold=_segmentsThreshold;
@property(readonly, nonatomic, getter=areSegmentsEnabled) _Bool segmentsEnabled; // @synthesize segmentsEnabled=_segmentsEnabled;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPBIAdConfig:(id)arg1;

@end

