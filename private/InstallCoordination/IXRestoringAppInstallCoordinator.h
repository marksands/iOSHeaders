//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstallCoordination/IXAppInstallCoordinator.h>

#import "IXCoordinatorWithAppAssetPromise.h"
#import "IXCoordinatorWithAutoEnablingExtensionTypes.h"
#import "IXCoordinatorWithInstallOptions.h"
#import "IXCoordinatorWithUserDataPromise.h"

@class NSString;

@interface IXRestoringAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithAutoEnablingExtensionTypes, IXCoordinatorWithUserDataPromise>
{
}

+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
- (id)validInstallTypes;
- (id)userDataRestoreShouldBegin:(_Bool *)arg1;
@property(readonly, nonatomic) _Bool hasUserDataPromise;
- (id)userDataPromiseWithError:(id *)arg1;
- (_Bool)setUserDataPromise:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasAutoEnabledExtensionTypes;
- (_Bool)setAutoEnabledExtensionTypes:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasInstallOptions;
- (_Bool)setInstallOptions:(id)arg1 error:(id *)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)arg1;
- (_Bool)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)appAssetPromiseHasBegunFulfillment:(_Bool *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasAppAssetPromise;
- (id)appAssetPromiseWithError:(id *)arg1;
- (_Bool)setAppAssetPromise:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

