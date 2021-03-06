//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCapturePhoto, CAMStillImageCaptureCoordinationInfo, NSArray, NSDate, NSDictionary, NSError, NSString;

@interface CAMStillImageCaptureResult : NSObject
{
    _Bool _shouldPersistEffectFilterName;
    _Bool _expectingPairedVideo;
    AVCapturePhoto *_capturePhoto;
    NSDate *_captureDate;
    NSDictionary *_metadata;
    NSError *_error;
    NSArray *_adjustmentFilters;
    NSString *_persistenceUUID;
    CAMStillImageCaptureCoordinationInfo *_coordinationInfo;
}

@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property(readonly, nonatomic) CAMStillImageCaptureCoordinationInfo *coordinationInfo; // @synthesize coordinationInfo=_coordinationInfo;
@property(readonly, copy, nonatomic) NSString *persistenceUUID; // @synthesize persistenceUUID=_persistenceUUID;
@property(readonly, nonatomic) NSArray *adjustmentFilters; // @synthesize adjustmentFilters=_adjustmentFilters;
@property(readonly, nonatomic) _Bool shouldPersistEffectFilterName; // @synthesize shouldPersistEffectFilterName=_shouldPersistEffectFilterName;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly, nonatomic) AVCapturePhoto *capturePhoto; // @synthesize capturePhoto=_capturePhoto;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSDictionary *compactMetadata;
@property(readonly, copy, nonatomic) NSString *imageGroupIdentifier;
- (id)_captureDateFromMetadata:(id)arg1;
- (void)dealloc;

@end

