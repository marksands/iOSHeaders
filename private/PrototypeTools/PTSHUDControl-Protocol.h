//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _UISettings;

@protocol PTSHUDControl <NSObject>
+ (struct CGRect)defaultFrame;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic) int alignment;
@property(copy, nonatomic) NSString *valueKeyPath;
@property(nonatomic) __weak _UISettings *settings;
- (struct CGRect)frame;
@end

