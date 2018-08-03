//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoMetadata.h"

@class NSString;

@interface SVMutableVideoMetadata : NSObject <SVVideoMetadata>
{
    _Bool _muted;
    double _duration;
    double _time;
    double _framerate;
    double _timePlayed;
    double _volume;
}

@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) double timePlayed; // @synthesize timePlayed=_timePlayed;
@property(nonatomic) double framerate; // @synthesize framerate=_framerate;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

