//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, CLKUIQuadView;

@interface CLKUIQuadViewDisplayLink : NSObject
{
    CLKUIQuadView *_quadView;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)setPaused:(_Bool)arg1;
- (_Bool)isPaused;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (unsigned long long)preferredFramesPerSecond;
- (void)_displayLinkFired:(id)arg1;
- (id)initWithTarget:(id)arg1;

@end

