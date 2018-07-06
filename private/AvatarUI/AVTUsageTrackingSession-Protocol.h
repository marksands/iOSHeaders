//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol AVTUsageTrackingSession
- (void)didResumeFaceTracking;
- (void)didPauseFaceTracking;
- (void)didStopFaceTrackingInCarousel;
- (void)didChangeCurrentAvatarInCarousel:(id <AVTAvatarRecord>)arg1;
- (void)didStartFaceTrackingInCarouselWithAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didLeaveEditor;
- (void)didEnterEditor;
- (void)didDeleteAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didDuplicateAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didEditAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didCreateAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didTriggerHoldPose;
- (void)didShowExpandedMode;
- (void)didSendStickerWithAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didSendImageWithAvatar:(id <AVTAvatarRecord>)arg1;
- (void)didReplayVideo;
- (void)didDiscardVideoWithDuration:(double)arg1;
- (void)didSendVideoWithAvatar:(id <AVTAvatarRecord>)arg1 duration:(double)arg2;
- (void)didRecordVideo;
- (void)end;
- (void)beginWithStore:(id <AVTAvatarStore>)arg1;
@end

