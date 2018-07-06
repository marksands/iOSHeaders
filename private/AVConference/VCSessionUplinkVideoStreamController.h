//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, VCIDRScheduler;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkVideoStreamController : NSObject
{
    float _startTime;
    float _currentFrameTime;
    id _delegate;
    NSMutableDictionary *_videoStreams;
    NSMutableDictionary *_streamInfoMap;
    NSMutableDictionary *_activeVideoStreams;
    NSMutableSet *_streamToPause;
    NSMutableSet *_streamToResume;
    NSMutableDictionary *_streamScheduleWifi;
    NSMutableDictionary *_streamScheduleCell;
    NSMutableDictionary *_currentStreamSchedule;
    NSDictionary *_pendingVideoStreams;
    VCIDRScheduler *_schedulerWifi;
    VCIDRScheduler *_schedulerCell;
    _Bool _pendingStreamsUpdated;
    struct _opaque_pthread_mutex_t _mutex;
    NSMutableArray *_streamsPendingKeyFrameGeneration;
    NSMutableArray *_streamResetIDR;
    NSArray *_streamIDsWifi;
    NSArray *_streamIDsCell;
    unsigned int _captureFrameRate;
}

@property(nonatomic) float currentFrameTime; // @synthesize currentFrameTime=_currentFrameTime;
@property(copy, nonatomic) NSArray *streamIDsWifi; // @synthesize streamIDsWifi=_streamIDsWifi;
@property(copy, nonatomic) NSArray *streamIDsCell; // @synthesize streamIDsCell=_streamIDsCell;
@property unsigned int captureFrameRate; // @synthesize captureFrameRate=_captureFrameRate;
@property(copy, nonatomic) NSDictionary *pendingVideoStreams; // @synthesize pendingVideoStreams=_pendingVideoStreams;
@property(readonly) NSMutableDictionary *activeVideoStreams; // @synthesize activeVideoStreams=_activeVideoStreams;
- (void)unlock;
- (void)lock;
- (id)schedulerStreamWithVideoStream:(id)arg1;
- (id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)arg1;
- (void)handleStreamsResetIDR;
- (id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)arg1 shouldRemoveFromPendingArray:(_Bool *)arg2;
- (void)handleStreamsPendingKeyFrameGeneration;
- (_Bool)pauseStreams;
- (_Bool)shouldGenerateIDRWithStreamSchedule:(id)arg1;
- (_Bool)resumeStreams;
- (id)delegate;
- (void)initilizeStreamInfoMapWithStreamInfos:(id)arg1;
- (id)anchorStreamIDWithCappedVideoStreamIDs:(id)arg1;
- (void)generateKeyFrameWithStreamID:(unsigned int)arg1;
- (void)setIsLocalOnCellular:(_Bool)arg1 cappedVideoStreamIDs:(id)arg2;
- (void)dealloc;
- (id)initWithVideoStreams:(id)arg1 streamInfos:(id)arg2 delegate:(id)arg3;

@end

