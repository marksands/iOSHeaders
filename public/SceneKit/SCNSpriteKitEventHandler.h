//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SKScene;

@interface SCNSpriteKitEventHandler : NSObject
{
    SKScene *_scene;
    NSMutableDictionary *_touchMap;
    _Bool _mouseIsDown;
    _Bool _rightMouseIsDown;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (_Bool)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)init;

@end

