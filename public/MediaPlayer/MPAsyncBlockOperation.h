//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@interface MPAsyncBlockOperation : MPAsyncOperation
{
    CDUnknownBlockType _startHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
- (void).cxx_destruct;
- (void)start;
- (id)initWithStartHandler:(CDUnknownBlockType)arg1;

@end

