//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface PDFTimerPrivate : NSObject
{
    NSObject *target;
    SEL selector;
    NSTimer *timer;
    double timeInterval;
    _Bool isRequested;
}

- (void).cxx_destruct;

@end
