//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHASleepWakeMonitor : NSObject
{
    unsigned int _powerAssertionID;
}

+ (_Bool)isSystemInDarkWake;
@property unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
- (void)releaseUserIdlePowerAssertion;
- (void)takeUserIdlePowerAssertion;

@end

