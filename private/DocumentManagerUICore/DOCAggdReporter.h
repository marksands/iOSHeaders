//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DOCAggdReporter : NSObject
{
    unsigned long long _recentsViewStartTime;
}

+ (_Bool)enabled;
+ (id)sharedReporter;
- (void)stopToMeasureTimeToLoad:(unsigned long long)arg1;
- (void)startToMeasureTimeToLoad:(unsigned long long)arg1;

@end

