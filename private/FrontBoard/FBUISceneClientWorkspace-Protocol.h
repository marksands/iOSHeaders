//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUISceneClientIdentity, NSString;

@protocol FBUISceneClientWorkspace <NSObject>
@property(readonly, copy, nonatomic) FBUISceneClientIdentity *clientIdentity;
@property(readonly, retain, nonatomic) id <FBUIProcess> clientProcess;
- (void)endTransaction;
- (void)beginTransaction;
- (id <FBUISceneClient>)clientForSceneIdentifier:(NSString *)arg1;
@end

