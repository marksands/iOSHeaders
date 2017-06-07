//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCJinglePlayActivityReportingController, MPCMediaPlayerLegacyPlayer, MPCReportingPlaybackObserver, MPRTCReportingController;

@interface MPCMediaPlayerLegacyReportingController : NSObject
{
    MPRTCReportingController *_rtcReportingController;
    MPCMediaPlayerLegacyPlayer *_player;
    MPCReportingPlaybackObserver *_reportingPlaybackObserver;
    MPCJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
}

@property(retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController; // @synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController;
@property(retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property(nonatomic) __weak MPCMediaPlayerLegacyPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_cloudServiceControllerSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_cloudServiceControllerCloudLibraryEnabledDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)initWithPlayer:(id)arg1;

@end

