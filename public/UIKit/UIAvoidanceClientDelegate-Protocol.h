//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSValue, UIAvoidanceCoordinator;

@protocol UIAvoidanceClientDelegate <NSObject>
- (NSValue *)avoid:(NSDictionary *)arg1 forClient:(id <UIAvoidanceClient>)arg2 withCoordinator:(UIAvoidanceCoordinator *)arg3;
@end

