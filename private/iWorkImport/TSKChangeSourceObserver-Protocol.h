//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol TSKChangeSourceObserver <NSObject>

@optional
- (void)didProcessAllChanges;
- (void)processChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
- (void)preprocessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
@end

