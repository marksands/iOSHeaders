//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/IXAppInstallCoordinator.h>

#import <InstallCoordination/IXCoordinatorWithAppAssetPromise-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithAutoEnablingExtensionTypes-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithInitialODRAssetPromises-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithInstallOptions-Protocol.h>
#import <InstallCoordination/IXUserInitiatedCoordinator-Protocol.h>

@class NSString;

@interface IXUpdatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithAutoEnablingExtensionTypes, IXCoordinatorWithInitialODRAssetPromises, IXUserInitiatedCoordinator>
{
}

+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
- (id)validInstallTypes;
@property(readonly, nonatomic) _Bool hasInitialODRAssetPromises;
- (id)initialODRAssetPromisesWithError:(id *)arg1;
- (_Bool)setInitialODRAssetPromises:(id)arg1 error:(id *)arg2;
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
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

