//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol RERemoteTrainingServerInterface <NSObject>
- (void)updateRemoteAttribute:(id <NSSecureCoding>)arg1 forKey:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)performTrainingWithElements:(NSArray *)arg1 events:(NSArray *)arg2 interactions:(NSArray *)arg3 completion:(void (^)(void))arg4;
@end

