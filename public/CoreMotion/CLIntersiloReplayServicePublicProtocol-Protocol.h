//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLIntersiloServiceProtocol.h"

@class NSSet, NSString;

@protocol CLIntersiloReplayServicePublicProtocol <CLIntersiloServiceProtocol>
- (void)receiveConnectionTo:(byref id)arg1;
- (void)useRecordingFileForPlayback:(NSString *)arg1 expectedClasses:(NSSet *)arg2 coordinator:(byref id <CLIntersiloReplayServiceClientProtocol>)arg3 synchronousFilter:(CDUnknownFunctionPointerType)arg4;
- (void)useRecordingFileForPlayback:(NSString *)arg1 expectedClasses:(NSSet *)arg2;
@end

