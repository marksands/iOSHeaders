//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMStillImageCaptureCoordinationInfo, NSArray, NSDate, NSError, NSURL;

@interface CAMVideoCaptureResult : NSObject
{
    NSURL *_localDestinationURL;
    NSURL *_filteredLocalDestinationURL;
    NSArray *_metadata;
    double _videoZoomFactor;
    long long _reason;
    NSDate *_captureDate;
    CAMStillImageCaptureCoordinationInfo *_coordinationInfo;
    NSError *_error;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) CAMStillImageCaptureCoordinationInfo *coordinationInfo; // @synthesize coordinationInfo=_coordinationInfo;
@property(readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) double videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(readonly, copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSURL *filteredLocalDestinationURL; // @synthesize filteredLocalDestinationURL=_filteredLocalDestinationURL;
@property(readonly, nonatomic) NSURL *localDestinationURL; // @synthesize localDestinationURL=_localDestinationURL;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 stillDisplayTime:(CDStruct_1b6d18a9)arg4 metadata:(id)arg5 videoZoomFactor:(double)arg6 reason:(long long)arg7 videoPreviewSurface:(void *)arg8 coordinationInfo:(id)arg9 error:(id)arg10;

@end

