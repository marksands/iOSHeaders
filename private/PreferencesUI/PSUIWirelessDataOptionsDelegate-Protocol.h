//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, PSSpecifier;

@protocol PSUIWirelessDataOptionsDelegate <NSObject>

@optional
- (NSNumber *)appWirelessDataOptionForSpecifier:(PSSpecifier *)arg1;
- (void)setAppWirelessDataOption:(NSNumber *)arg1 forSpecifier:(PSSpecifier *)arg2;
- (NSNumber *)appCellularDataEnabledForSpecifier:(PSSpecifier *)arg1;
- (void)setAppCellularDataEnabled:(NSNumber *)arg1 forSpecifier:(PSSpecifier *)arg2;
@end

