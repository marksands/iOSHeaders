//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SXVideoLoadingStateObserving <NSObject>
@property(copy, nonatomic, setter=onFailed:) CDUnknownBlockType failedBlock;
@property(copy, nonatomic, setter=onFinished:) CDUnknownBlockType finishedBlock;
@property(copy, nonatomic, setter=onStart:) CDUnknownBlockType startBlock;
@property(readonly, nonatomic) unsigned long long state;
@end

