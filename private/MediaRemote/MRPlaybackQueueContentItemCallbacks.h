//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRPlaybackQueueContentItemCallbacks : NSObject
{
    NSMutableArray *_callbacks;
}

@property(readonly, nonatomic) NSArray *callbacks;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)remove:(void *)arg1;
- (void *)addCallback:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)dealloc;

@end

