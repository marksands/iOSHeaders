//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNRecordingMovieTrack, KNRecordingSyncState, NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface KNRecording : TSPObject
{
    NSArray *_eventTracks;
    KNRecordingMovieTrack *_movieTrack;
    double _duration;
    NSDate *_modificationDate;
    KNRecordingSyncState *_syncState;
}

@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) KNRecordingMovieTrack *movieTrack; // @synthesize movieTrack=_movieTrack;
@property(readonly, nonatomic) NSArray *eventTracks; // @synthesize eventTracks=_eventTracks;
- (void).cxx_destruct;
- (void)slideNodeWillBeRemovedFromDocument:(id)arg1;
- (void)slideNodeWasAddedToDocument:(id)arg1;
- (id)recordingByMarkingAsOutOfSyncWithShow:(_Bool)arg1 withLocalOutOfSyncToken:(id)arg2 restoringModificationDate:(id)arg3;
- (id)recordingByReplacingAfterTime:(double)arg1 withRecording:(id)arg2 trimmedMovieSegment:(id)arg3;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)arg1 trimDuration:(out double *)arg2;
- (_Bool)isLocallyOutOfSyncWithShowUsingLocalOutOfSyncToken:(id)arg1;
@property(readonly, nonatomic, getter=isInSyncWithShow) _Bool inSyncWithShow;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4;
- (id)initWithContext:(id)arg1 eventTracks:(id)arg2 movieTrack:(id)arg3 duration:(double)arg4 modificationDate:(id)arg5;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct RecordingArchive *)arg1 archiver:(id)arg2;

@end

