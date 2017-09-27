//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CAMAnimationGeneratorAnimation : NSObject
{
    double _startTime;
    double _duration;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 updateHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

