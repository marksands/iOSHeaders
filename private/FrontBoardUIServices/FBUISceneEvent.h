//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSSceneTransitionContext;

@interface FBUISceneEvent : NSObject
{
    FBSSceneTransitionContext *_transitionContext;
    CDUnknownBlockType _sender;
    _Bool _sent;
}

@property(readonly, retain, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void)sendWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)send;
- (void)dealloc;
- (id)initWithTransitionContext:(id)arg1 sender:(CDUnknownBlockType)arg2;

@end

