//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface VMUDebugTimer : NSObject
{
    NSDate *_programStartTime;
    NSDate *_eventStartTime;
    NSString *_eventMessage;
}

- (void).cxx_destruct;
- (void)stop;
- (void)startWithMessage:(id)arg1;
- (id)init;

@end

