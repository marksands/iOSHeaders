//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimatedSlideView, KNPlaybackSession;

__attribute__((visibility("hidden")))
@interface KNOffscreenController : NSObject
{
    KNAnimatedSlideView *_animatedSlideView;
    KNPlaybackSession *_session;
    struct CGSize _outputSize;
}

@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, nonatomic) KNPlaybackSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak KNAnimatedSlideView *animatedSlideView; // @synthesize animatedSlideView=_animatedSlideView;
- (void).cxx_destruct;
- (void)drawCurrentEventIntoContext:(struct CGContext *)arg1 intoRect:(struct CGRect)arg2 ignoreBuildVisibility:(_Bool)arg3;
- (void)generateImageOfCurrentEventWithCompletonHandler:(CDUnknownBlockType)arg1;
- (struct CGImage *)copyImageOfCurrentEventIgnoringBuildVisilibity:(_Bool)arg1;
- (_Bool)gotoSlideNode:(id)arg1 andEvent:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(struct CGSize)arg3;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2;

@end

