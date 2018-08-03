//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMGroupFetchedResultsControllerDelegate.h"
#import "STTimeAllowancesViewModelCoordinator.h"

@class NSManagedObjectID, NSNumber, NSString, RMAskForTimeClient, RMGroupFetchedResultsController, STTimeAllowancesViewModel;

@interface STTimeAllowancesViewModelCoordinator : NSObject <RMGroupFetchedResultsControllerDelegate, STTimeAllowancesViewModelCoordinator>
{
    STTimeAllowancesViewModel *_viewModel;
    NSString *_organizationIdentifier;
    NSNumber *_userDSID;
    id <RMPersistenceControllerProtocol> _persistenceController;
    RMAskForTimeClient *_askForTimeClient;
    RMGroupFetchedResultsController *_groupFetchResultsController;
    NSManagedObjectID *_userObjectID;
}

@property(copy, nonatomic) NSManagedObjectID *userObjectID; // @synthesize userObjectID=_userObjectID;
@property(readonly, nonatomic) RMGroupFetchedResultsController *groupFetchResultsController; // @synthesize groupFetchResultsController=_groupFetchResultsController;
@property(readonly, nonatomic) RMAskForTimeClient *askForTimeClient; // @synthesize askForTimeClient=_askForTimeClient;
@property(readonly, nonatomic) id <RMPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(readonly) STTimeAllowancesViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_deleteActivationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_saveActivationDictionary:(id)arg1 configurationDictionaries:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)respondToAskForTime:(id)arg1 withApproval:(_Bool)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveAlwaysAllowList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveDeviceBedtime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_alwaysAllowConfigurationIdentifier;
- (id)_alwaysAllowActivationIdentifier;
- (id)_budgetConfigurationIdentifier;
- (id)_bedtimeConfigurationIdentifier;
- (id)_bedtimeActivationIdentifier;
- (id)_iCloudAccountPredicate;
- (_Bool)_isPersonalOrganization;
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4;
- (void)_persistenceStoreDidChange:(id)arg1;
- (void)_registerForPersistenceStoreNotifications;
- (void)_saveDefaultAlwaysAllowList;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

