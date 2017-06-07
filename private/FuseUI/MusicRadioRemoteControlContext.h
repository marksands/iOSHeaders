//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVController, MPAVItem, RadioStation;

@interface MusicRadioRemoteControlContext : NSObject
{
    MPAVController *_player;
    RadioStation *_radioStation;
    long long _trackID;
    MPAVItem *_currentlyPlayingItem;
}

@property(readonly, nonatomic) MPAVItem *currentlyPlayingItem; // @synthesize currentlyPlayingItem=_currentlyPlayingItem;
@property(readonly, nonatomic) long long trackID; // @synthesize trackID=_trackID;
@property(readonly, nonatomic) RadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property(readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2;
- (id)init;

@end
