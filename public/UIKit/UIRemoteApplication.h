//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIRemoteApplication : NSObject
{
    NSString *_machServiceName;
    unsigned int _port;
}

- (void).cxx_destruct;
- (void)didTakeScreenshot;
- (void)wakeTimerFired;
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1;
- (void)statusBarWillChangeOrientation:(long long)arg1 duration:(float)arg2;
- (void)updatePort;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end

