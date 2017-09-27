//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IMAVDaemonListener : NSObject
{
    NSMutableArray *_handlers;
    _Bool _setupComplete;
    _Bool _postedSetupComplete;
}

@property(readonly, nonatomic) _Bool isSetupComplete; // @synthesize isSetupComplete=_setupComplete;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setupComplete:(_Bool)arg1 info:(id)arg2;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)_noteDisconnected;
- (void)dealloc;
- (id)init;

@end

