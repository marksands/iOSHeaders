//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _PASNotificationToken;

@protocol _PASAssetProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long bestAssetVersionObserved;
@property(readonly, nonatomic) unsigned long long compatibilityVersion;
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) unsigned long long assetVersion;
- (NSString *)pathForResourceWithName:(NSString *)arg1 extension:(NSString *)arg2;
- (_Bool)deregisterUpdateHandlerAsyncWithToken:(_PASNotificationToken *)arg1;
- (_PASNotificationToken *)registerUpdateHandler:(void (^)(id <_PASAssetProtocol>))arg1;
@end

