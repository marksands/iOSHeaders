//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingObservation : NSObject
{
    _Bool _playing;
    NSString *_nowPlayingAppBundleIdentifier;
}

@property(copy, nonatomic) NSString *nowPlayingAppBundleIdentifier; // @synthesize nowPlayingAppBundleIdentifier=_nowPlayingAppBundleIdentifier;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)arg1 isPlaying:(_Bool)arg2;

@end

