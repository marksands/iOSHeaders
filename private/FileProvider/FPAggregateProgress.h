//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface FPAggregateProgress : NSProgress
{
    NSMutableArray *_childProgresses;
}

- (void).cxx_destruct;
- (void)startReportingProgress;
- (void)cancel;
- (void)addChild:(id)arg1;

@end

