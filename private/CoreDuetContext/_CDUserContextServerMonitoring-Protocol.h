//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _CDUserContextServerMonitoring <NSObject>
- (void)handleRegistrationCompleted:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
- (void)handleContextualChange:(NSString *)arg1 handler:(void (^)(_Bool))arg2;
@end

