//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PFAdjustment, PLPhotoEditMutableModel;

@interface _PLSettingsExtractionPayload : NSObject
{
    PFAdjustment *_adjustmentData;
    PLPhotoEditMutableModel *_model;
    long long _baseOrientation;
    double _baseDuration;
    struct CGSize _baseImageSize;
}

@property(nonatomic) double baseDuration; // @synthesize baseDuration=_baseDuration;
@property(nonatomic) long long baseOrientation; // @synthesize baseOrientation=_baseOrientation;
@property(nonatomic) struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property(retain, nonatomic) PLPhotoEditMutableModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PFAdjustment *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
- (void).cxx_destruct;

@end

