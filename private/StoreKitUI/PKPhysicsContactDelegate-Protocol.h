//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPhysicsContact;

@protocol PKPhysicsContactDelegate <NSObject>

@optional
- (void)didEndContact:(PKPhysicsContact *)arg1;
- (void)didBeginContact:(PKPhysicsContact *)arg1;
@end

