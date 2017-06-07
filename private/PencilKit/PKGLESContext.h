//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKGLContext.h>

@class EAGLContext;

@interface PKGLESContext : PKGLContext
{
    EAGLContext *_eaglContext;
    EAGLContext *_previousContext;
}

+ (id)defaultShareContext;
@property(readonly, nonatomic) EAGLContext *eaglContext; // @synthesize eaglContext=_eaglContext;
- (void).cxx_destruct;
- (void)restorePreviousContext;
- (void)makeCurrentAndStorePreviousContext;
- (void)makeCurrent;
- (id)initWithSharedContext:(id)arg1;

@end

